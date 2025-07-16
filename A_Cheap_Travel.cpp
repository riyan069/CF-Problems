#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    op();
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int basic = n*a;
    int mride = n/m;
    int mcost = mride*b;
    int total;
    if (n%m != 0)
    {
        total = (n%m)*a + mcost;
    }
    else total = mcost;
    if(basic < total) cout << basic;
    else cout<< total;
    
}