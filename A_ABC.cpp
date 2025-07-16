#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    op();
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin>> x;
        string s;
        cin >> s;
        int len = s.size();
        if (len == 1)
            cout << "YES" << endl;
        else if (len == 2)
        {
            if (s[0] == s[1])
            {
                cout << "NO" << endl;
            }
            else
                cout << "YES" << endl;
        }
        else if(len > 2) cout << "NO" << endl;
    }
}