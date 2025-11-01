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
        vector<ll> v;
        v.push_back(0);
        for (ll i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            v.push_back(x);
            v.push_back(y);
        }
        v.push_back(m);
        sort(v.begin(), v.end());
        bool ok = false;
        for (ll i = 1; i < v.size(); i++)
        {
           
            if (v[i] - v[i - 1] >= s)
            {
                ok = true;
                break;
            }
            if (v[i] - v[i - 1] < 0)
            {
                ok = false;
                break;
            }
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}