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
    while (n--)
    {
        int count = 0;
        for (int i = 0; i < 4; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for (int i = 1; i < 4; i++)
        {
            if (v[0] < v[i])
            {
                count++;
            }
        }
        cout<<count << endl;
        v.clear();
    }
}