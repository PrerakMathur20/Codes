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
#define outarr(s,n,arr) for (ll int i = s; i < n; i++) cout<<arr[i]<<' ';
using namespace std;

int code(){

    ll int n;
    string str;

    get n;
    get str;

    ll int one= 0;
    ll int zero = 0;

    int flag = 0;

    fi(0,n){
        if(str[i] == '0') zero++;
        else one++;

        if(one >= zero){
            flag = true;
            break;
        }
    }

    print (flag == 1 ? "YES\n" : "NO\n");

return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t;
    get t;
    while(t>0){
        code();
        t--;
    }
    return 0;
}