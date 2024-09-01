//equilibrium indices in array



//an index in an array is said to be in equilibrium if sum of before elements is equal to sum of after elements
//ex- [6,-5,4,-4,5] - no of indices in equilibrium are 6 - ls=0,rs=-5+4+-4+5=0 so in equilibrium similarly 4-4 also 
//this can be traditionally done but takes o(n^2) time this can be reduced to o(n) by using prefix sum array and suffix sum array
//psa - [6,1,5,1,6] ssa -[6,0,5,1,5] when psa and ssa are equal then element is said to be in equilibrium because as equilibrium suggests lsa ie psa-that position and rsa = ssa-that position 

#include<iostream>
#include<vector>
using namespace std;

vector<int> prefix_array(vector<int>&arr,int n)
{
    vector<int>res(n);
    res[0] = arr[0];
    for(int i=1;i<n;i++)
    {
        res[i] = res[i-1]+arr[i];
    }
    return res;
}

vector<int> suffix_array(vector<int>&arr,int n)
{
    vector<int>res(n);
    res[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        res[i] = res[i+1]+arr[i];
    }
    return res;
}

int main()
{
    int n;
    cout<<"enter the number of elements in array"<<endl;
    cin>>n;

    vector<int>arr(n);
    cout<<"enter elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>prefix_arr(n) ;
    vector<int>suffix_arr(n);
    prefix_arr = prefix_array(arr,n);
    suffix_arr = suffix_array(arr,n);

    int count=0;
    for(int i=0;i<n;i++)
    {
        if(prefix_arr[i] == suffix_arr[i])
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;

}