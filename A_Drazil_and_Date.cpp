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
    ll a, b, c;
    cin >> a >> b >> c;
    a = abs(a);
    b = abs(b);
    // cout << (a + b) << ' ' << c - (a + b) << endl;
    if (a + b == c)
    {
        cout << "Yes" << endl;
    }

    else if (a + b < c)
    {
         
        if ((c - (a + b)) % 2 == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else
        cout << "No" << endl;

    return 0;
}