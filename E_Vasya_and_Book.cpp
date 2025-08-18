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
    while (t--)
    {
        int n, x, y, d;
        cin >> n >> x >> y >> d;
        int dist = y - d;
        int dif;
        if (dist >= 0)
        {
            dif = y - x;
            if (dif % d == 0)
            {
                cout << dif / d << endl;
            }
            else
            {
                int a = ceil(x/d);
            

            }
        }
        else
        {
            cout << -1 << endl;
        }
    }
}