#include<iostream>
#include<vector>
using namespace std;

int LastOccurence(vector<int> arr, int x)
{
    int low=0,high=arr.size()-1;

    while(low<=high)
    {
        int mid=(low+high)/2;
        
        if(arr[mid]==x)
        {
            if(arr[mid+1]!=x) return mid;
            else 
               low = mid+1;
        }
        if(arr[mid]>x) high=mid-1;
        else low= mid+1;

    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter n value: "; cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++)
      cin>>arr[i];
    int x;
    cout<<"Enter target x:  "; cin>>x;

    cout<<"Last Occurence of "<<x<<" is : "<<LastOccurence(arr,x);

   
}