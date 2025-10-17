#include <iostream>
using namespace std;

 int printHello(){         //int ki jgh void de de
    cout<< "hello" << endl;
    return 3;
 }                         // it will then return 0
 

int main(){
    int val =  printHello();
    cout<< "val= "<< val <<endl;
    
   return 0;
}
 