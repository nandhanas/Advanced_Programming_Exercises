//Exercise 1 & 2 (Date class and Helper functions)
#include<iostream>
using namespace std;

class Date {

	public:
		int d, m, y; //made as public to use them in helper functions
		enum class month { jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };
	    Date(const int day, const int month, const int year)
	        : d{day}, m{month}, y{year} {}
	    int day() const noexcept { return d; }
	    int month() const noexcept { return m; }
	    int year() const noexcept { return y; }
	    int add_days(const unsigned int n);

};

int Date::add_days(const unsigned int n)
{
	int monthdays[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int addyears;
	int leftoverdays;
	addyears = n/365;
	leftoverdays = n%365;
	this->y += addyears;
	for(int i=0; i<leftoverdays; i++)
	{
		if(this->d < monthdays[this->m-1])
			this->d++;
		else if ((this->d == monthdays[this->m-1]) && (this->m <12))
		{
			this->d = 1;
			this->m++;
		}
		else if ((this->d == monthdays[this->m-1]) && (this->m == 12))
		{
			this->d = 1;
			this->m = 1;
			this->y++;
		}
	}
	cout<<this->d<<"-"<<this->m<<"-"<<this->y<<endl;
	return n;
}

bool operator==(const Date& lhs, const Date& rhs)
{
	if((lhs.y == rhs.y) && (lhs.m == rhs.m) && (lhs.d == rhs.d))
		return true;
	else
		return false;
}

bool operator!=(const Date& lhs, const Date& rhs)
{
	if((lhs.y == rhs.y) && (lhs.m == rhs.m) && (lhs.d == rhs.d))
		return false;
	else
		return true;
}

bool is_leap(const int y)
{
	if (((y % 4 == 0) && !(y % 100 == 0))|| (y % 400 == 0))
		return true;
	else
		return false;
}
ostream& operator<<(ostream& os, const Date& d)
{
	os<<d.d<<"-"<<d.m<<"-"<<d.y;
	return os;
}

int main()
{
	Date d1(28,int(Date::month::dec),2018);
	d1.add_days(5);
	Date d2(28,int(Date::month::feb),2018);
	d2.add_days(5);
	Date d3(2,int(Date::month::jan),2018);
	d3.add_days(5);
	Date lhs(28,int(Date::month::dec),2018);
	Date rhs(28,int(Date::month::dec),2018);
	cout<<"If the dates "<<lhs<<" and "<<rhs<<" are equal: "<<(lhs==rhs)<<endl;
	cout<<"If the dates "<<lhs<<" and "<<d2<<" are equal:"<<(lhs==d2)<<endl;
	cout<<"If the dates "<<lhs<<" and "<<d2<<" are not equal:"<<(lhs!=d2)<<endl;
	cout<<"If the dates "<<lhs<<" and "<<rhs<<" are not equal:"<<(lhs!=rhs)<<endl;
	if(is_leap(2016))
		cout<<"2016 is a leap year"<<endl;
	else
		cout<<"2016 is not a leap year"<<endl;
	if(is_leap(2018))
		cout<<"2018 is a leap year"<<endl;
	else
		cout<<"2018 is not a leap year"<<endl;
	return 0;
}
