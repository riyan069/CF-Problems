/* Author G.M. Shahariyar Riyan */
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int found = 0, x, y;
        for (int i = 0; i < n; i++)
        {
            if ((s[i] == 'a' && s[i + 1] == 'b') || (s[i] == 'b' && s[i + 1] == 'a'))
            {
                found++;
                x = i + 1, y = i + 2;
                break;
            }
        }
        if (found) cout << x << " " << y << endl;
        else cout << -1 << " " << -1 << endl;
        
    }
}