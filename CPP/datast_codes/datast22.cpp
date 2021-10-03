#include <bits/stdc++.h>
#define get cin >>
#define print cout <<
#define ll long long
#define ld long double
#define rep(i, k, n) for (ll int i = k; i < n; i++)
#define rept(i, k, n) for (auto i = k; i != n; ++i)
#define drep(i, k, n) for (ll int i = k; i >= n; i--)
#define inarr(st, n, arr)          \
    for (ll int i = s; i < n; i++) \
        cin >> arr[i];
#define outarr(st, n, arr)         \
    for (ll int i = s; i < n; i++) \
        cout << arr[i];
using namespace std;

int have[1 << 20];
int n;
vector<int> st[4];
queue<int> qu;

int hanoi(int state)
{
    if (state == 0)
    {
        return 0;
    }
    memset(have, 0xff, sizeof(have));
    have[state] = 0;
    qu.push(state);
    while ((have[0] < 0) && (!qu.empty()))
    {
        int x = qu.front();
        qu.pop();
        int state = x;
        st[0].clear();
        st[1].clear();
        st[2].clear();
        st[3].clear();
        for (int i = 0; i < n; ++i)
        {
            st[x & 3].push_back(i);
            x >>= 2;
        }
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                if ((i != j) && (!st[i].empty()) && ((st[j].empty()) || (st[j][0] > st[i][0])))
                {
                    int tmp = (state ^ (i << (st[i][0] << 1))) | (j << (st[i][0] << 1));
                    if (have[tmp] < 0)
                    {
                        have[tmp] = have[state] + 1;
                        qu.push(tmp);
                    }
                }
            }
        }
    }
    return have[0];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    int state = 0;
    vector<int> a(n);
    for (int a_i = 0; a_i < n; a_i++)
    {
        cin >> a[a_i];
        state |= (a[a_i] - 1) << (a_i << 1);
    }
    print hanoi(state) << "\n";
    return 0;
}
