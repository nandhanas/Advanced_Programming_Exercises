#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> primes;
	primes.push_back(2);
	for (int i=3; i<100; i++)
	{ 
		bool prime = true;
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0) {
            	prime = false;
                break;
            }

        }
        if(prime){
        	primes.push_back(i);
        }
    }
    cout<<"Primes between 1 and 100:"<<endl;
    for(int i=0; i<primes.size(); i++)
    {
    	cout<<primes[i]<<endl;
    }  
    return 0; 
}

//Here, it is efficient to increase the size of array of primes according to the need instead of having a fixed array