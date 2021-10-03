#include <iostream>
using namespace std;

int code(){

int n;
cin>>n;
int t;
int odd=0, even=0;

for(int i=0; i < n; i++){
    cin>>t;
    if(t%2==1){
        odd++;
}
    else{
        even++;
}
}
if(even>odd){
    cout<<odd<<"\n";
}
else{
    cout<<even<<"\n";
}
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
