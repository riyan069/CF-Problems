/* Author G.M. Shahariyar Riyan */
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    op();
    int t;
    cin >> t;
    int i = 1;
    while (t--)
    {
        string s, a;
        cin >> s;
        a = s;
        reverse(s.begin(), s.end());
        if (s == a)
            cout << "Case " << i << ": " << "Yes" << endl;
        else
            cout << "Case " << i << ": " << "No" << endl;
        i++;
    }
}