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
        int n;
        cin >> n;
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (max < x)
            {
                max = x;
            }
        }
        cout << "Case " << i << ": " << max << endl;
        i++;
    }
}