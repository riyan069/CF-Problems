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
    vector<int>v;
    cin>> s;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] >=48)
        {
           v.push_back(s[i]-48);
        }
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        if (i != v.size()-1)
        {
            cout << v[i]<<"+";
        }
        else cout << v[i];
        
    }
    
    

}