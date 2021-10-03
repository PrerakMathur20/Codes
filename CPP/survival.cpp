#include<iostream>
#include<vector>
using namespace std;

int main(){
int t;
cin>>t;
while(t>0){
//Main

int c;
cin>>c;
int n[c];
for(int i=0; i<c;i++){
    cin>>n[i];
}
int max=0;
for (int i = 0; i < c; i++) {
        if (n[i] > max) 
            max = n[i];
        }
cout<<max<<"\n";
t--;
}
}