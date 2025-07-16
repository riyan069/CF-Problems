#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    op();
    int n, b, d;
    cin >> n >> b >> d;
    int waste = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x <= b)
        {
            waste += x;
        }
        if (waste > d)
        {
            waste = 0;
            count++;
        }
    }
    cout << count;
}