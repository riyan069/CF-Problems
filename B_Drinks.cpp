/*Author G.M. Shahariyar Riyan*/
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
using ll = long long ;
#define precision(x) fixed << setprecision(x)
int main() {
    op();
    ll n;
    cin >>n;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        sum+=x;
    }
    double total = (double)sum/n;
    cout << precision(12) <<total;
    
    
    return 0;
}