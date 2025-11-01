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
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        ll odd = 0;
        ll even = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
            if (x % 2 == 0)
                even++;
            else
                odd++;
        }
        if (odd == 0)
        {
            for (auto u : v)
                cout << u << ' ';
        }
        else if (even == 0)
        {
            for (auto u : v)
                cout << u << ' ';
        }
        else
        {
            sort(v.begin(), v.end());
            for (auto u : v)
                cout << u << ' ';
        }
        cout << endl;
    }

    return 0;
}