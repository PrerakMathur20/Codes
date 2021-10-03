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

    stack<ll int> max;
    stack<ll int> st;
    max.push(0);
    ll int n;
    get n;
    while (n--){
        ll int temp;
        get temp;
        if(temp==1){
            get temp;
            if(temp>=max.top()) max.push(temp);
            st.push(temp);
        }
        else if(temp==2){
            if(st.top()==max.top()) max.pop();
            st.pop();
        } 
        else if(temp==3) cout<<max.top()<<endl;
    }

return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //get t;
    while(t>0){
        code();
        t--;
    }
    return 0;
}