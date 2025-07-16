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
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int first = 0;
    int second = 0;
    int dif = 1000;
    for (int i = 0; i <= n; i++)
    {
        int subs = abs(v[i] - v[i + 1]);
        if (i == n)
        {
            subs = abs(v[n - 1] - v[0]);
            if (subs < dif)
            {
                dif = subs;
                first = n;
                second = 1;
            }
        }
        else
        {
            if (subs < dif)
            {
                dif = subs;
                first = i + 1;
                second = i + 2;
            }
        }
    }
    cout << first << " " << second;
}