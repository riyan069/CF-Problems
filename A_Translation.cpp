/* Author G.M. Shahariyar Riyan */
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
int main()
{
    op();
    string s,a;
    cin >> s >> a;
    reverse(s.begin(),s.end());

    if(s == a) cout << "YES";
    else cout << "NO";
}