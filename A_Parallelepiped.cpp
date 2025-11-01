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
    int x,y,z;
    cin >> x >> y>> z;
    int l = sqrt((x*z)/y);
    int b = sqrt((x*y)/z);
    int h = sqrt((z*y)/x);

    cout << (l+b+h) * 4;
    
    
    return 0;
}