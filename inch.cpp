// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"
using namespace std;

class CLeanghE
{

public:
	double manth;
	void import(double a);
	void zhi(double a, double b);
	void display();
	void suani();
	void suanf();
	int displayf();
	double displayi();
private:
	int feet;
	double inch;
};

void CLeanghE::import(double a)
{
	manth = a;
}

void CLeanghE::suani()
{
	feet = manth / 12;
	inch = manth - feet * 12;
	if (inch >= 12)
	{
		void jinjie();
	}

}

void CLeanghE::suanf()
{
	int a = manth;
	if (a == manth)
	{
		feet = manth;
		inch = 0;
	}
	else
	{
		feet = manth;
		inch = (manth - feet) * 12;
	}
	if (inch >= 12)
	{
		void jinjie();
	}

}

int CLeanghE::displayf()
{
	return feet;
}

double CLeanghE::displayi()
{
	return inch;
}

void CLeanghE::zhi(double a, double b)
{
	feet = a;
	inch = b;
}

void CLeanghE::display()
{
	cout << "Ӣ��" << feet << "Ӣ��" << inch << endl;
}

int main()
{
	CLeanghE o;
	double shu;
	double mi;
	cout << "����Ӣ�߻�Ӣ��" << endl;
	cin >> shu;
	o.import(shu);
	o.suani();
	o.display();
	o.suanf();
	o.display();
	cout << "������" << endl;
	cin >> mi;
	shu = mi * 3.2808399;
	o.import(shu);
	o.suanf();
	o.display();
	cout << "����Ӣ�߻�Ӣ��" << endl;
	double shu2;
	cin >> shu2;
	CLeanghE oo;
	oo.import(shu2);
	oo.suanf();
	cout << "Ӣ��" << o.displayf() + oo.displayf() << "Ӣ��" << o.displayi() + oo.displayi() << endl;
	oo.suani();
	cout << "Ӣ��" << o.displayf() + oo.displayf() << "Ӣ��" << o.displayi() + oo.displayi() << endl;
	return 0;
}