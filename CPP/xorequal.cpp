#include <bits/stdc++.h>

#define get cin>> 
#define print cout<<
#define ll long long
#define ld long double
#define rep(i, k, n) for (ll int i = k; i < n; i++)
#define rept(i, k, n) for (auto i = k; i != n; ++i)
#define drep(i, k, n) for (ll int i = k; i >= n; i--)
#define fi(s,n) for(ll int i = s; i < n; i++)
#define fj(s,n) for(ll int j = s; j < n; j++)
#define fk(s,n) for(ll int k = s; k < n; k++)
#define inarr(s,n,arr) for (ll int i = s; i < n; i++) cin>>arr[i];
#define outarr(s,n,arr) for (ll int i = s; i < n; i++) cout<<arr[i];
#define mod 1000000007
using namespace std;

ll int power(ll int a, ll int b, ll int c){
    
    ll int temp = 1;
    a = a % c;

    if(a == 0) return 0;

    while(b > 0){
        if(b & 1) temp = (temp * a) % c;

        b = b >> 1;
        a = (a * a) % c;
    }

    return temp;

}

int code(){

    ll int n;
    get n;

    ll out = power(2 , n-1, mod);
    print out <<"\n";

return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    get t;
    while(t>0){
        code();
        t--;
    }
    return 0;
}