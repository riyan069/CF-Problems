/* Author G.M. Shahariyar Riyan */
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
int main()
{
    op();
    int t;
    cin >> t;
    while (t--)
    {
        char s;
        cin >> s;
        string a = "codeforces";
        int c = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (s == a[i])
            {
                c++;
                break;
            }
        }
        if(c == 0) cout << "NO"<< endl;
        else cout << "YES"<< endl;
    }
}