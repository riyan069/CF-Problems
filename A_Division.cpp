#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    op();
    int n;
    cin>> n;
    while(n--)
    {
        int a;
        cin>> a;
        if (a <= 1399) cout << "Division 4" << endl;
        else if(a <= 1599) cout << "Division 3" << endl;
        else if(a <= 1899) cout << "Division 2" << endl;
        else cout << "Division 1" << endl;
        
        
    }
}