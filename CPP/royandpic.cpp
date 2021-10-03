#include<stdlib.h>
#include<iostream>

using namespace std;

int main(){
	int l;
	cin>>l;
	int n;
	cin>>n;
	while(n>0){

		int w,h;
		cin>>w;
		cin>>h;

		if(w<l||h<l){
			cout<<"UPLOAD ANOTHER\n";
		}
		else{
				if(w==h){
				cout<<"ACCEPTED\n";
				}
				else{
				cout<<"CROP IT\n";
				}
		}
		n--;
}
	return 0;
}
