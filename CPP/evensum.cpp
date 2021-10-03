#include <iostream>
using namespace std;

int code(){

int N;
cin>>N;
int n[N];

for(int i=0; i<N; i++){
    cin>>n[i];
}
int x=1;
int sum=0;
for(int i=0; i<N ; i++){
    if((rand()%2)==1){
        x=x * (-1);
    }
    if((rand()%2)==2){
        x=x * (1);
    }
    sum = sum + (n[i] * x);
}
    if((sum%2)==0){
        cout<<"1\n";
    }
    else{
        cout<<"2\n";
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