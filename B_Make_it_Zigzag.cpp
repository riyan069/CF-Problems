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
        ll n;
        cin >> n;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        ll maxi = N_INF;
        for (ll i = 0; i < n; i++)
        {
            if(v[i] > maxi ) maxi = v[i];
            if (i % 2 != 0)
            {
                v[i] = maxi;
            }
        }

        ll c = 0;
        maxi = N_INF;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] > maxi)
            {
                maxi = v[i];
            }
            
            if (i % 2 == 0)
            {

                if (v[i] >= v[i + 1] && i != n - 1)
                {
                    if (v[i + 1] < maxi && v[i] < maxi)
                    {
                        v[i + 1] = maxi;
                    }
                    else
                    {
                        c = c + v[i] - v[i + 1] + 1;
                        v[i] = v[i + 1] - 1;
                    }
                }
            }
            else if (i % 2 != 0)
            {
                if (v[i] <= v[i + 1] && i != n -1)
                {
                    if (v[i + 1] < maxi && v[i] < maxi)
                    {
                        v[i] = maxi;
                    }
                    else
                    {
                        c = c + v[i + 1] - v[i] + 1;
                        v[i + 1] = v[i] - 1;
                    }
                }
            }
            // cout << "   "<< c << endl;
        }

        cout << c << endl;

        // for(auto u:v)cout<< u << ' ';
        // cout << endl;
    }

    return 0;
}