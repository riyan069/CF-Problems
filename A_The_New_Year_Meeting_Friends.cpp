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
const int N = 1e7 + 5;
int arr[N];

int main()
{
    op();
    vector<int> v;
    for (int i = 0; i < 3; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int total = abs(v[0] - v[1]) + abs(v[1] - v[1]) + abs(v[2] - v[1]) ;
    cout << total << endl;

    return 0;
}