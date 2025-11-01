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

    int n, k;
    cin >> n >> k;
    if (k % n == 0 && n != 1)
    {
        cout << n << endl;
    }
    else if (n == 1 && k == 2)
    {
        cout << n << endl;
    }
    else if (n == 1 && k > 2)
    {
        cout << 0 << endl;
    }
    else if (n == 1 && k == 1)
    {
        cout << 0 << endl;
    }
    else
    {     
        n--;
        for (int i = 2; i <= 5; i++)
        {
            int rem = k - i;
            // cout << ' '<< rem << endl;
            if (rem % 2 == 0)
            {
                cout << rem / 2 << endl;
                break;
            }
            n--;
        }
    }

    return 0;
}