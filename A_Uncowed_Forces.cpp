/*Author G.M. Shahariyar Riyan*/
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
using ll = long long;
#define precision(x) fixed << setprecision(x)
const int NNN = 1e7 + 5;
int arr[NNN];
const int INF = 1e9 + 7;
const int N_INF = -1e9 - 10;
const long long LINF = 1e18;
const long long N_LINF = -1e18;
const int MOD = 1e9 + 7;

int main()
{
    op();
    vector<double> m;
    for (int i = 0; i < 5; i++)
    {
        double x;
        cin >> x;
        m.push_back(x);
    }
    vector<double> w;
    for (int i = 0; i < 5; i++)
    {
        double x;
        cin >> x;
        w.push_back(x);
    }

    double s, u;
    cin >> s >> u;
    double sum = 0;
    for (int i = 0; i < 5; i++)
    {
        double point = (500 * (i + 1));
        double fst = (0.3 * point);
        double div = m[i] / 250;
        double divone = 1 - div;
        double divmul = divone * point;
        double scnd = (divmul - (50 * w[i]));

        double maxi = max(fst, scnd);
        sum = sum + maxi;
    }
    sum = sum + (s * 100) - (u * 50);
    cout << sum << endl;
    return 0;
}