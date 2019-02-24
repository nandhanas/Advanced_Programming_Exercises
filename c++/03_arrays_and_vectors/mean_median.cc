#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;

void mean(vector<double> temperatures)
{
	double mean{};
	for(int i=0; i<temperatures.size(); i++)
    {
    	mean+=temperatures[i];
    }
    mean/=temperatures.size();
    cout<<"Mean:"<<mean<<endl;  
}

void mode(vector<double> temperatures)
{
	vector<double>histogram(temperatures.size(),0);
	for(double i=0;i<temperatures.size();i++)
	{
		histogram[temperatures[i]]++;
	}
	double mode = max_element(histogram.begin(),histogram.end()) - histogram.begin();
	cout<<"Mode:"<<mode<<endl;
}

int main()
{
	double temp {0};
	vector<double> temperatures;
	ifstream infile("temperatures.txt");
	while(infile>>temp)
	{
		temperatures.push_back(temp);
	}
	sort( temperatures.begin(), temperatures.end() );
	mean(temperatures);
	mode(temperatures);
	return 0;
}