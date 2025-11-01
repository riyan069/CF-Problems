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
        string s;
        cin >> n >> m;
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            v.push_back(s);
        }
        string name = "vika";
        string gift;
        int found = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (v[j][i] == name[found])
                {
                    gift.push_back(v[j][i]);
                    found++;
                    break;
                }
            }
        }
        if(gift == name)cout << "YES"<< endl;
        else cout << "NO"<< endl;
    }
}