#include <bits/stdc++.h>

#define get cin>> 
#define print cout<<
#define fi(s,n) for(int i = s; i < n; i++)
#define fj(s,n) for(int j = s; j < n; j++)
#define fk(s,n) for(int k = s; k < n; k++)
#define inarr(s,n,arr) for (int i = s; i < n; i++) cin>>arr[i];
#define outarr(s,n,arr) for (int i = s; i < n; i++) cout<<arr[i];
#define ll long long
using namespace std;

int code(){

    ll int n,k;
    get n>>k;
    int mod = n % k;
    ll int d;
    if(mod == 0){
        d = n / k;
    }
    else d = (n + k - 1) / k;

    int x;

    if(mod != 0) x = mod;
    else x = k;

    print d<<" "<<x<<"\n";

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