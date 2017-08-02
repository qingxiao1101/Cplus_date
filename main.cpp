#include <iostream>
#include <string>
using namespace std;

class Date{
	int d,m,y;
	
public:
	static Date default_date;
	static void set_default(int dd,int mm,int yy);
	Date(int dd, int mm, int yy);
	Date& add_day(int n);
	Date& add_month(int n);
	Date& add_year(int n);
	int read_day() const;
	int read_month() const;
	int read_year() const;
	void print_date(void);
};
Date Date::default_date(15,06,1994);

Date::Date(int dd, int mm, int yy)
{
	d = dd ? dd : default_date.d;
	m = mm ? mm : default_date.m;
	y = yy ? yy : default_date.y;
}

void set_default(int dd, int mm, int yy)
{
	Date::default_date = Date(dd,mm,yy);
}

Date& Date::add_day(int n) 
{
	d = d + n;
	return *this;
}
Date& Date::add_month(int n)
{
	m = m + n;
	return *this;
}
Date& Date::add_year(int n)
{
	y = y + n;
	return *this;
}
int Date::read_day() const
{
	return d;
}
int Date::read_month() const
{
	return m;
}
int Date::read_year() const
{
	return y;
}
void Date::print_date(void)
{
	cout << Date::d <<"," << Date::m << ","<<Date::y <<endl;
}

int main()
{
	Date test(0,0,0);
	cout << test.read_day() << endl;
	test.print_date();
	return 0;
}