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
    int x = 0;
    while (n--)
    {
        string s;
        cin >> s;
        if (s[0] == 'X' && s[1] == '+')
        {
            x++;
        }
        if (s[0] == 'X' && s[1] == '-')
        {
            x--;
        }
        if (s[0] == '+')
        {
            ++x;
        }
        if (s[0] == '-')
        {
            --x;
        }
    }
    cout << x;
}