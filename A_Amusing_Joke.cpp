/* Author G.M. Shahariyar Riyan */
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
int main()
{
    op();
    string s, a, b;
    cin >> s >> a >> b;
    vector<int> v;
    for (int i = 0; i < b.size(); i++)
    {
        v.push_back(b[i]);
    }
    int ache = 0;
    int xtra = 0;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            if (s[i] == v[j])
            {
                ache++;
                v.erase(v.begin() + j);
                break;
            }
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            if (a[i] == v[j])
            {
                ache++;
                v.erase(v.begin() + j);
                break;
            }
        }
    }
    if (v.size() > 0)
    {
        xtra++;
    }
    if (ache == s.size() + a.size())
    {
        if (xtra == 0)
        {
            cout << "YES";
        }
        else cout << "NO";
        
    }
    else cout << "NO";
    
    
}