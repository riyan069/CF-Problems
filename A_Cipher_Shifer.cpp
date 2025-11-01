#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    ;                             \
    cout.tie(0);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int initial = 0;
        int len = s.length();
        while (initial != len)
        {
            for (int i = initial + 1; i < len; i++)
            {
                if (s[initial] == s[i])
                {
                    cout << s[initial];
                    initial = i + 1;
                    break;
                }
            }
        }
        cout << endl;
    }
}