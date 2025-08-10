/* Author G.M. Shahariyar Riyan */
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
int main()
{
    op();
    string s;
    cin >> s;
    int o = 0, z = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (z < 7)
        {
            if (s[i] == '0')
                z++;
            else
                z = 0;

        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (o < 7)
        {
            if (s[i] == '1')
                o++;
            else
                o = 0;
        }
    }
    if (z >= 7 || o >= 7)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}