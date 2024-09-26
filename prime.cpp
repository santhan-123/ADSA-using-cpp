#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int flag=0;
	if(n!=2 && n%2==0)
	flag=1;
	else if(n!=3 && n%3==0)
	flag=1;
	else{
		for(int i=5;i<=sqrt(n);i+=6){
			if(n%i==0||n%(i+2)==0)
			flag=1;
			break;
		}
	}

if(flag==0)
cout<<n<<"  is prime..."<<endl;
else
cout<<n<<" is not prime..."<<endl;
return 0;
}
