
#include <bits/stdc++.h>
using namespace std;
#define op()                     \
    ios_base::sync_with_stdio(); \
    cin.tie(0);                  \
    cout.tie(0);
int main()
{
    op();
    string s;
    cin >> s;
    int len = s.size();
    int count = 0;
 
    for(int i = 0; i< len; i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            count++;
        }
    }
    if (count > 0)
    {
        cout << "YES";
    }
    else cout << "NO";
    
}