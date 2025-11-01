#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int arr[30] = {0};
        for (int i = 0; i < n; i++)
        {
            arr[s[i] - 96]++;
        }
        bool more = false;
        int max = *max_element(arr, arr + 28);
        int maxi;
        for (int i = 0; i < 28; i++)
        {
            if ((arr[i] > 1))
            {
                more = true;
            }

            if (arr[i] == max)
            {
                maxi = i;
                break;
            }
        }
        if (!more)
            cout << "NO" << endl;
        else
        {
            char x = (char)(maxi + 96);
            // cout << max << " " <<x << endl;
            for (int i = 1; i < n; i++)
            {
                if (s[i] == x)
                {
                    s[i] = '0';
                }
                else
                    s[i] = '1';
            }
            bool abj = true;
            for (int i = 1; i < n; i++)
            {
                if (s[i] == s[i - 1])
                {
                    abj = false;
                }
            }
            if (abj)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;

        }
        
    }
}