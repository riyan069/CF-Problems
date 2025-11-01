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
    string s;
    cin >> s;
    bool ok = true;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.substr(i, 3) == "144")
        {
            i = i + 2;
        }
        else
        {

            if (s.substr(i, 2) == "14")
            {
                i = i + 1;
            }
            else
            {
                if (s[i] == '1')
                {
                    i = i;
                }
                else
                {
                    ok = false;
                    break;
                }
            }
        }
    }
    if (ok)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}