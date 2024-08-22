//Given array of n integers and a position integer p count noof pairs whose sum is exctly divisible by p

#include<iostream>
#include<vector>
#include<map>
using namespace std;

int pairs(vector<int>&v,int p)
{
    int n=v.size();
    map<int,int>f;
    for(int i=0;i<n;i++)
    {
        f[((v[i]%p)+p)%p]++;
    }
    int c=0;
    c+=(f[0]*(f[0]-1))/2;
    for(int i=1;i<(p+1)/2;i++)
    {
        c+=f[i]*f[p-i];
        
    }
    if((p&1) == 0)
    c+=(f[p/2]*(f[p/2]-1))/2;
    
    return c;

}

int main()
{
    vector<int>v{-2,8,-1,7,9,10,40,21,25,6,1,5,2,14,28,4,-3,3,35,17};
    int p = 7;
    int res=pairs(v,p);
    cout<<res;
}