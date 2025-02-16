#include<bits//stdc++.h>
using namespace std;
int bsearch(vector<int> arr, int key,int low, int high)
{
    if(low > high) return -1;
    int mid = low + (high - low)/2;
    if(arr[mid] == key) return mid;
    else if(arr[mid] > key) return (bsearch(arr,key,low,mid-1));
    else return(bsearch(arr,key,mid+1,high));
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
    int ans = bsearch(arr,key,0,n-1);
    if(ans >= 0) cout<<ans;
    else cout<<"Not found !";
    return 7;
}