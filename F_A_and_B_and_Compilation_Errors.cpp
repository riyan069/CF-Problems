/* Author G.M. Shahariyar Riyan */
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    op();
    deque<int> arr1;
    deque<int> arr2;
    deque<int> arr3;
    deque<int> temp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr1.push_back(x);
    }
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        arr2.push_back(x);
    }
    for (int i = 0; i < n - 2; i++)
    {
        int x;
        cin >> x;
        arr3.push_back(x);
    }
     sort(arr1.begin(),arr1.end());
     sort(arr2.begin(),arr2.end());
     sort(arr3.begin(),arr3.end());
     sort(temp.begin(),temp.end());
     
    temp = arr2;
    for (auto u : arr1)
    {
        if (find(temp.begin(), temp.end(), u) == temp.end())
        {
            cout << u << endl;
        }
        auto it = find(temp.begin(), temp.end(), u);
        if (it != temp.end())
        {
            temp.erase(it);
        }
    }

    for (auto u : arr2)
    {
        if (find(arr3.begin(), arr3.end(), u) == arr3.end())
        {
            cout << u << endl;
        }
        auto it = find(arr3.begin(), arr3.end(), u);
        if (it != arr3.end())
        {
            arr3.erase(it);
        }
    }
}