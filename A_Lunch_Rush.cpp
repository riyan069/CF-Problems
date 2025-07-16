#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    int n, k;
    cin >> n >> k;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int f, t;
        cin >> f >> t;
        int joy;
        if (t <= k)
            joy = f;
        else
            joy = f - (t - k);

        maxi = max(maxi, joy);
    }
    cout << maxi;
}

// int n, k, f, t;
//     map<int, pair<int, int>> m;
//     cin >> n >> k;
//     for (int i = 0; i < n; i++)
//     {
//         int f, t;
//         cin >> f >> t;
//         m[i] = {f, t};
//     }
//     int flag = 0;
//     int max = 0;
//     int index = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (m[i].second <= k && m[i].first > max)
//         {
//             index = i;
//             max = m[i].first;
//             flag = 1;
//         }
//     }
//     vector<int> v;
//     if (flag == 1)
//         cout << m[index].first;
//     else
//     {

//         for (int i = 0; i < n; i++)
//         {
//             if (m[i].second > k)
//             {
//                 v.push_back(m[i].first - (m[i].second - k));
//             }
//         }

//         int maxi = *max_element(v.begin(), v.end());

//         cout << maxi << endl;
//     }
