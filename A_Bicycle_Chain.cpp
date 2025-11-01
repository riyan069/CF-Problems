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
    int n;
    cin >> n;
    vector<double> p;
    for (int i = 0; i < n; i++)
    {
        double x;
        cin >> x;
        p.push_back(x);
    }
    int m;
    cin >> m;
    vector<double> w;
    for (int i = 0; i < m; i++)
    {
        double x;
        cin >> x;
        w.push_back(x);
    }

    double maxi = N_INF;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            double val = w[j] / p[i];
            if (val/(int)val == 1.00 && val > maxi)
            {
                c = 0;
                maxi = val;
            }
            if (val == maxi)
            {
                c++;
            }
        }
    }
    cout << c << endl;

    return 0;
}