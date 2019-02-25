#include<iostream>
using namespace std;

void get_int()
{
	int a;
	cout<<"Enter an integer"<<endl;
	while(!(cin>>a)) {
		cin.clear();
		cin.ignore();
	}
}
void get_double()
{
	double a;
	cout<<"Enter a double"<<endl;
	while(!(cin>>a)) {
		cin.clear();
		cin.ignore();
	}
}
int main()
{
	get_int();
	get_double();

}