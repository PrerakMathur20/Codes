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
string s;
cin>>s;
int n= s.length();
char arr[n+1];
strcpy(arr, s.c_str());

for(int i=0; i < n; i++){
    cout<<arr[i]<<" ";
}
int count =0;
for(int i=0; i<n; i++){
    for(int j=0; i<n; j++){
        if(arr[i] == arr[j]){
            count++;
        }
    }
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
