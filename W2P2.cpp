#include <bits//stdc++.h>
using namespace std;
void find_indices(vector<int> arr)
{
    int n = arr.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i] + arr[j] == arr[k])
                {
                    cout<<"Indices are : "<<i+1<<" "<<j+1<<" "<<k+1<<endl;
                    return;
                }
            }
        }
    }
    cout<<"No sequence found !"<<endl;
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
        for(int i=0;i<n;i++) cin>>arr[i]; // take 'n' elements as input
        find_indices(arr);
    }
    return 7;
}