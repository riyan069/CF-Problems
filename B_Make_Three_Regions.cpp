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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        int c = 0;
        int tot = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i - 1] == '.' && a[i] == '.' && a[i + 1] == '.' && b[i - 1] == 'x' && b[i] == '.' && b[i + 1] == 'x')
            {
                c++;
            }
            else if (b[i - 1] == '.' && b[i] == '.' && b[i + 1] == '.' && a[i - 1] == 'x' && a[i] == '.' && a[i + 1] == 'x')
            {
                c++;
            }

            //     if (a[i] == a[i - 1])
            //     {
            //         c++;
            //         if (c == 3)
            //         {
            //             tot += c;
            //             c = 0;
            //         }
            //     }
            // }
            // if (tot >= 6)
            // {
            //     cout << tot / 3 << endl;
            // }
            // else
            // {
            //     c = 0;
            //     tot = 0;
            //     for (int i = 1; i < n; i++)
            //     {
            //         if (b[i] == b[i - 1])
            //         {
            //             c++;
            //             if (c == 3)
            //             {
            //                 tot += c;
            //                 c = 0;
            //             }
            //         }
            //     }
            //     if (tot >= 6)
            //     {
            //         cout << tot / 3 << endl;
            //     }
            // }
        }
        cout << c << endl;
    }
}