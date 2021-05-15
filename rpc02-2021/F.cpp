#include <bits/stdc++.h>

using namespace std;
const int maxi = 10000+10;

int a[maxi];

int main(){
	int n;
	set<int>s;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s.insert(i);
	}
	auto i = s.begin();
	int x_ant = 1;
	while(s.size()>1){
		int x = (a[*i] - (s.size() + 1 - x_ant))%s.size();
		if(x==0){
			auto it = s.end();
			it--;
			i = s.begin();
			s.erase(it);
			x++;
		}else{
			auto it = s.begin();
			for(int j = 1;j < x;j++,it++);
			i = it;i++;
			s.erase(it);
		}
		x_ant = x;
	}
	for(auto j: s){
		cout<<j<<endl;
	}
	return 0;
}
