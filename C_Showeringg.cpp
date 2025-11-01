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
const int INF = 1e9 + 7;
const int N_INF = -1e9 - 10;
const long long LINF = 1e18;
const long long N_LINF = -1e18;
const int MOD = 1e9 + 7;


int main()
{
    op();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, s, m;
        cin >> n >> s >> m;

        vector<pair<ll, ll>> mp(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> mp[i].first;
            cin >> mp[i].second;
        }
        sort(mp.begin(), mp.end());
        bool ok = false;
        if (mp[0].first >= s)
        {
            ok = true;
        }

        if (m - mp[n - 1].second >= s)
        {
            ok = true;
        }

        for (ll i = 1; i < n; i++)
        {
            if (mp[i].first - mp[i - 1].second >= s)
            {
                ok = true;
            }
            
        }

        if (ok == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}