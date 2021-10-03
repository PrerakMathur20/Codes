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
        cout << arr[i] << ' ';
using namespace std;

int code()
{

    ll int n;
    get n;

    vector<ll int> odd;
    vector<ll int> even;

    if (n == 2 || n == 3)
    {
        print "NO SOLUTION";
        return 0;
    }

    for (ll int i = n; i != 0; i--)
    {
        ll int temp = i;
        if (i % 2 == 0)
        {
            even.push_back(temp);
        }
        else
        {
            odd.push_back(temp);
        }
    }

    for (auto ir = odd.begin(); ir != odd.end(); ++ir)
        cout << *ir << " ";

    for (auto ir = even.begin(); ir != even.end(); ++ir)
        cout << *ir << " ";

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