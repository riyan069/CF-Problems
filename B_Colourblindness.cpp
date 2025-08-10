#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    op();
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;

        string a, b;
        cin >> a >> b;
        int r1 = 0, r2 = 0;
        int ok = 0;
        for (int i = 0; i < x; i++)
        {
            if ((a[i] == 'R') != (b[i] == 'R'))
            {
                ok = 1;
                break;
            }
        }
        cout << (ok == 0 ? "YES\n" : "NO\n");
    }
}