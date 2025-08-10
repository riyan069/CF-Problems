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
    cin>> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size()%2 == 1)
        {
            cout << "NO"<< endl;
        }
        else
        {
            string a,b;
            for (int i = 0; i < s.size()/2; i++)
            {
                a.push_back(s[i]);
            }
            for (int i = s.size()/2; i < s.size(); i++)
            {
                b.push_back(s[i]);
            }
            if(a == b)cout << "YES"<< endl;
            else cout <<"NO"<< endl;
        }
        
        
    }
    
}