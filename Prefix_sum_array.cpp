#include<iostream>
#include<vector>
using namespace std;

vector<int> Prefix_sum_array(vector<int>&arr, int n)
{
    vector<int>res(n);
    res[0] = arr[0];
    for(int i=1;i<n;i++)
    {
        res[i] = res[i-1] + arr[i]; 
    }
    return res;
}

void arr_print(vector<int>&arr, int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    cout<<"enter no of elements of array"<<endl;
    int n;
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the numbers in array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<int>prefix_array = Prefix_sum_array(arr,n);
    arr_print(prefix_array,n);
}