/* Author G.M. Shahariyar Riyan */
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
int main()
{
    op();
    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < s.size(); i++)
    {
        v.push_back(s[i]);
    }
    set<int>a(v.begin(),v.end());
    if (a.size()% 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else cout << "IGNORE HIM!";
    
    
}