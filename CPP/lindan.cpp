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
/*
ll int source(ll int n)
{
    if (n % 2 == 0)
        return 2;
  
    for (ll int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }
  
    return n;
}

int code(){

    ll int p,l,r;
    get p>>l>>r;

    ll int out = 0;

    fi(l,r+1){
        if(source(i) == p) out++;
    }

    print out<<"\n";

return 0;
}


void code(){
    ll int p,l,r;
    cin>>p>>l>>r;

    ll int n;
    n = r;

    int spf[100000] = {0};
    for(int i =2; i<=n; i++){
        spf[i] = i;
    }

    for(ll int i = 2; i<= n; i++){
        if(spf[i] == i){
            for(ll int j = i*i; j<=n; j+=i){
                if(spf[j] == j){
                    spf[j] = i;
                }
            }
        }
    }
    ll int out = 0; 
    ll count = 0;


    while(n != 1){
        out = spf[n];
        if(out == p) count++;
        // print spf[n] <<" ";
        n = n/ spf[n];
    }
    print out << " " << count;
    print "\n";

}
*/

void code()
{
    ll int p,l,r;
    cin>>p>>l>>r;

    ll int n = r;

    vector<int> least_prime(n+1,0);
 
    least_prime[1] = 1;
 
    for (int i = 2; i <= n; i++)
    {
        if (least_prime[i] == 0)
        {
            least_prime[i] = i;
 
            for (int j = i*i; j <= n; j += i)
                if (least_prime[j] == 0)
                   least_prime[j] = i;
        }
    }
 
    ll int count = 0;

    for (int i = l; i <= r; i++){
        if(least_prime[i] == p) count++;
    }

    print count <<"\n";
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