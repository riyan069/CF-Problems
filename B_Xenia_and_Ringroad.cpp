#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    long long int n, m;
    cin >> n >> m;
    long long int task = n;
    vector<long long int> v;
    for (long long int i = 0; i < m; i++)
    {
        long long int x;
        cin >> x;
        v.push_back(x);
    }

    long long int sum = 0;
    long long int current = 1;
    for (long long int i = 0; i < m ; i++)
    {
        if(current < v[i])        
        {
            sum = sum + (v[i] - current);
        }
        else if(current > v[i])
        {
            sum = sum + (task - current) + v[i];
        }
        current = v[i];
    }
    cout << sum;
}