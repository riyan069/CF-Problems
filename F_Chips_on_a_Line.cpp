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
        string s;
        cin >> s;
        vector<int> alp(26, 0);
        int len = s.length();
        for (int i = 0; i < len; i++)
        {
            alp[s[i] - 97]++;
        }
        if (len == 1)
        {
            for (int i = 0; i < 26; i++)
            {
                if (alp[i] == 0)
                {
                    s.push_back((char)(97 + i));
                    break;
                }
            }
        }
        else
        {
            int sel;
            for (int i = 0; i < 26; i++)
            {
                if (alp[i] == 0)
                {
                    sel = 97 + i;
                    break;
                }
            }
            for (int i = 1; i < len; i++)
            {
                if (s[i] == s[i - 1])
                {
                    s.insert(i, string(1, sel));
                    break;
                }
            }
        }

        cout << s;
    }

    return 0;
}