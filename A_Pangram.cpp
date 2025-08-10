/* Author G.M. Shahariyar Riyan */
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
int main()
{
    op();
    int n;
    string s;
    cin >>n >>  s;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        s[i] = tolower(s[i]);
        v.push_back(s[i]);
    }
    set<int>a (v.begin(),v.end());
    if(a.size() == 26)cout << "YES";
    else cout << "NO";
    
}