/* Author G.M. Shahariyar Riyan */
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if (m*a > b)
    {
        int mul = (n%m)*a;
        if (mul > b)
        {
            cout << (n/m)*b+b;
        }
        else cout << (n/m)*b+ mul;
        
    }
    else cout << n*a;
    
}