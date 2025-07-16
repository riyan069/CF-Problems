#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        int a = v[i];
        for (int j = i - 1; j >= 0; j--)
        {
            if (v[j] == a)
            {
                v[j] = 0;
            }
        }
    }
    vector<int> entry;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0)
        {
            entry.push_back(v[i]);
        }
    }

    cout << entry.size() << endl;
    for (auto u : entry)
        cout << u << " ";
}
