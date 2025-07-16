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
    vector<int> v;
    for (int i = 0; i < 7; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int page = 0;
    int i = 0;
    while (1)
    {
        page += v[i];
        if (page >=  n)
        {
            cout << i + 1;
            break;
        }
        i++;
        if(i == 7) i = 0;
        
    }
    
}
