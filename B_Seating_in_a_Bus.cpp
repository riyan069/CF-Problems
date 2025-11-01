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
const int lm = 2e5 + 10;

int main()
{
    op();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // int seat[lm] = {0};
        vector<int> seat;
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            seat.push_back(x);
        }
        set<int>a;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                a.insert(seat[i]);
            }
            else
            {
                if ((a.count(seat[i] - 1) == 0) && (a.count(seat[i] + 1) == 0))
                {
                    ok = false;
                    break;
                }
                else
                {
                    a.insert(seat[i]);
                }
            }
        }

        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}