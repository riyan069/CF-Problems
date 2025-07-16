#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int stone(int a, int b, int n)
{
    int k = 0;
    int sim, anti;
    while (n != 0)
    {
        if (k == 0)
        {
            sim = __gcd(a, n);
            n = n - sim;
            k++;
        }
        else if (k == 1)
        {
            anti = __gcd(b, n);
            n = n - anti;
            k--;
        }
    }
    if (k == 1)
    {
        return 0;
    }
    else return 1;
    
}
int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    cout << stone(a,b,n);
}