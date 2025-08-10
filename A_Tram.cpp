/* Author G.M. Shahariyar Riyan */
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   
int main()
{
     int t;
     cin >> t;
     int n = t;
     int sum = 0;
     int max = 0;
     while (t--)
     {
        int a,b;
        cin >> a >> b;
        sum = sum - a + b;
        if (sum > max) max = sum;
     }
     cout << max;
     
}
