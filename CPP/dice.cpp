#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){

            int roll;
            int tot=0;
            int count=1;
            cin>>roll;

            while(roll>0){
                if(count==1&&roll!=0){
                    tot=tot+6;
                    count++;
                    roll--;
                }
                if(count==2&&roll!=0){
                    tot=tot+6;
                    count++;
                    roll--;
                }
                if(count==3&&roll!=0){
                    tot=tot+5;
                    count=1;
                    roll--;
                }
        }
        cout<<tot<<"\n";
            t--;
    }
   
}