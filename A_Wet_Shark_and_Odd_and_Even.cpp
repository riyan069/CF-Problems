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
    vector<ll> v;
    vector<ll> even;
    vector<ll> odd;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x % 2 == 0)
        {
            even.push_back(x);
            sum += x;
        }
        else
        {
            odd.push_back(x);
            sum += x;
        }
    }
    ll mini = INF;
    for (auto u : odd)
    {
        if (u < mini)
        {
            mini = u;
        }
    }
    if (odd.size() % 2 != 0)
    {
        sum -= mini;
    }
    cout << sum << endl;

    return 0;
}