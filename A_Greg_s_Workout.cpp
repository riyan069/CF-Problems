#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    vector<int>total;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int chest = 0, biceps = 0, back = 0;
    int i = 0;
    for(int i = 0; i < n ; i++)
    {
        if ((i + 1) % 3 == 1)
        {
            chest += v[i];
        }
        else if ((i + 1) % 3 == 2)
        {
            biceps += v[i];
        }
        else
        {
            back += v[i];
            
        }
        
    }

    if(chest > biceps && chest > back) cout << "chest";
    else if (biceps > chest && biceps > back) cout << "biceps";
    else cout << "back";
    
    
}