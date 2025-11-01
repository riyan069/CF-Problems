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
    int n, m;
    cin >> n >> m;

    if (n == 1 && m == 1)
    {
        cout << 1;
    }
    else if (n == 1 && m == 2)
    {
        cout << -1;
    }

    else if (n % 2 == 0)
    {
        int max = n;
        int min = n / 2;
        int c = 0;
        for (int i = min; i <= max; i++)
        {
            if (i % m == 0)
            {
                cout << i << endl;
                c = 1;
                break;
            }
        }
        if (!c)
        {
            cout << -1 << endl;
        }
    }
    else
    {
        int max = n + 1;
        int min = (n + 1) / 2;
        int c = 0;
        for (int i = min; i <= max; i++)
        {
            if (i % m == 0)
            {
                cout << i << endl;
                c = 1;
                break;
            }
        }
        if (!c)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}