#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    op();
    int n;
    cin>> n;
    while (n--)
    {
        string s;
        cin>> s;
        int a = 0, b = 0;
        for (int i = 0; i < 5; i++)
        {
            if(s[i] == 'A') a++;
            else b++;
        }
        if(a>b) cout<<"A" <<endl;
        else cout <<"B" <<endl;
        
    }
    
}