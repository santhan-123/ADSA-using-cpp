// Josheh's circle 

// General intutuion - 

//Case 1 - when there are people of 2 to the power of smtg then the person starting will be the one surviving 
//example there are total 8 people 1 2 3 4 5 6 7 8 then in 1st round 1 3 5 7 will be remaining and the sword is given to 1 again similarly the next rounds.

//Case 2 - when there are no of people without the no of people as 2^n 
//then we should wait until the remaining no of people is of form 2^n and then that person will be the survivor
//if there are 100 people after 36 killings 64 will be remaining and will be of power 2^n 
// so 72nd person will be killed and 73rd person will be alive

// so formula would look like n(100) - 2^k where k is |log2(n)|
// k is found like that because int power value of 2 which is lessthan or equal to n

#include<iostream>
#include<cmath>
using namespace std;

int largestPower(int n)
{
    return pow(2 ,int(log2(n)));
}

int joseph_number(int n)
{
    int l = largestPower(n);
    return 2*(n-l)+1;
}

int main()
{
    int n;
    cin>>n;

    cout<<joseph_number(n);
    return 0;
}



