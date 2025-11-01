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
    ll n;
    cin >> n;
    vector<ll> spd;
    vector<ll> ram;
    vector<ll> hd;
    vector<ll> cost;
    spd.push_back(0);
    ram.push_back(0);
    hd.push_back(0);
    cost.push_back(0);
    for (ll i = 0; i < n; i++)
    {
        ll sum = 0;
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        spd.push_back(a);
        ram.push_back(b);
        hd.push_back(c);
        cost.push_back(d);
    }

    ll dir = 1;
    cost[0] = LLONG_MAX;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            if (spd[i] < spd[j] && ram[i] < ram[j] && hd[i] < hd[j])
            {
                cost[i] = LLONG_MAX;
            }
        }
        if (cost[i] < cost[dir])
            dir = i;
    }
    cout << dir << endl;
}