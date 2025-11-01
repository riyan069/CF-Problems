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
    int n, a;
    cin >> n >> a;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int c = 0;
    int crim = 0;
    bool ok = false;
    for (int i = a - 1, j = a - 1; i >= -100, j <= n + 100; i--, j++)
    {
        if (v[i] == 1 && v[j] == 1 && i >= 0 && j < n)
        {
            ok = true;
            if (i == j)
            {
                c++;
            }
            else
            {
                c = c + 2;
            }
        }
        if (v[i] == 1 && j >= n && i >= 0)
        {
            ok = true;
            c++;
        }
        if (v[j] == 1 && i <= -1 && j < n)
        {
            ok = true;
            c++;
        }
        if (i <= -1 && j >= n)
        {
            break;
        }
    }

    cout << c << endl;

    return 0;
}