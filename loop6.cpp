#include <iostream>
using namespace std;
int main()
{
	int sum=0;
	int n;
	int rem;
	int pali=n;
	
	cout<<"enter any number:"<<endl;
	cin>>n;
	
	while(n>0)
	{rem=n%10;
	sum=sum*10+rem;
	n=n/10;
}
if(pali==sum)
{cout<<"palindrome"<<endl;
	}	
	else
	{cout<<"not a palindrome"<<endl;
	}
		return 0;		
	}
