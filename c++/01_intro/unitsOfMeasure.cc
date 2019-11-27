#include<iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string unit,word;
	cout<< "Enter length with a unit"<<endl;
	getline(cin,unit);
	stringstream ss(unit);
	ss>>word;
	float value = stoi(word);
	ss>>word;
	unit = word;
	if (unit == "inch")
	{
		cout<< value * 0.0254<< "m"<<endl;
	}
	else if(unit == "dm")
	{
		cout<< value/10 << "m"<<endl;
	}
	else if(unit == "cm")
	{
		cout<< value/100 << "m"<<endl;
	}
	else if(unit == "mm")
	{
		cout<< value/1000 << "m"<<endl;
	}
	else if(unit == "dam")
	{
		cout<< value*10 << "m"<<endl;
	}
	else if(unit == "hm")
	{
		cout<< value*100 << "m"<<endl;
	}
	else if(unit == "km")
	{
		cout<< value*1000 << "m"<<endl;
	}
	else if(unit == "foot")
	{
		cout<< value/3.2808 << "m"<<endl;
	}
	else if(unit == "mile")
	{
		cout<< value*1609.34 << "m"<<endl;
	}
	else if(unit == "yard")
	{
		cout<< value/0.9144 << "m"<<endl;
	}
	else if(unit == "m")
	{
		cout<< value << "m"<<endl;
	}
	else
	{
		cout<<"This type conversion is not supported"<<endl;
	}
}
