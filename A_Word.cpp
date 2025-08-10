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
    int low = 0, up = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 97)
        {
            low++;
        }
        else
            up++;
    }
    if (up > low)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 97)
            {
                s[i] = s[i] - 32;
            }
        }
    }
    else if (up < low)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] < 97)
            {
                s[i] = s[i] + 32;
            }
        }
    }
    else if(up == low)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] < 97)
            {
                s[i] = s[i] + 32;
            }
        }
    }

    cout << s;
}