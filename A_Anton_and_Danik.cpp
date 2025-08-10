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
    cin>> n >> s;
    int a = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]== 'A') a++;
        else if(s[i] == 'D')d++;
    }
    if(a > d)cout<< "Anton";
    else if(d > a) cout << "Danik";
    else cout << "Friendship";
    
}