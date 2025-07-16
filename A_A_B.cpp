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
    int n;
    cin>> n;
    while(n--)
    {
        string s;
        cin>> s;
        int sum = (s[0]+s[2]) - '0' - '0';
        cout << sum << endl;
    }
}