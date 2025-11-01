#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int len = s.length();
        int time[30] = {0};
        unordered_set<char> unq;
        vector<char> v;
        for (int i = 0; i < len; i++)
        {
            time[s[i] - 64]++;
            unq.insert(s[i]);
        }
        for (auto u : unq)
            v.push_back(u);
        int count = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (time[v[i] - 64] >= v[i] - 64)
            {
                if (n >= time[v[i] - 64])
                {
                    count++;
                }
                n = n - time[v[i] - 64];
            }
        }
        cout << count << endl;
    }
}