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
        cin >> s;
        int len = s.length();
        bool equal = true;
        for (int i = 1; i < len; i++)
        {
            if (s[0] != s[i])
            {
                equal = false;
            }
        }
        if (equal)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 1; i < len; i++)
            {
                if (s[0] != s[i])
                {
                    char c = s[i];
                    s[i] = s[0];
                    s[0] = c;
                    break;
                }
            }
            cout << "YES" << endl << s<< endl;
        }
    }
}