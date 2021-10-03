//Ronaldo vs Messi
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<iterator>
#include<sstream>
#include<algorithm>
#include<utility>
#include<bitset>
#include<string>
#include <stdlib.h>
using namespace std;

int code(){
int l;
cin>>l;

string imes,iron;
cin>>iron>>imes;
int len = imes.length();
int mes = stoi(imes);
int ron = stoi(iron);
for(int i = 0; i < len; i++){
    if(imes[i+1] != 0){
        mes = mes - (10 * len - i);
    }
    if(iron[i+1] != 0){
        ron = ron - (10 * len - i);
    }
}



//cout<<mes<<" "<<ron;
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
