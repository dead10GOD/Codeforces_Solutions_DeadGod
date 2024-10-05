#include "bits/stdc++.h"
using namespace std;
#define FAST_IO (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define pb push_back
#define endl '\n'
#define REP(i, start, end) for (int i = start; i <= end; i++) // both inclusive
#define int long long int
#define vi vector<int>
#define ff first
#define ss second
#define ii pair<int, int>
const int MOD = 1e9 + 7;
#define PI 3.1415926535897932384626
const int INF = LLONG_MAX >> 1;

signed main()
{
    FAST_IO
    int n, m, ele;
    cin >> n;
    map<int, int> mp;
    REP(i, 0, n - 1)
    {
        cin >> ele;
        mp.insert({ele, i + 1});
    }
    cin >> m;
    int l = 0, r = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> ele;
        l += mp[ele];
        r += n - mp[ele] + 1;
    }
    cout << l << " " << r;
    return 0;
}