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
    ll a, b, k, m;
    cin >> a >> b >> k >> m;
    vector<ll> va(a);
    vector<ll> vb(b);
    for (ll i = 0; i < a; i++)
    {
        cin >> va[i];
    }
    for (ll i = 0; i < b; i++)
    {
        cin >> vb[i];
    }

    int maxia = va[0];
    for (int i = 0; i < k; i++)
    {
        if (va[i] > maxia)
        {
            maxia = va[i];
        }
    }
    
    int minb = vb[b-1];
    int y = b-1;
    for (int i = 0; i < m ; i++)
    {
        if (vb[y] < minb)
        {
            minb = vb[y];
        }
        y--;
    }
    if (maxia < minb)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}