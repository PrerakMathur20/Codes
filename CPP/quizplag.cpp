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
using namespace std;

int code(){

    ll int n,m,k;
    get n >> m >> k;

    int arr[k];

    inarr(0,k,arr);

    int max = -100000000;

    fi(0,k){
        if(max <= arr[i]) {
            max = arr[i];
        }
    }

    ll int temp[max + 1] = {0};

    fi(0,k){
        temp[arr[i]]++;
    }

    ll int out[k] ={0};
    ll int count = 0;

    fi(0 ,max + 1){
        if(temp[i] > 1 && !(i >= n+1 && i <= n + m)){
            out[count] = i;
            count++;
        }
    }

    print count << " ";
    fi(0 , count){
        print out[i] << " ";
    }
    print "\n";

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