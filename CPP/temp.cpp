#include<bits/stdc++.h>
using namespace std;
const int mod = 1'000'000'007;
const int INF = 1'000'000'000;
#define ll long long
#define pb push_back
#define mk make_pair
#define f first
#define s second
#define all(x) x.begin(), x.end()
#define rev  reverse(all)
 
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef vector<int>  vi;
typedef vector<ll>  vl;
typedef vector<pi>  vpi;
typedef vector<pl>  vpl;
typedef vector<vi>  vvi;
typedef vector<vl>  vvl;
int r8[8]={0,-1,-1,-1,0,1,1,1};
int c8[8]={1,1,0,-1,-1,-1,0,1};
int r4[4]={0,-1,0,1};
int c4[4]={1,0,-1,0};
ll mpow(ll x,ll n);
void read(vl &v);

int solve() {
  
  int n,k; cin>>n>>k;
  string s; cin>>s;

  int l=0,r=n-1,count=0;

  while(l<r)
     {
        count+=s[l]!=s[r];
        l++;r--;
     }
  
  return abs(k-count); 
 
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
 
    int t = 1;
    cin>>t;
    for(int i=1;i<=t;i++) {
      cout<<"Case #"<<i<<": "<<solve()<<"\n";
    }
 
    return 0;
}
void read(vl &v)
{
   for(ll &x:v)
     cin>>x;
}
ll mpow(ll x,ll n)
{
   if(n==0) return 1;
    ll temp=mpow(x,n/2);
   if(n%2==1)
      return ((((temp%mod)*(temp%mod))%mod)*2)%mod;
   return ((temp%mod)*(temp%mod))%mod;
}