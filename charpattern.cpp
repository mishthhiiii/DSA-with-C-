#include <iostream>
using namespace std;
int main(){
    int n = 4;
     char ch = 'A';
    for(int i=0;i<=n-1;i++){   //outer loop
        for(int j=0;j<=n-1;j++){  //inner loop
            cout<< ch <<" ";
            ch = ch + 1;
        }
        cout<<endl;
    }
    cout << "after pattern: " << ch << endl;
    return 0;
}