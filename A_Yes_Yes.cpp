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
        bool ok = true;
        int  count = 0;
        int len = s.length();
        for (int i = 1; i < len; i++)
        {
            if (s[i - 1] == 'e')
            {
                if (s[i] != 's')
                {
                    ok = false;
                }
                count++;
            }
            if (s[i - 1] == 'Y')
            {
                if (s[i] != 'e')
                {
                    ok = false;
                }
                count++;
            }
            if (s[i - 1] == 's')
            {
                if (s[i] != 'Y')
                {
                    ok = false;
                }
                count++;
            }
        }
        if (len == 1)
        {
            if (s[0] == 'Y' || s[0] == 'e' || s[0] == 's')
            {
                count++;
            }
            
        }
        
        if(count == 0) ok = false;
        if(ok) cout << "YES"<< endl;
        else cout << "NO"<< endl;
    }
}
