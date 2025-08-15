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
        string s = "codeforces";
        string a;
        cin >> a;
        int c = 0;
        for (int i = 0; i < a.size(); i++)
        {
            
                if (s[i] != a[i])
                {
                    c++;
                }
            
        }
        cout << c<< endl;
    }
}