#include <iostream>
using namespace std;

int main(){
int test;
float in,d;
cin>>in;

int i=10;
while(i>0){
    d = in / i;
    test = in / i;
    if(d == test){
        cout<<i<<"\n";
        break;
    }
    i--;
}
}
