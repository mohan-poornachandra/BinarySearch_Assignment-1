//Return true if a given no. is perfect square using binary search.
#include<iostream>
#include<vector>
using namespace std;

bool PerfectSquare(int x)
{
    int low=0, high =x;
    while(low<=high)
    {
        int mid = (low+high)/2;
        
        if(mid*mid==x) return true;

        if(mid*mid>x) high = mid-1;
        else low = mid+1;

    }
    return false;

}

int main()
{
    int x;
    cout<<"Enter a no.  :  "; cin>>x;

    if(PerfectSquare(x))
       cout<<x<<" is a perfect square. "<<endl;
    
    else 
       cout<<x<<" is not a perfect square."<<endl;

}