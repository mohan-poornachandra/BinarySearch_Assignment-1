#include<iostream>
#include<vector>
using namespace std;



int main()
{
    int n;
    cout<<"Enter n value: "; cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++)
      cin>>arr[i];
    
    //As all integers will be there, we use the indeces for mapping.
    int low=0,high=n-1;
    int mid;
    while(low<=high)
    {
        mid = (low+high)/2;
        
        if(arr[mid]!=mid+1) high=mid-1;

        else low = mid+1; 
    }
    
    cout<<"Repeated element is: "<<arr[mid];
    
}