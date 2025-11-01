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
        int erase = 0;
        bool one = false;
        int final = 0;
        for (int i = 0; i < len; i++)
        {
            if (s[i] == '1')
                one = true;
            if (one)
            {
                if (s[i] == '0')
                {
                    erase++;
                }
                if (s[i] == '1')
                {
                    final += erase;
                    erase = 0;
                }
            }
        }
        cout << final << endl;
    }
}