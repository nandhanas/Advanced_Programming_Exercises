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
		cout<< value * 0.0254<< "inch"<<endl;	
	}
	else if(unit == "dm")
	{
		cout<< value/10 << "dm"<<endl;
	}
	else if(unit == "cm")
	{
		cout<< value/100 << "cm"<<endl;
	}
	else if(unit == "mm")
	{
		cout<< value/1000 << "mm"<<endl;
	}
	else if(unit == "dam")
	{
		cout<< value*10 << "dam"<<endl;
	}
	else if(unit == "hm")
	{
		cout<< value*100 << "hm"<<endl;
	}
	else if(unit == "km")
	{
		cout<< value*1000 << "km"<<endl;
	}
	else if(unit == "foot")
	{
		cout<< value/3.2808 << "foot"<<endl;
	}
	else if(unit == "mile")
	{
		cout<< value*1609.34 << "mile"<<endl;
	}
	else if(unit == "yard")
	{
		cout<< value/0.9144 << "yard"<<endl;
	}
	else if(unit == "m")
	{
		cout<< value << "m"<<endl;
	}
	else
	{
		cout<<"This type conversion is not supported";
	}
}