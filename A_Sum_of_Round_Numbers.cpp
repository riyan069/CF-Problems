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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        string str = to_string(n);
        int len = str.length();
        for (int i = 0; i < len; i++)
        {
            if (str[i] != '0')
            {
                int num = str[i] - '0';
                num = num * pow(10 ,(len - i - 1));
                v.push_back(num);
            }
        }
        cout << v.size() << endl;
        for (auto u : v)
            cout << u << " ";
        cout << endl;
    }

    return 0;
}