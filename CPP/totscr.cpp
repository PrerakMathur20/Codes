#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<cmath>
#include<iterator>
#include<algorithm>
#include<utility>
#include<bitset>
#include <stdlib.h>
using namespace std;

int code(){
long int part, prob;
cin >> part>>prob;
long int mark[prob];
long int final =0;
for(int i=0; i < prob; i++){
    cin >> mark[i];
}

while(part>0){
string sol;
cin >> sol;
long int x = sol.length();
long int myarray[x];
//int userstr[x];
//str to int arr
for(int i=0;i<x;i++){
    myarray[i] = sol[i] - '0';
}

for(int i =0; i < x; i++){
    if(myarray[i] == 1){
        final = final + mark[i];
    }

}
cout<<final<<"\n";
final =0;
part--;
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
