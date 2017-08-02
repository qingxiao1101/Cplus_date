#include <iostream>
#include <string>
using namespace std;

class Date{
	int d,m,y;
	const int a;
public:
	static int b;
	Date(int dd, int mm, int yy);
	void add_day(int n);
	void add_month(int n);
	void add_year(int n);
};
Date::Date(int dd, int mm, int yy)
: a(10)
{
	d = dd;
	m = mm;
	y = yy;
}
int Date::b = 10;

void Date::add_day(int n) 
{
	d = d + n;
}
void Date::add_month(int n)
{
	m = m + n;
}
void Date::add_year(int n)
{
	y = y + n;
}

int main()
{
	Date test(16,12,2017);
	return 0;
}