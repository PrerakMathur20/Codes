#include <iostream>

using namespace std;

int main()
{
	int t;
	//cout<<"Gimme t\n";
	cin >> t;
	
do{
	int a,b;
	int c;

		cin>>a>>b;
	 if(a>b){
		 
	    c=a-b+1;
	 }
	 else if(b>a){

	 	c=b-a+1;
	 }
	 else if(a==b){
		 c=a;
	 }
	 else {
		 cout<<"This shit";
	 }
cout<<c<<"\n";
t--;

}while(t>0);
	

	return 0;
}
