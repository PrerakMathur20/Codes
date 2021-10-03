#include <bits/stdc++.h>

#define get cin>> 
#define print cout<<
#define f1(s,n) for(int i = s; i < n; i++)
#define f2(s,n) for(int j = s; j < n; j++)
#define f3(s,n) for(int k = s; k < n; k++)
#define inarr(s,n,arr) for (int i = s; i < n; i++) cin>>arr[i];
#define outarr(s,n,arr) for (int i = s; i < n; i++) cout<<arr[i];
#define ll long long
using namespace std;

int code(){

    ll int n, m, k;
     get n>>m>>k;
    ll int mat[n][m];
    f1(0,n){
        f2(0,m){
           mat[i][j] = k+i+1+j+1;
    }
    }
    ll int num = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            num = num ^ mat[i][j];
        }
    }
    cout<<num<<"\n";

return 0;
}

int main() {
    int t;
    get t;
    while(t>0){
        code();
        t--;
    }
    return 0;
}