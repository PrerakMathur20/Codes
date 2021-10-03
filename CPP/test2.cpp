#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll inf = 1e18;
ll n, m;
ll amt[505][505];
vector<ll> vec[505];
ll bfs(ll s, ll t, vector<ll> &par)
{
    fill(par.begin(), par.end(), -1);
    par[s] = -2;
    queue<pair<ll, ll>> q;
    q.push({s, inf});

    while (!q.empty())
    {
        ll pep = q.front().first;
        ll count = q.front().second;
        q.pop();

        for (ll next : vec[pep])
        {
            if (par[next] == -1 && amt[pep][next])
            {
                par[next] = pep;
                ll new_count = min(count, amt[pep][next]);
                if (next == t)
                    return new_count;
                q.push({next, new_count});
            }
        }
    }

    return 0;
}

ll maxcount(ll s, ll t)
{
    ll count = 0;
    vector<ll> par(n + 1);
    ll new_count;
    count += new_count;
    ll pep = t;
    while (pep != s)
    {
        ll prev = par[pep];
        amt[prev][pep] -= new_count;
        amt[pep][prev] += new_count;
        pep = prev;
    }

    //cout << count << " ";
    return count;
}

int main()
{
    cout << "Enter number of nodes:\n";
    cin >> n;
    cout << "Enter number of edges:\n";
    cin >> m;

    cout << "Enter the connections and capacity:\n";
    for (ll i = 0; i < m; i++)
        for (ll i = 0; i < m; i++)
        {
            ll a, b, c;
            cin >> a >> b >> c;
            vec[a].push_back(b);
            vec[b].push_back(a);
            amt[a][b] += c;
            amt[b][a] += c;
        }
    ll s = 1, t = n;
    ll ans = maxcount(s, t);
    cout << ans << endl;
}
