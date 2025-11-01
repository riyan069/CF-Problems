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
const int SIZE = 50000;

int main()
{
    op();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        vector<string> str;
        int s;
        cin >> s;
        for (int i = 0; i < s; i++)
        {
            string st;
            cin >> st;
            str.push_back(st);
        }

        for (int i = 0; i < s; i++)
        {
            if (str[i].length() != n)
            {
                cout << "NO" << endl;
                continue;
            }
            else
            {
                bool ok = true;
                map<char, int> c2n;
                map<int, char> n2c;

                for (int j = 0; j < n; j++)
                {
                    char c = str[i][j];
                    int num = v[j];
                    if (c2n.count(c) && c2n[c] != num)
                        ok = false;
                    if (n2c.count(num) && n2c[num] != c)
                        ok = false;
                    c2n[c] = num;
                    n2c[num] = c;
                }
                if (ok)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }

    return 0;
}