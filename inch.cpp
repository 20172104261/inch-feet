// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
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
	cout << "英尺" << feet << "英寸" << inch << endl;
}

int main()
{
	CLeanghE o;
	double shu;
	double mi;
	cout << "输入英尺或英寸" << endl;
	cin >> shu;
	o.import(shu);
	o.suani();
	o.display();
	o.suanf();
	o.display();
	cout << "输入米" << endl;
	cin >> mi;
	shu = mi * 3.2808399;
	o.import(shu);
	o.suanf();
	o.display();
	cout << "输入英尺或英寸" << endl;
	double shu2;
	cin >> shu2;
	CLeanghE oo;
	oo.import(shu2);
	oo.suanf();
	cout << "英尺" << o.displayf() + oo.displayf() << "英寸" << o.displayi() + oo.displayi() << endl;
	oo.suani();
	cout << "英尺" << o.displayf() + oo.displayf() << "英寸" << o.displayi() + oo.displayi() << endl;
	return 0;
}