/* Author G.M. Shahariyar Riyan */
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[2][2];
        int count = 0;
        int last = 0; 
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == 1)
                {
                    count++;
                }
            }
        }
        if (count == 0)
            cout << 0 << endl;
        else if (count == 4)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
}

/*
1 0
0 0

1 1
0 0

0 0
1 0

0 0
1 1

0 0
0 1

1 1
1 0

1 1
0 1

0 1
1 1

1 0
1 1

1 0
0 1

0 1
1 0

1 1
1 1
*/