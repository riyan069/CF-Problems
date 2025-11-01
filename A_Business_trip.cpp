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
    int k;
    cin >> k;
    vector<int> v(12);
    for (int i = 0; i < 12; i++)
    {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    int sum = 0;
    int c = 0;
    bool ok = false;
    for (int i = 0; i < 12; i++)
    {
        sum += v[i];
        c++;
        if (sum >= k)
        {
            ok = true;
            break;
        }
    }
    if (k == 0)
    {
        cout << 0 << endl;
    }

    else if (ok)
    {
        cout << c << endl;
    }
    else cout << -1 << endl;

    return 0;
}