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
        int n;
        string s;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'U')
            {
                cout << 'D';
            }
            else if(s[i] == 'D') cout << 'U';
            else cout << s[i];
            
        }
        cout << endl;
        
    }
}