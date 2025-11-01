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
        string s;
        char c;
        cin >> s >> c;
        int len = s.size();
        bool ok = false;
        for (int i = 0; i < len; i++)
        {
            if ((s[i] == c) && (i % 2 == 0))
            {
                ok = true;
                break;
            }
        }
        if (ok) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
}