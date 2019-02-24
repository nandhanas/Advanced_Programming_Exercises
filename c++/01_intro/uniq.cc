#include<iostream>
#include<string>
#include <unordered_map> 
using namespace std;

int main()
{
	string line;
	unordered_map<string,int> frequency;
	while(getline(cin,line))
	{
		if(frequency.find(line) != frequency.end())
			frequency[line]++;
		else
			frequency.insert({line,1});
	}
	cout << "The lines with their frequency"<<endl;
	for (auto x : frequency) 
      cout << x.first << " " << x.second << endl;

}

/*
	Here using for or while doesn't make a difference as we dont know when the input will end if we use the command line.
	 Hence we can use anyone depending on the plac and condition we are using

*/