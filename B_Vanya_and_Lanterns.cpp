/*Author G.M. Shahariyar Riyan*/
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
using ll = long long;
#define precision(x) fixed << setprecision(x)
const int NNN = 1e7 + 5;
int arr[NNN];
const int INF = 1e9 + 10;
const int N_INF = -1e9 - 10;
const long long LINF = 1e18;
const long long N_LINF = -1e18;
const int MOD = 1e9 + 7;

int main()
{
    op();
    ll n, m;
    cin >> n >> m;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    // for (auto u : v)
    //     cout << u << " ";
    // cout << endl;
    double dif = N_INF;
    // cout << dif << endl;
    for (int i = 1; i < n; i++)
    {
        if (v[i] - v[i - 1] > dif)
        {
            dif = v[i] - v[i - 1];
        }
    }
    dif = dif / 2;
    double first = v[0];
    double last = m -v[n-1];
    double ans = max(first,dif);
    ans = max(ans,last);
    cout << precision(10) << ans << endl;

    return 0;
}