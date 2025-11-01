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
    int n, k, l, c, d , p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int have = k * l;
    int per = have/nl;
    int lime = c* d;
    int salt = p / np;
    int mini = min(per,lime);
    mini = min(mini,salt);
    cout << mini/n <<endl;
    return 0;
}