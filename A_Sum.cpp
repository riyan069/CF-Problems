#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    op();
    int t;
    cin >> t;
    int f = 0;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b + c)
            f++;
        else if (b == a + c)
            f++;
        else if (c == a + b)
            f++;
            if(f == 1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            f = 0;
    }
}