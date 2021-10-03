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

int main(){
int n;
cin>>n;
int N[n];

int odd=0,even=0;

for(int i=0; i <n; i++){
    cin>>N[i];
}

for(int i=0; i <n; i=i+2){
    odd = odd + N[i];
}
for(int i=1; i <n; i=i+2){
    even = even + N[i];
}
//cout<<odd<<" "<<even<<" \n";

if(odd < even){
    cout<<"Yes";
}
else{
    cout<<"No\n";
}
}