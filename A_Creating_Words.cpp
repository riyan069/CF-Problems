/* Author G.M. Shahariyar Riyan */
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
int main()
{
    op();
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        char c;
        c= a[0];
        a[0] = b[0];
        b[0] = c;
        cout << a << " "<< b << endl;

    }
}