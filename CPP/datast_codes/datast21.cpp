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

    ll int  n;
    get  n;
    ll int  *p = new ll int [n];

        fi(0,n)get  p[i];

    stack<ll int > st;
    ll int  *killer = new ll int [n];
    ll int  *daycount = new ll int [n];
    ll int  *killcount = new ll int [n];
    for (ll int  i = 0; i < n; i++)
    {
        daycount[i] = 0;
        killcount[i] = 0;
    }

    for (ll int  i = 0; i < n; i++)
    {
        while (!st.empty() && p[i] <= p[st.top()])
            st.pop();

        if (st.empty())
        {
            killer[i] = -1;
            daycount[i] = -1;
        }
        else
        {
            killer[i] = st.top();
            killcount[killer[i]]++;
            daycount[i] += killcount[killer[i]];
            daycount[st.top()]--;
            if (killer[st.top()] >= 0 && daycount[st.top()] <= 0)
                st.pop();
        }

        st.push(i);
    }

    ll int  max = -1;
    for (ll int  i = 0; i < n; i++)
        if (max < killcount[i])
            max = killcount[i];

    print  max << endl;

    return 0;

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