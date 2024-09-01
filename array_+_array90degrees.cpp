//only applicable for suare matrices as addition is possible only for square matrices
//Rotate matrix by 90
// [1 2 3 
// 4 5 6 
// 7 8 9]
// 00 01 02 
// 10 11 12
// 20 21 22
// [7 4 1 
// 8 5 2
// 9 6 3]
// 20 10 00
// 21 11 01
// 22 12 02
// by wriring thse we come to below logic

#include<iostream>
#include<vector>
using namespace std;

void print_sum(vector<vector<int>>&arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int sum = arr[i][j]+arr[n-1-j][i];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"enter the dimension of matrix"<<endl;
    cin>>n;

    vector<vector<int>>matrix(n,vector<int>(n,0));
    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }

    print_sum(matrix,n);







}