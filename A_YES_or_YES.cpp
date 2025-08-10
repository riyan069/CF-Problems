/* Author G.M. Shahariyar Riyan */
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
int main()
{
    op();
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        if (s == "yes")
        {
            cout << "YES"<<endl;
        }
        else cout <<"NO"<<endl;
        
        
    }
    
}