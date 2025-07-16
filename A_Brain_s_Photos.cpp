#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
vector<string> s;

int main()
{
    op();
    int n, m;
    cin >> n >> m;
    int c = 0;
    for (int i = 0; i < n * m; i++)
    {
        string a;
        cin >> a;
        if (a == "C" || a == "M" || a == "Y")
        {
            c++;
        }
    }
    if(c!=0) cout << "#Color";
    else cout << "#Black&White";
}