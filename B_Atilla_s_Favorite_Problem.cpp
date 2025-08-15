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
        int n;
        string s;
        cin >> n >> s;
        int max = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] - 96 > max)
            {
                max = s[i] - 96;
            }
        }
        cout << max << endl;
    }
}