//given 2 +ve integers count the no of steps to make those variables equal by subtracting smaller value from bigger value

#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int count=0;
    while(a!=b)
    {
        int d;
        if(a>b)
        {
            d = a-b;
            a = a-d;
            b = d;
            count++;

        }
        else{
            d=b-a;
            b=b-d;
            a=d;
            count++;
        }
    }
    cout<<count;
}