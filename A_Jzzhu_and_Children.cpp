#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    op();
    int n, m;
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>> x;
        if (x <= m)
        {
            x = 0;
        }  
        v.push_back(x);
    }
    double last = 0;
    int ind = 0;
    for (int i = 0; i < n; i++)
    {

        if (ceil(double(v[i]) / m) >= last)
        {
            last = ceil(double(v[i]) / m);
            ind = i;
        }
    }

    cout << ind + 1;
}