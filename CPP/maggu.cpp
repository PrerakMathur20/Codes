#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<iterator>
#include<algorithm>
#include<utility>
#include<bitset>
#include <stdlib.h>
using namespace std;

int main(){
int n;
cin>>n;
int id[n];
int mark[n];

for(int i = 0; i < n; i++){
    cin>>id[i]>>mark[i];
    
    int mm=-1,mi;
    for(int j = 0; i <n; j++){
        if(mm < mark[j]) {mm = mark[j];
        mi = j;}
    }

cout<<"mm is "<<mm<<" mi is "<<mi<<"\n";

}
}