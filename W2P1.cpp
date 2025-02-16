#include<bits//stdc++.h>
using namespace std;
int first_occurrence(vector<int> arr,int key, int low, int high)
{
    while(low <= high)
    {
        if(low > high) return -1;
        int mid = low + (high - low)/2;
        // if found or greater, go lower
        if(arr[mid] >= key) high = mid - 1;

        // if lesser, go higher
        else low = mid + 1;
    }
    return low;
}
int last_occurrence(vector<int> arr,int key, int low, int high)
{
    while(low <= high)
    {
        if(low > high) return -1;
        int mid = low + (high - low)/2;
        // if found or lesser, go higher
        if(arr[mid] <= key) low = mid + 1;

        // if greater, go lower
        else high = mid - 1;
    }
    return high;
}
int count_occurrences(vector<int> arr, int key,int low, int high)
{
    // find first and last occurrence
    int first = first_occurrence(arr,key,low,high);
    int last = last_occurrence(arr,key,low,high);

    // if not present (slight optimization)
    if(first < 0 || last < 0) return 0;
    
    return (last - first + 1);
}
int main()
{
    int t;
    cout<<"Enter test cases : ";
    cin>>t;
    for(int a=0;a<t;a++)
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
        int ans = count_occurrences(arr,key,0,n-1);
        if(ans)cout<<ans<<endl;
    }
    return 7;
}