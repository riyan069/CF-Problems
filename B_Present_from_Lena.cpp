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
    int n;
    cin >> n;
    int p = n;
    int spc = 0;
    int last;
    bool ok = false;
    for (int i = n; i >= 0; i--)
    {
        for (int j = 0; j < p * 2 - spc; j++)
        {
            cout << ' ';
        }
        for (int k = 0; k <= n - i; k++)
        {
            if (ok)
            {
                cout << k << ' ';
            }
            else
                cout << k;

            ok = true;
            last = k;
        }
        for (int l = last - 1; l >= 0; l--)
        {
            if (l == 0)
            {
                cout << l;
            }
            else
                cout << l << ' ';
        }
        spc = spc + 2;
        cout << endl;
    }
    spc = n + (n - 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= p * 2 - spc; j++)
        {
            cout << ' ';
        }
        for (int k = 0; k <= n - i; k++)
        {
            if (i != n)
            {
                cout << k << ' ';
            }
            else
                cout << k;

            ok = true;
            last = k;
        }
        for (int l = last - 1; l >= 0; l--)
        {
            if (l == 0)
            {
                cout << l;
            }
            else
                cout << l << ' ';
        }
        spc = spc - 2;
        cout << endl;
    }

    return 0;
}