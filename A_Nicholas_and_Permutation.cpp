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
    vector<int> v;
    int maxi = N_INF, ind;
    int mini = INF, nind;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > maxi)
        {
            maxi = x;
            ind = i;
        }
        if (x < mini)
        {
            mini = x;
            nind = i;
        }
        v.push_back(x);
    }

    int dis;
    if (ind == 0 || ind == n - 1)
    {
        dis = 0;
        for (int i = 0; i < n; i++)
        {
            if (abs(ind - i) > dis)
            {
                dis = abs(ind - i);
            }
        }
        int temp = v[dis];
        v[dis] = v[nind];
        v[nind] = temp;
        cout << dis << endl;
    }
    else if (nind == 0 || nind == n - 1)
    {
        dis = 0;
        for (int i = 0; i < n; i++)
        {
            if (abs(nind - i) > dis)
            {
                dis = abs(nind - i);
            }
        }
        int temp = v[dis];
        v[dis] = v[ind];
        v[ind] = temp;
        cout << dis << endl;
    }

    else
    {
        int idis = min(abs(ind),abs((n-1) - ind));
        int ndis = min(abs(nind),abs((n-1) - nind));
        if (ndis < idis)
        {
            dis = 0;
            for (int i = 0; i < n; i++)
            {
                if (abs(nind - i) > dis)
                {
                    dis = abs(nind - i);
                }
            }
            int temp = v[dis];
            v[dis] = v[ind];
            v[ind] = temp;
            cout << dis << endl;
        }
        else
        {
            dis = 0;
        for (int i = 0; i < n; i++)
        {
            if (abs(ind - i) > dis)
            {
                dis = abs(ind - i);
            }
        }
        int temp = v[dis];
        v[dis] = v[nind];
        v[nind] = temp;
        cout << dis << endl;
        }
        
    }

    return 0;
}