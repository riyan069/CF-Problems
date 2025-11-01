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
        string str = to_string(n);
        int len = str.length();
        int let = str[0] - '0';
        int total = 0;
        int add = 0;
        for (int i = 1; i <= (4 * (let - 1)) + len; i++)
        {
            if (add % 4 == 0)
            {
                add = 0;
            }
            add++;
            total += add;
        }
        cout << total << endl;
    }
    return 0;
}