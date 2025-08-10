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
    int f = 0, secU = 0, secL = 0, all = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[0] < 97)
        {
            f++;
        }
        if (s[i] < 97)
        {
            all++;
        }
    }
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] < 97)
        {
            secU++;
        }
        if (s[i] >= 97)
        {
            secL++;
        }
    }
    if (s.size() == 1)
    {
        if(s[0] >= 97)
        s[0] = toupper(s[0]);
        else if(s[0] < 97)
        s[0] = tolower(s[0]);
    }
    else
    {
        if (f == 0 && secU == s.size() - 1)
        {
            for (int i = 1; i < s.size(); i++)
            {
                s[0] = toupper(s[0]);
                s[i] = tolower(s[i]);
            }
        }
        else if (all == s.size())
        {
            for (int i = 0; i < s.size(); i++)
            {
                // s[0] = toupper(s[0]);
                s[i] = tolower(s[i]);
            }
        }
    }

    cout << s;
}