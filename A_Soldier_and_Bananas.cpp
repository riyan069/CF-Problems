#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    int k,n,w;
    cin >> k >> n >> w;
    int total = 0;
    for (int i = 1; i <= w; i++)
    {
        total = total + k*i;
    }
    int brw = total - n;
    if(brw>=0)cout << brw;
    else cout << 0;
    
}