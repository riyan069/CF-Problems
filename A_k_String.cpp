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
    int k;
    cin >> k;
    string s;
    cin >> s;

    if (s.length() % k != 0)
    {
        cout << -1 << endl;
        return 0;
    }
    map<char, int> m;
    for (auto u : s)
    {
        m[u]++;
    }
    int n;
    string str = "";
    for (auto u : m)
    {
        if (u.second % k != 0)
        {
            cout << -1 << endl;
            return 0;
        }
        n = u.second / k;
        for (int i = 0; i < n; i++)
        {
            str.push_back(u.first);
        }
    }

    for (int i = 0; i < k; i++)
    {
        cout << str;
    }
    cout << endl;
}