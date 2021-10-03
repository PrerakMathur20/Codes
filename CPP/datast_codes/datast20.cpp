#include <bits/stdc++.h>

#define get cin >>
#define print cout <<
#define ll long long
#define ld long double
#define rep(i, k, n) for (ll int i = k; i < n; i++)
#define rept(i, k, n) for (auto i = k; i != n; ++i)
#define drep(i, k, n) for (ll int i = k; i >= n; i--)
#define fi(s, n) for (ll int i = s; i < n; i++)
#define fj(s, n) for (ll int j = s; j < n; j++)
#define fk(s, n) for (ll int k = s; k < n; k++)
#define inarr(s, n, arr)           \
    for (ll int i = s; i < n; i++) \
        cin >> arr[i];
#define outarr(s, n, arr)          \
    for (ll int i = s; i < n; i++) \
        cout << arr[i];
using namespace std;

int code()
{

    ll int n, h[100005];
    ll int p = 1;
    ll int s[100005];

    get n;

    inarr(1, n + 1, h);

    ll int out = 0;

    fi(0, n + 2)
    {
        while (h[i] < h[s[p - 1]])
        {
            ll int temp = h[s[p - 1]];
            p--;

            out = max(out, (i - s[p - 1] - 1) * temp);
        }
        s[p++] = i;
    }

    print out << "\n";

    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //get t;
    while (t > 0)
    {
        code();
        t--;
    }
    return 0;
}