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
    int n;
    cin >> n;
    int count = 0, mx, ele;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cin >> ele;
            mx = ele;
            continue;
        }
        cin >> ele;
        if (ele < mx)
        {
            count += mx - ele;
        }
        else
            mx = ele;
    }
    cout << count;
    return 0;
}