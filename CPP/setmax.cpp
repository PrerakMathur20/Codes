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
    long int n;
    cin>>n;
    int arr[n];

for(int i=0; i < n; i++){
    cin>>arr[i];
}

long int nf=1, rf=1,sf=1,r;
r = n;
for(int i=1;i<=n;i++){    
      nf = nf*i;   
    } 

for(int i=1;i<=n;i++){    
      rf = rf*i;   
    } 

for(int i=1;i<=(n-r);i++){    
      sf = sf*i;  
    }
int out=0;
out = nf / (rf * sf);
cout<<out<<"\n";
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
