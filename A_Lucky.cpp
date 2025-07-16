#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    op();
    int n;
    cin>>n;
    while (n--)
    {
        string s;
        cin>> s;
        if (((s[0]+s[1]+s[2])-(47*3)) - ((s[3]+s[4]+s[5])-(47*3)) == 0)
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
        
    }
    
}