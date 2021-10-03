#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

int main(){

int t;
cin >> t;

while(t>0){
    
int r;
int c=0;

cin>> r;

while(r>0){
    if(r==1){
        break;
    }
    else if(r%2 == 0){
        r=r/2;
        c=c+1;

    }
    else{
        c=-1;
        break;
        
    }
}

cout<<c<<"\n";

t--;
}

return 0;
}

