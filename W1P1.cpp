#include<bits//stdc++.h>
using namespace std;
int linear_search(vector<int> arr, int key)
{
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i] == key) return i;
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++) cin>>arr[i];
    int key;
    cout<<"Enter key : ";
    cin>>key;
    int ans = linear_search(arr,key);
    if(ans >= 0) cout<<ans;
    else cout<<"Not found !";
    return 7;
}