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
        int x;
        cin >> x;
        
        string a,b;
        cin>> a >> b;
        int r1 = 0, r2 = 0;
        for (int i = 0; i < x; i++)
        {
            if(a[i] == 'R')r1++;
            if(b[i] == 'R') r2++;
        }
        
        if(r1 == r2) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
}