/* Author G.M. Shahariyar Riyan */
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
int main()
{
    op();
    string a;
    cin >> a;
    string s;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u' && a[i] != 'y' && a[i] != 'A' && a[i] != 'E' && a[i] != 'I' && a[i] != 'O' && a[i] != 'U' && a[i] != 'Y')
        {
            s.push_back('.');
            if (a[i] < 97)
            {
                char u;
                u = a[i] + 32;
                s.push_back(u);
            }
            else
                s.push_back(a[i]);
        }

    }
    cout << s;
}