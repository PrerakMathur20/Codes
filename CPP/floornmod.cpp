#include <iostream>
using namespace std;

int code(){
int a,b;
cin>>a>>b;
int special=0;
int temp;
if(a < b){
    temp = a;
    a = b;
    b = temp;
}

while(a > b){
    if((a/b) == (a % b))
    special++;

}



cout<<special<<"\n";
a--;



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
