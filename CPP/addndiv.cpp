#include <iostream>
using namespace std;

int code(){

int a,b;
cin>>a>>b;
int count = 0;
while(a>0){
    if((a/b==0))break;
    if (a!=0){
if(b ==a || b == 1){
    b++;
}
else {
    a = a / b;
}
if(b > a){
    a = a / b;
}
count++;
//cout<<a<<" ";

}

}
cout<<"\n"<<count<<"\n";
return 0;
}

int main() {
	int t;
    cin>>t;
    while(t>0){
        code();
        t--;
    }
	return 0;
}