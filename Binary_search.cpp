#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    op();
    int n;
    cin >>n;
    int target;
    cin >> target;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(auto u:v)
    cout << u << " ";
    cout << endl;
    int low = 0;
    int high = n - 1;
    int mid;
    while (low<=high)
    {
        mid = (low+ high) /2;
        if (v[mid] == target)
        {
            cout << mid;
            break;
        }
        if(target >  v[mid])
        {
            low = mid+1;
        }
        else
        high = mid - 1;
        
    }
    
    
}