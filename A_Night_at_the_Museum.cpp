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
    int prev = 'a';
    int c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int dif = abs(s[i] - prev);
        dif = min(dif, 26 - dif);
        c+=dif;
        prev = s[i];
    }
    cout << c;
}