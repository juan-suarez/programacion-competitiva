#include <bits/stdc++.h>

using namespace std;

int main(){
  int n,w=0,b=0,wh=0,bh=0,m1,m2,m3,m4;
  bool s=true;
  cin>>n;
  char A[n][n];
  char aux[n];
  for(int i =0; i<n; i++){
    cin>>aux;
    for(int j=0; j<n; j++){
      A[i][j] = aux[j];
      
    }
  }
  for(int i =0; i<n&&s!=false; i++){
    for(int j=0; j<n; j++){
        if(A[i][j]=='W'){
            w++;
        }else{
            b++;
        }
    }
    if(w==b){
    s=true;
    w=0;
    b=0;
    }else{
    s= false;
    break;
    }
  }
  for(int i =0; i<n&&s!=false; i++){
    for(int j=0; j<n; j++){
        if(A[j][i]=='W'){
            w++;
        }else{
            b++;
        }
    }
    if(w==b){
    s=true;
    w=0;
    b=0;
    }else{
    s= false;
    break;
    }
  }
  for(int i =0; i<n-2&&s!=false; i++){
    for(int j=0; j<n-2; j++){
        if((A[i][j]==A[i+1][j]&&A[i][j]==A[i+2][j])||
        (A[i][j]==A[i][j+1]&&A[i][j]==A[i][j+2]))
        {
            s= false;
            break;
        }
    }
  }
  if(s){
    cout<<"1"<<endl;
  }else{
    cout<<"0"<<endl;
  }

return 0;
}