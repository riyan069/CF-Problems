#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            s[i] = tolower(s[i]);
        }

        string cat;
        cat += s[0];
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
            {
                cat += s[i];
            }
        }
        if(cat == "meow") cout << "YES"<< endl;
        else cout << "NO"<< endl;
    }
}