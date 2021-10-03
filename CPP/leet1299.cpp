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

    ll int m = -10000000007;

    vector< ll int> vec;

    fi(0,n){
        int temp;
        get temp;

        vec.push_back(temp);
    }

    for(int i = n - 1; i < 0; i--){
        int temp = max(vec[i] , m);

        vec[i] = m;
        m = temp;

    }

    fi(0,n){
        print vec[i] << " ";
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

// vector replaceElements(vector &arr)
// {
//     int max;
//     vector v;
//     for (int i = 0; i < arr.size() - 1; i++)
//     {
//         max = INT_MIN;
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             if (arr[j] > max)
//                 max = arr[j];
//         }
//         v.push_back(max);
//     }
//     v.push_back(-1);
//     return v;
// }