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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int c = 0;
        int last = n - 1;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] == s[last])
            {
                c++;
            }
            last--;
        }
        if (c == k)
        {
            cout << "YES" << endl;
        }
        else
            cout << "N0" << endl;
    }
}