#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        vector<string> str;
        string s;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            str.push_back(s);
        }

        vector<int> v;
        int total = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                total = 0;
                for (int k = 0; k < m; k++)
                {
                    int dif = abs(str[i][k] - str[j][k]);
                    total += dif;
                }
                v.push_back(total);
            }
        }

        int mini = v[0];
        for (int i = 1; i < v.size(); i++)
        {
            mini = min(mini, v[i]);
        }
        cout << mini << endl;
        v.clear();

        // for(auto u:v) cout << u << endl;
        // cout << endl;
    }
}