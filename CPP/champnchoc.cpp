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

int code(){
    int N;
    cin>>N;
    int s[N];
    int k[N];

    for(int i=0; i < N; i++){
        cin>>s[i];
    }
    for(int i=0; i < N; i++){
        cin>>k[i];
    }
    int min[N];
    
//Re arrange array s
int n = sizeof(s) / sizeof(s[0]);
sort(s, s + n, greater<int>()); 
   
    int arr[N];
    int out=0;

   
for(int i =0; i <N; i++){
    for(int j = 0; j < N; j++){
        if(k[i] <= s[j]){
            arr[i]=s[j];
            s[j] =0;;
           
        }
        
    }
}
    for(int i =0; i<N; i++){
        cout<<s[i]<<" ";
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
