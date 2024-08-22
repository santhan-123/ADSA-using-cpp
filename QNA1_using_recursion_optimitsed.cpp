//given 2 +ve integers count the no of steps to make those variables equal by subtracting smaller value from bigger value

#include<iostream>
using namespace std;

int noofpasses(int a, int b)
{
    if(a==b) return 0;
    if(a == 1|| b==1) return max(a,b)-1;
    int c=0;
    while(b!=0)
    {
        c+=(a/b);
        int r= a%b;
        a=b;
        b=r;
    }
    return c-1;
}

int main()
{
    int a,b;
    cin>>a>>b;

    int res;
    res= noofpasses(a,b);

   
    cout<<res;

}