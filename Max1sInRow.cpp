//Return the row no. which has the maximum no. of 1s in it. 
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

int Max1sRow(vector<vector<int>> arr)
{
    int mcount=0,count=0,maxr=-1;
    for(int i=0;i<arr.size();i++)
    {
        count = arr.size()-1-LastOccurence(arr[i],0);
        if(count>mcount){
            mcount = count;
            maxr=i;
        }
    }
    return maxr;
}
int main()
{
   vector<vector<int>> arr;
   int m,n;
   cout<<"Enter the order of matrix (mxn):  ";
   cin>>m>>n;

   cout<<"Enter Matrix: "<<endl;
   for(int i=0;i<m;i++)
   {
     vector<int> a(n);
     for (int j=0;j<n;j++)
       cin>>a[j];

     arr.push_back(a);
   } 

    cout<<"Row with maximum 1: "<<Max1sRow(arr);
}