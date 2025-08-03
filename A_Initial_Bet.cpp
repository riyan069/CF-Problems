/* Author G.M. Shahariyar Riyan */
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    typedef long long int ll;
int main()
{
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
            v.push_back(x);
    }
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += v[i];
    }
    if (sum % 5 == 0 && sum != 0)
        cout << sum / 5;
    else
        cout << -1;
}