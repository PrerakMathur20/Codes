#include <bits/stdc++.h>
using namespace std;

#define inarr(s,n,arr) for (long long int i = s; i < n; i++) cin>>arr[i];
#define outarr(s,n,arr) for (long long int i = s; i < n; i++) cout<<arr[i];
#define ll long long
#define debug(x)          \
  for(auto element:x)     \
    cout<<element<<" "; \
  cout<<endl
#define debugp(x)          \
for (auto element : x) \
  cout << element.first << " " << element.second << endl
#define db(x) cout << #x << " = " << x << '\n'
#define makegraph(adj, num)       \
for (int i = 0; i < num; i++) \
{                             \
  int u, v;                 \
  cin >> u >> v;            \
  adj[u].push_back(v);      \
  adj[v].push_back(u);      \
}
#define rep(i,k,n) for(int i=k;i<n;i++)
#define rept(i,k,n) for(auto i=k;i!=n;++i)
#define drep(i,k,n) for(int i=k;i>=n;i--)
#define pb push_back
#define mp make_pair
#define all(a) a.begin(),a.end()
#define endl '\n'
#define ld long double
#define ll long long
#define clr(s) memset(s,0,sizeof(s))
typedef vector<int> vi;
typedef vector<pair<int,int>> vii;
typedef pair<int,int> ii;
typedef pair<int,pair<int,int>> iii;
typedef pair<int,string> pis;
typedef pair<string,string> pss;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef map<char,int> mci;
typedef set<int> si;
const int intmax = 2147483647;
const int intmin = -2147483648;
const int mod = 1000000007;
const int mod2 = 998244353;

template<typename... T>
void read(T&... args)
{
    ((cin >> args ), ...);
}

template<typename... T>
void print(T... args)
{
    ((cout << args << " "), ...);
    cout<<endl;
}

int code(){

    ll int n, m, k;
    read(n,m,k);

    ll arr[n+1][m+1];

    rep(i,0,n+1){
      rep(j,0,m+1){
        if(i and j) cin>>arr[i][j];
        else arr[i][j] = 0;
      }
    }

    rep(i,1,n+1) rep(j,1,m+1) arr[i][j] += arr[i-1][j];
    rep(i,1,n+1) rep(j,1,m+1) arr[i][j] += arr[i][j-1];
    ll out=0;

    rep(l,1,n+1){
        drep(i,n,l){
            drep(j,m,l){
                ll int temp = (arr[i][j] + arr[i-l][j-l] - arr[i][j-l] - arr[i-l][j] );
                temp = temp / (l*l);
                if(temp >= k) out++;
                else break;
            }
        }
    }
    
    print(out);
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t;
    cin>>t;
    while(t>0){
        code();
        t--;
    }
    return 0;
}