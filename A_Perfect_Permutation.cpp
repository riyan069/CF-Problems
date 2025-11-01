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
const int NNN = 1e7 + 5;
int arr[NNN];
const int INF = 1e9 + 7;
const int N_INF = -1e9 - 10;
const long long LINF = 1e18;
const long long N_LINF = -1e18;
const int MOD = 1e9 + 7;

int main() {
    op();
    int n;
    cin >> n;
    if(n % 2 != 0 ) cout << -1 << endl;
    else{
        vector<int>v;
        for (int i = 1; i <= n; i++)
        {
            v.push_back(i);
        }
        
        for (int i = 1; i <=n; i+=2)
        {
            cout << v[i] << ' '  << v[i-1] << ' ';
        }
        
    }
    return 0;
}