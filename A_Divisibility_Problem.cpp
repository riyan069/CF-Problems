#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    op();
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        int move = (b - (a % b)) % b;
        cout << move << '\n';
    }
}
