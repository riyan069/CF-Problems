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
        string s;
        cin >> s;
        if (s.size() > 2)
        {
            for (int i = 0; i < s.size() - 2; i++)
            {
                if (i % 2 == 0)
                {
                    cout << s[i];
                }
            }
            cout <<s[s.size()-2] << s[s.size()-1]<<endl;;
        }
        else cout << s<< endl;
    }
}