#include <bits/stdc++.h>

using namespace std;
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


int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll p, q,count=0,b=0;
    cin>>p>>q;

    if(p==q)
    {
        while(p!=0)
        {
            p=p/2;
            count++;
        }
        cout<<2*count<<endl;
    }
    else
    {
        if(floor(sqrt(p*q)) < p && floor(sqrt(p*q)) < q)
        {
            p= floor(sqrt(p*q));
            q= floor(sqrt(p*q));
            count+=2;
            while(p!=0)
        {
            p=p/2;
            b++;
        }
        cout<<count + 2*b<<endl;

        }
        else{
        while(p!=0) 
        {
             p=p/2;
             b++;
        }
        while(q!=0)
        {
             q=q/2;
             count++;
        }
        cout<<count + b<<endl;
        }

    }
}