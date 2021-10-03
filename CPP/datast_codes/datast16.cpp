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

    ll int q, n, v;
    vector<ll int> primes;
    primes.push_back(2);
    primes.push_back(3);
    for (ll int i = 5; i <= 10000; i++)
    {
        ll int no = 0;
        for (ll int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
                no = 1;
        }
        if (!no)
            primes.push_back(i);
    }
    get n >> q;
    stack<ll int> s1, s2, s3;
    for (ll int i = 0; i < n; i++)
    {
        get v;
        s1.push(v);
    }
    for (ll int i = 0; i < q; i++)
    {
        if (s1.empty())
            break;
        ll int cur = primes[i];
        while (!s1.empty())
        {
            ll int ele = s1.top();
            s1.pop();
            if (ele % cur == 0)
            {
                s2.push(ele);
            }
            else
            {
                s3.push(ele);
            }
        }
        while (!s2.empty())
        {
            cout << s2.top() << endl;
            s2.pop();
        }
        s1 = s3;
        while (!s3.empty())
            s3.pop();
    }
    while (!s1.empty())
    {
        cout << s1.top() << endl;
        s1.pop();
    }

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