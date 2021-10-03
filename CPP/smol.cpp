#include<iostream>
#include <stdlib.h>
using namespace std;

int code(){
    int n,k, sol;
    cin>>n>>k;

    if(n>=k && k != 0){
        n = n%k;
        
        if(n<k){
            sol = n;
        }
        cout<<sol<<"\n";
    }
    else{
        cout<<n<<"\n";
    }

    
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
