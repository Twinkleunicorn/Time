#include<iostream>
using namespace std;


class time_
{
	int *h;
	int *m;
	int *s;
public:

	time_(int a = 0, int b = 0, int c = 0)
	{
		h = new int;
		m = new int;
		s = new int;
		set_h(a);
		set_m(b);
		set_s(c);
	}
	~time_()
	{
		delete h;
		delete m;
		delete s;
	}

	void set_h(int a)
	{
		if (a>=24)
		{
			a = 0;
		}
		*h = a;
	}
	void set_m(int a = 0)
	{
		if (a >= 60)
		{
			a = 0;
		}
		*m = a;
	}
	void set_s(int a = 0)
	{
		if (a >= 60)
		{
			a = 0;
		}
		*s = a;
	}
	int get_h()
	{
		return *h;
	}
	int get_m()
	{
		return *m;
	}
	int get_s()
	{
		return *s;
	}

};

void main()
{
	time_ t(15, 25, 3);
	cout << t.get_h();
	system("pause");

}