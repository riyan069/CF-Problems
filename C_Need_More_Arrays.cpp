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
    int c = 0;
    while (n--)
    {
        vector<int> v;
        int x;
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }

        for (int i = 0; i < x - 1; i++)
        {
            if (v[i] + 1 < v[i + 1])
            {
                c++;
            }
        }
        cout << c << endl;
    }
}