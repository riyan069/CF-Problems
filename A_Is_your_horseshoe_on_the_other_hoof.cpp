#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    op();
    int count = 0;

    vector<int> v;
    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        v.push_back({x});
    }
    set<int> s(v.begin(), v.end());
    for (auto u : s)
    {
        count++;
    }
    cout << 4 - count;
}