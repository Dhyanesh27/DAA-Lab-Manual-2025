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

int jump_search(vector<int> arr, int key, int n)
{
    int i = -1;
    int low = 0;
    int high = n-1;
    while(i < n)
    {
        // calculate power
        int Power = (1<<i);

        // overflow
        if(Power >= n)
        {
            high = n-1;
            break;
        }

        // found
        if(arr[Power] == key) return Power;

        // greater than key
        if(arr[Power] > key)
        {
            high = Power;
            break;
        }

        low = Power;
        i++;
    }
    int ans = bsearch(arr,key,low,high);
    if(ans >= 0) return ans;
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
    int ans = jump_search(arr,key,n);
    if(ans>=0) cout<<ans;
    else cout<<"Not found !";
    return 7;
}