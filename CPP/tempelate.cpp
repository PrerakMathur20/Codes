#include <bits/stdc++.h>
using namespace std;

#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#define timed
#define debug(x)                \
	for (auto element : x)      \
		cout << element << " "; \
	cout << endl
#define debugp(x)          \
	for (auto element : x) \
	cout << element.first << " " << element.second << endl
#define db(x) cout << #x << " = " << x << "\n"
#define makegraph(adj, num)       \
	for (int i = 0; i < num; i++) \
	{                             \
		int u, v;                 \
		cin >> u >> v;            \
		adj[u].push_back(v);      \
		adj[v].push_back(u);      \
	}
#define rep(i, k, n) for (int i = k; i < n; i++)
#define rept(i, k, n) for (auto i = k; i != n; ++i)
#define drep(i, k, n) for (int i = k; i >= n; i--)
#define pb push_back
#define mp make_pair
#define all(a) a.begin(), a.end()
#define endl "\n"
#define ld long double
#define ll long long
#define clr(s) memset(s, 0, sizeof(s))
#define valset(arr, size, val) rep(i, 0, size) arr[i] = val
#define Tj return
#define out 0
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;
typedef pair<int, int> ii;
typedef pair<int, pair<int, int>> iii;
typedef pair<int, string> pis;
typedef pair<string, string> pss;
typedef map<int, int> mii;
typedef map<string, int> msi;
typedef map<char, int> mci;
typedef set<int> si;
const int intmax = 2147483647;
const int intmin = -2147483648;
const int mod = 1000000007;
const int mod2 = 998244353;

template <typename... T>
void read(T &...args)
{
	((cin >> args), ...);
}

template <typename... T>
void print(T... args)
{
	((cout << args << " "), ...);
	cout << endl;
}

vector<int> sieve(int n);
vector<int> factorial(int n, int m);
long long gcd(long long a, long long b);
long long binExp(long long a, long long b, long long modulo);
long long modInv(long long a, long long b, long long modulo);

void solve()
{
	
}

int main()
{
#ifdef timed
	clock_t c = clock();
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
		solve();
#ifdef timed
	cout << (double)(clock() - c) / CLOCKS_PER_SEC << endl;
#endif
	Tj out;
}

//Sieve - Returns vector of primes upto n
vector<int> sieve(int n)
{
	vi v, x;
	v.clear();
	x.clear();
	rep(i, 0, n + 1)
	{
		v.pb(0);
	}
	rep(i, 2, sqrt(n) + 1)
	{
		if (v[i] == 0)
		{
			for (int j = i * i; j <= n; j += i)
			{
				v[j] = 1;
			}
		}
	}
	v.erase(v.begin());
	v.erase(v.begin());
	rep(i, 0, n - 1)
	{
		if (v[i] == 0)
			x.pb(i + 2);
	}
	return x;
}

//Factorial - returns vector of factorials upto n calculated mod m
vector<int> factorial(int n, int m)
{
	long long fact = 1;
	vi v;
	v.pb(fact);
	rep(i, 1, n + 1)
	{
		fact *= i;
		fact = fact % m;
		v.pb(fact);
	}
	return v;
}

//Eucleadean algorithm for gcd
long long gcd(long long a, long long b)
{
	if (a == 0)
		return b;
	if (b == 0)
		return a;
	if (a > b)
		return gcd(b, a % b);
	return gcd(a, b % a);
}

//Binary Exponentiation
long long binExp(long long a, long long b, long long modulo)
{
	int prod = a;
	int ans = 1;
	while (b)
	{
		if (b % 2)
		{
			ans = (ans * prod) % modulo;
		}
		b /= 2;
		prod = (prod * prod) % modulo;
	}
	return ans;
}

//Modulo Inverse
long long modInv(long long a, long long b, long long modulo)
{
	int k = gcd(a, b);
	a /= k;
	b /= k;
	return (a * binExp(b, modulo - 2, modulo)) % modulo;
}