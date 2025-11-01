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
    int f = 0, z = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 5)
            f++;
        else if (x == 0)
            z++;
    }

    if (z == 0)
    {
        cout << -1 << endl;
    }
    else if (f < 9)
    {
        cout << 0 << endl;
    }
    else
    {
        int count5 = (f / 9) * 9;
        for (int i = 0; i < count5; i++)
            cout << 5;
        for (int i = 0; i < z; i++)
            cout << 0;
        cout << endl;
    }

    return 0;
}