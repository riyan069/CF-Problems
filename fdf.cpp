/*Author G.M. Shahariyar Riyan*/
#include <bits/stdc++.h>
using namespace std;
#define op()                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl '\n'
using ll = long long;

int main()
{
    op();
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        vector<int> v(q);
        for (int i = 0; i < q; i++)
            cin >> v[i];

        for (int u : v)
        {
            int st = 0;
            bool ok = false;
            while (u > 0)
            {
                for (char c : s)
                {
                    st++;
                    if (c == 'A')
                        u--;
                    else if (c == 'B')
                        u /= 2;
                    if (u <= 0)
                    {
                        cout << st << endl;
                        ok = true;
                        break;
                    }
                }
                if (ok)
                    break;
            }
        }
    }
}
