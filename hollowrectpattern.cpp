#include <bits/stdc++.h>
using namespace std;
int main(){
  /* int n,m;
  cin>>n>>m; */

 for(int i=1;i<=4;i++){
     for(int j=1;j<=6;j++){
        if(i==1 || j==1 || i==4 || j==6){
            cout<<"*";
        }
         else {
           cout<<" ";
         }
      }
       cout<<endl;
     }  
     return 0;
 }
     
    
  
    
 