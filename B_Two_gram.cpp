/* Author G.M. Shahariyar Riyan */
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
int main()
{
    op();
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (s.size() <= 2)
        cout << s;
    else
    {
        map<string, int> m;
        for (int i = 0; i < s.size() - 1; i++)
        {
            ++m[s.substr(i, 2)];
        }
        int max = 0;
        string maxS = "";
        for (auto u : m)
        {
            if (u.second > max)
            {
                max = u.second;
                maxS = u.first;
            }
        }
        cout << maxS;
    }
}