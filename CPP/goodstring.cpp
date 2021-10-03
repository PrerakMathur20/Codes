#include <bits/stdc++.h>

#define get cin>> 
#define print cout<<
#define f(s,n) for(int i = s; i < n; i++)
#define inarr(s,n,arr) for (int i = s; i < n; i++) cin>>arr[i];
#define outarr(s,n,arr) for (int i = s; i < n; i++) cout<<arr[i];
#define ll long long
using namespace std;

int code(){
    ll int n,k;
    get n>>k;
    string s;
    get s;

    ll int l =0;
    ll int r = n-1 , len =0;

    while(l<r){
        ll int x;
        if(s[l] == s[r]) x=0;
        if(s[l] != s[r]) x=1;
        len = len + x;
        l++;
        r--;
    }

    ll int out = abs(k-len);
    return out;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    get t;
    f(i,t){
        print "Case #"<<i+1<<": "<<code()<<"\n";
    }
    return 0;
}

// 2
// 5 1
// ABCAA
// 4 2
// ABAA

