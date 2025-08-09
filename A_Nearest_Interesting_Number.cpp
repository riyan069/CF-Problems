/* Author G.M. Shahariyar Riyan */
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    typedef long long int ll;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = n; i <= 1100; i++)
    {
        string s;
        s = to_string(i);
        int div = i;
        sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int rem = div % 10;
            sum = sum+rem;
            div = div / 10;
        }
        // cout << sum << endl;
        if (sum % 4 == 0)
        {
            cout << i ;
            break;
        }
        
    }
}