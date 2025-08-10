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
    if (s[0] >= 97)
    {
        s[0] = s[0] - 32;
    }
    
    cout << s;
}