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

    char a[3][3];
    int x = 0, o = 0, u = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'O')
                o++;
            else if (a[i][j] == 'X')
                x++;
            else
                u++;
        }
    }
    int m = 0, n = 0;
    if (a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X')
        m = 1;
    if (a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X')
        m = 1;
    if (a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'X')
        m = 1;
    if (a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X')
        m = 1;
    if (a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == 'X')
        m = 1;
    if (a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'X')
        m = 1;
    if (a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'X')
        m = 1;
    if (a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == 'X')
        m = 1;

    if (a[0][0] == 'O' && a[1][0] == 'O' && a[2][0] == 'O')
        n = 1;
    if (a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == 'O')
        n = 1;
    if (a[0][2] == 'O' && a[1][2] == 'O' && a[2][2] == 'O')
        n = 1;
    if (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O')
        n = 1;
    if (a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O')
        n = 1;
    if (a[0][0] == 'O' && a[0][1] == 'O' && a[0][2] == 'O')
        n = 1;
    if (a[1][0] == 'O' && a[1][1] == 'O' && a[1][2] == 'O')
        n = 1;
    if (a[2][0] == 'O' && a[2][1] == 'O' && a[2][2] == 'O')
        n = 1;

    if ((m == 1 && n == 1) || (x - o < 0) || (x - o > 1))
        cout << "3" << endl;
    else if ((x == 0 && o == 0) && u == 9)
        cout << "2" << endl;
    else if (m == 1 && n == 0 && x > o)
        cout << "1" << endl;
    else if (m == 0 && n == 1 && x == o)
        cout << "1" << endl;
    else if (m == 0 && n == 0 && u == 0)
        cout << "1" << endl;
    else if (m == 0 && n == 0 && u > 0)
        cout << "2" << endl;
    else
        cout << "3" << endl;

    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    get t;
    while (t > 0)
    {
        code();
        t--;
    }
    return 0;
}