#include <bits/stdc++.h>
using namespace std;
#define op()                        \
    ios_base::sync_with_stdio(0);  \
    cin.tie(0);                    \
    cout.tie(0);

int main()
{
    op();
    int n;
    cin >> n;
    string s;
    cin >> s;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        j += i;
        if (j >= n)
        {
            break;
        }
        cout << s[j];
    }
}
