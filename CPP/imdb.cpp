#include <bits/stdc++.h>

#define get cin>> 
#define print cout<<
#define fi(s,n) for(int i = s; i < n; i++)
#define fj(s,n) for(int j = s; j < n; j++)
#define fk(s,n) for(int k = s; k < n; k++)
#define inarr(s,n,arr) for (int i = s; i < n; i++) cin>>arr[i];
#define outarr(s,n,arr) for (int i = s; i < n; i++) cout<<arr[i]<<" ";
#define ll long long
using namespace std;

int code(){
    ll int n,x;
    get n>>x;

    ll int c=0;
    ll int d=0;

    fi(0,n){
        ll int s[n];
        ll int r[n];
        get s[i]>>r[i];

        if(x>=s[i]) d = max(d,r[i]);
    }
    
    print d<<"\n";

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