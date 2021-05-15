//accepted
#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    set<string>s;
    set<string>answers;
    string words;
    while(cin>>words)
        s.insert(words);
    for(auto x: s)
    {
        for(int i=0;i < x.size();i++)
        {

            if(s.count(x.substr(0,i))&&s.count(x.substr(i,x.size())))
            {
                answers.insert(x);
            }
        }
    }
    for(auto x:answers)
        cout<<x<<endl;
}
