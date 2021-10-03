#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int seat(){
int seat;
cin>>seat;
int op;

int x = seat / 12;
if((x * 12+ 1)==seat){
 op = seat + 11;
}
else if((x * 12 + 2)==seat){
 op = seat + 9;
}
else if((x * 12 + 3)==seat){
 op = seat + 7;
}
else if((x * 12 + 4)==seat){
 op = seat + 5;
}
else if((x * 12 + 5)==seat){
 op = seat + 3;
}
else if((x * 12 + 6)==seat){
 op = seat + 1;
}
else if((x * 12 + 7)==seat){
 op = seat -1;
}
else if((x * 12 + 8)==seat){
 op = seat - 3;
}
else if((x * 12 + 9)==seat){
 op = seat - 5;
}
else if((x * 12 + 10)==seat){
 op = seat - 7;
}
else if((x * 12 + 11)==seat){
 op = seat - 9;
}
else if((x * 12)==seat){
 op = seat - 11;
}
else{
    op = 000;
}
cout<<op<<" ";

int n = seat / 12;

if(((n * 12 + 1)==seat) || ((n * 12 + 6)==seat)){
    cout<<"WS\n";
}
else if(((n * 12 + 2)==seat) || ((n * 12 + 5)==seat)){
    cout<<"MS\n";
}
else if(((n * 12 + 3)==seat) || ((n * 12 + 4)==seat)){
    cout<<"AS\n";
}
else if(((n * 12)==seat) || ((n * 12 + 7)==seat)){
    cout<<"WS\n";
}
else if(((n * 12 + 11)==seat) || ((n * 12 + 8)==seat)){
    cout<<"MS\n";
}
else if(((n * 12 + 10)==seat) || ((n * 12 + 9)==seat)){
    cout<<"AS\n";
}
else{
    cout<<"Han SOLO";
}
}
int main(){
int t;
cin>>t;
while(t>0){
 seat();
t--;
}
}