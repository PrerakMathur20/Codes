#include <bits/stdc++.h>
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp> 
// #include <ext/pb_ds/tree_policy.hpp> 
// using namespace __gnu_pbds;
template<typename T>
using ordered_set = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;
#define get cin>> 
#define print cout<<
#define ll long 
#define ld long double
#define rep(i, k, n) for (ll int i = k; i < n; i++)
#define rept(i, k, n) for (auto i = k; i != n; ++i)
#define drep(i, k, n) for (ll int i = k; i >= n; i--)
#define fi(s,n) for(ll int i = s; i < n; i++)
#define fj(s,n) for(ll int j = s; j < n; j++)
#define fk(s,n) for(ll int k = s; k < n; k++)
#define inarr(s,n,arr) for ( int i = s; i < n; i++) cin>>arr[i];
#define outarr(s,n,arr) for (ll int i = s; i < n; i++) cout<<arr[i]<<' ';


int code(){

    int N, k;
    get N >> k;

    int arr[N];
    inarr(0,N, arr);

    ordered_set<int> s;

    for(int x : arr){
        fi(1,11){
            s.insert(x*i);
        }
        
    }

    // for( auto it = s.begin() ; it != s.end() ; ++it){
    //     print  *it <<" ";
    //      }
    
    cout << *s.find_by_order(k-1) << "\n";

return 0;
}

signed main() {
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