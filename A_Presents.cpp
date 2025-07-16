#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define cl cout << '\n'
#define endl '\n'
int main()
{
    op();
    int n;
    cin >> n;
    map<int, int> m;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        m[i] = x;
    }

    map<int, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " " << (*it).second;
        cl;
    }

    sort(m.begin(), m.end(), [](const auto &a, const auto &b){
        return a.second < b.first;
    });
    cl;

    for (it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " " << (*it).second;
        cl;
    }

    // for (it = m.begin(); it != m.end(); it++)
    // {
    //     for (int i = 1; i <= n; i++)
    //     {

    //         if (m[(*it).second] == i)
    //         {
    //             cout << m[(*it).first] << " ";
    //         }
    //     }
    // }
}