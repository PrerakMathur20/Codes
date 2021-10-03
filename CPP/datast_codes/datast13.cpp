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

int main()
{

    ll int n;
    cin >> n;
    vector<vector<int>> step(n, vector<int>(n, -1));
    vector<vector<int>> block(n, vector<int>());
    vector<pair<int, int>> stack;
    for (int i = 0; i != n; ++i)
    {
        string tmp;
        cin >> tmp;
        string::iterator j;
        for (j = tmp.begin(); j != tmp.end(); ++j)
        {
            block[i].push_back(*j == 'X' ? 1 : 0);
        }
    }
    ll int a, b, c, d;
    cin >> a >> b >> c >> d;
    step[a][b] = 0;
    stack.push_back(pair<int, int>(a, b));
    while (step[c][d] == -1)
    {
        pair<ll int,ll int> tmp = stack[0];
        int t1, t2;
        t1 = tmp.first;
        t2 = tmp.second;

        for (int i = t1 + 1; i < n; ++i)
        {

            if (block[i][t2] == 0 && step[i][t2] == -1)
            {
                step[i][t2] = step[t1][t2] + 1;
                stack.push_back(pair<int, int>(i, t2));
            }
            else if (block[i][t2] == 1)
                break;
            else
                continue;
        }
        for (int i = t1 - 1; i >= 0; --i)
        {
            if (block[i][t2] == 0 && step[i][t2] == -1)
            {
                step[i][t2] = step[t1][t2] + 1;
                stack.push_back(pair<int, int>(i, t2));
            }
            else if (block[i][t2] == 1)
                break;
            else
                continue;
        }
        for (int i = t2 + 1; i < n; ++i)
        {

            if (block[t1][i] == 0 && step[t1][i] == -1)
            {
                step[t1][i] = step[t1][t2] + 1;
                stack.push_back(pair<int, int>(t1, i));
            }
            else if (block[t1][i] == 1)
                break;
            else
                continue;
        }
        for (int i = t2 - 1; i >= 0; --i)
        {
            if (block[t1][i] == 0 && step[t1][i] == -1)
            {
                step[t1][i] = step[t1][t2] + 1;
                stack.push_back(pair<int, int>(t1, i));
            }
            else if (block[t1][i] == 1)
                break;
            else
                continue;
        }
        stack.erase(stack.begin());
    }
    cout << step[c][d];
    return 0;
}