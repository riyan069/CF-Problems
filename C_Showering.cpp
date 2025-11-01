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
        int n, s, m;
        cin >> n >> s >> m;

        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            mp[i].push_back(x);
            mp[i].push_back(y);
        }
        bool ok = false;
        if (mp[0][0] >= s)
        {
            ok = true;
        }
        else if (mp[0][1] - mp[0][0] >= s)
        {
            ok = true;
        }
        else if (m - mp[n - 1][1] >= s)
        {
            ok = true;
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                if (mp[i][0] - mp[i - 1][1] >= s)
                {
                    ok = true;
                    break;
                }
                if (mp[i][1] - mp[i][0] >= s)
                {
                    ok = true;
                    break;
                }
            }
        }
        

        if (ok == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}