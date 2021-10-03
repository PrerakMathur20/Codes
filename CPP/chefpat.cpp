#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<map>
#include<iterator>
#include<algorithm>
#include<utility>
#include<bitset>
#include<cmath>
#include<math.h>
#include <stdlib.h>
using namespace std;

int code(){
long int ll;
cin>>ll;

long int line1[ll];
long int line2[ll];
long int order[ll];

//input
for(int i=0; i<ll; i++){
    cin>>line1[i];
}
for(int i=0; i<ll; i++){
    line2[i] = line1[i];
}

//arrange asc line2
 int n = sizeof(line2) / sizeof(line2[0]); 
sort(line2, line2 + n,greater<int>()); 

for(int i=0; i<ll; i++){
    for(int j=0; i<ll; j++){
        if(line1[i] == line2[j]){
            order[i] = j;
        }
    }    

}
for(int i=0; i < ll; i++){
    cout<<order[i]<<" ";
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
