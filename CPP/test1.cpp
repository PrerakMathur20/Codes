#include <bits/stdc++.h>

using namespace std;

vector<int> temp;

void add_one(int i)
{
    while (i < temp.size())
    {
        temp[i] += 1;
        i += (i & -i);
    }
}

int fetch(int i)
{
    int out = 0;
    while (i > 0)
    {
        out += temp[i];
        i -= (i & -i);
    }
    return out;
}

int countRangeSum(vector<int> &a, int l, int r)
{
    long curr = r, cur_l;
    int n = a.size();

    vector<long> b(n, 0), c(n, 0);
    for (int i = 0; i < n; i++)
    {
        curr -= a[i];
        c[i] = b[i] = curr - r + a[i];
    }

    unordered_map<int, int> m;
    sort(b.begin(), b.end());

    for (int i = 0; i < n; i++)
        m[b[i]] = i + 1;

    temp.resize(n + 1, 0);
    int out = 0;
    cur_l = l;
    curr = r;

    for (int i = 0; i < n; i++)
    {
        cur_l -= a[i];
        curr -= a[i];

        add_one(m[c[i]]);
        int ll = lower_bound(b.begin(), b.end(), cur_l) - b.begin();

        int rr = upper_bound(b.begin(), b.end(), curr) - b.begin();

        int lll = ll == n ? n : m[b[ll]] - 1;
        int rrr = rr == 0 ? 0 : m[b[rr - 1]];

        out -= fetch(lll);
        out += fetch(rrr);
    }
    return out;
}

int main()
{
    vector<int> nums;
    int value, input;

    cin >> input;
    while (input--)
    {
        cin >> value;
        nums.push_back(value);
    }
    int lower, upper;
    cin >> lower >> upper;
    cout << countRangeSum(nums, lower, upper) << endl;

    return 0;
}