#include <iostream>
#include<cmath>
using namespace std;

void SieveOfEratosthenes(int n)
{
	bool prime[n+1];
	int i,j;
	memset(prime, true, sizeof(prime));
	for(i=2; i<sqrt(n); i++)
	{
		if(prime[i] == true)
		{
			for(j=i*i; j<=n; j+=i)
			{
				prime[j] = false;
			}
		}
	}

	cout<<"Prime numbers between 1 and "<<n<<":"<<endl;
	for(i=2;i<n;i++)
	{
		if(prime[i])
		{
			cout<<i<<endl;
		}
	}
}

int main()
{
	int n;
	cout<<"Enter the number upto which the prime numbers should be calculated"<<endl;
	cin>>n;
	SieveOfEratosthenes(n);
	return 0;
}