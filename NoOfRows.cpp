//You have n coins and you want to build a staircase with these coins. The staircase consists of k
//rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.
//Given the integer n, return the number of complete rows of the staircase you will build.

#include<iostream>
#include<vector>
using namespace std;

int NoOfRows(int n)
{
    int low=0, high = n;
    while(low<=high)
    {
        int mid= (low+high)/2;

        if(((mid+1)*mid)/2==n) //Sum upto n formula: (n+1)*n/2
            return mid;
        if((mid+1)*mid/2<n) low = mid+1; 
        else high = mid-1;
    }
    return high;
}

int main()
{
    int n;
    cout<<"Enter no. of coins:  "; cin>>n;

    cout<<"No. of complete rows possible: "<<NoOfRows(n);
}