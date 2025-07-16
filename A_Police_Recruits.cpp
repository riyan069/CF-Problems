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
    int p = 0, c = 0;
    int count = 0;
    while (n--)
    {
        int x;
        cin >> x;
        if (x > 0)
        {
            p = p + x;
        }
        else if (x == -1)
        {
            c++;
            count++;
        }
        if ((count != 0 && p != 0))
        {
            p--;
            c--;
        }
        count = 0;
    }
    cout << c;
}