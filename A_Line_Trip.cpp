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

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int maxi;
        if (n == 1)
        {
            maxi = v[0];
        }
        else
        {
            maxi = N_INF;
            for (int i = 1; i < n; i++)
            {
                if (v[i] - v[i - 1] > maxi)
                {
                    maxi = v[i] - v[i - 1];
                }
            }
        }
        int maxi2 = 2 * (x - v[n - 1]);
        int maxi3 = (v[0] - 0);
        int final = max(maxi, maxi2);
        final = max(final, maxi3);
        cout << final << endl;
    }

    return 0;
}