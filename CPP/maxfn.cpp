#include <iostream>
using namespace std;

int code(){
long a;
cin>>a;
long int A[a];

for(int i=0; i < a; i++){
    cin>>A[i];
    }

long int tot;
long int max=-1000000000;
long int min= 1000000000; 
for(int i=0; i < a; i++){
    if(max < A[i]){
        max = A[i];
    }
}

for(int i=0; i < a; i++){
    if(min > A[i]){
        min = A[i];
    }
}


tot = 2 * (max - min);
cout<<tot<<"\n";
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
