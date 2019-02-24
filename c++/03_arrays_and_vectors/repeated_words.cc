#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>

using namespace std;

int main()
{
	string word;
	vector<string> words;
	ifstream infile("LittleWomen.txt");
	while(infile>>word)
	{
		word.erase(remove_if (word.begin (), word.end (), ::ispunct), word.end ());
		words.push_back(word);
	}
	sort(words.begin(), words.end());
	words.erase(unique(words.begin(),words.end()),words.end());
	for(int i=0; i<words.size(); i++)
    {
    	cout<<words[i]<<endl;
    }  
	return 0;
}