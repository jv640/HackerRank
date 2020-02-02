#include <bits/stdc++.h>

using namespace std;

int find(int arr[],int n)
{
    sort(arr, arr+n);
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
        mini=min(mini,abs(arr[i]-arr[i+1]));
        return mini;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //int ans = find(arr,n);
    cout<<find(arr,n);
}
