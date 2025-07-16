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
    cin >> n;
    while (n--)
    {
        int len;
        string s;
        cin >> len >> s;
        
        if (len == 5)
        {
            sort(s.begin(),s.end());
            // cout << s << endl;
            if (s == "Timru")
            {
                cout << "YES"<<endl;
            }
            else cout << "NO"<<endl;
            
        }
        else cout << "NO"<<endl;
        
    }
}