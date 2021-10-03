#include<iostream>
#include<vector>
using namespace std;

int main(){
 int t;
 cin>>t;
 while(t>0){

     int p;
     cin>>p;
     int task[p];
//Input
     for(int i=0;i<p;i++){
         cin>>task[i];
     }
//Output check
//for(int i=0;i<p;i++){
//cout<<task[i]<<"\n";}

string r = "NO";
//YesNo Check
for(int i=0; i<p; i++){
    if(task[i]==0){
        r = "YES";
        break;
    }
}
cout<<r<<"\n";
t--;
 }


}