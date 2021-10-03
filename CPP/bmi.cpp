#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<iterator>
#include<algorithm>
#include<utility>
#include<bitset>
#include <stdlib.h>
using namespace std;

int code(){
int h,m;
cin>>m>>h;

int bmi = (m / (h*h));

if(bmi <= 18){
    cout<<"1\n";
}
else if(bmi >= 19 && bmi <= 24){
    cout<<"2\n";
}
else if(bmi >= 25 && bmi <= 29){
    cout<<"3\n";
}
else if(bmi >= 30){
    cout<<"4\n";
}
return 0;
}

int main(){
    int t;
    cin>>t;
    while(t>0){
        code();
        t--;
    }
}