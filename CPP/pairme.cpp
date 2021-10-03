#include <iostream>
using namespace std;

int cases(){

int x,y,z;

cin>>x>>y>>z;

if((x==y+z)||(y==x+z)||(z==x+y)){
    cout<<"YES\n";
}
else{
    cout<<"NO\n";
}
}

int main() {
	int t;
    cin>>t;
    while(t>0){
        cases();
        t--;
    }
	return 0;
}
