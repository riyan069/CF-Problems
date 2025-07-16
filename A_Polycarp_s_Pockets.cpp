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
    int v[110] = {0};
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[x]++;
    }
    int max = v[0];

    for (int i = 1; i < 110; i++)
    {
        if(v[i] > max)
        {
            max = v[i];            
        }
    }
    cout << max;
}