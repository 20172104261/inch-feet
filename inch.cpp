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
	double import(double a, double b);
	void display();
	void suani();
	void suanf();
	int displayf();
	double displayi();
	double huansuan(double a);
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
}

int CLeanghE::displayf()
{
	return feet;
}

double CLeanghE::displayi()
{
	return inch;
}

double CLeanghE::import(double a, double b)
{
	manth = a + b / 12;
	return manth;
}

void CLeanghE::display()
{
	cout << feet << "英尺" << inch << "英寸" << endl;
}

double CLeanghE::huansuan(double a)
{
	manth = a * 3.2808399;
	return manth;
}

int main()
{
	CLeanghE o;
	double shu;
	char a[3];
	cout << "输入英尺或英寸(如15ft或15in）" << endl;
	cin >> shu >> a;
	if (a[0] == 'f')
	{
		o.import(shu);
		o.suanf();
		o.display();
	}
	else
	{
		o.import(shu);
		o.suani();
		o.display();
	}
	double mi;
	cout << "输入米或厘米（如15m或15cm）" << endl;
	cin >> mi >> a;
	if (a[0] == 'm')
	{
		o.huansuan(mi);
		o.suanf();
		o.display();
	}
	else
	{
		mi /= 100;
		o.huansuan(mi);
		o.suanf();
		o.display();
	}
	double feet1;
	double inch1;
	cout << "输入英尺和英寸以空格做分割" << endl;
	cin >> feet1 >> inch1;
	o.import(feet1, inch1);
	o.suanf();
	o.display();
	double mi1;
	double cm1;
	cout << "输入米和毫米以空格做分割" << endl;
	cin >> mi1 >> cm1;
	mi1 += cm1 / 100;
	o.huansuan(mi1);
	o.suanf();
	o.display();
	cout << "输入英尺和英寸以空格做分割" << endl;
	cin >> feet1 >> inch1;
	cout << "在输入米和毫米以空格做分割" << endl;
	cin >> mi1 >> cm1;
	mi1 += cm1 / 100;
	shu = o.huansuan(mi1) + o.import(feet1, inch1);
	o.import(shu);
	o.suanf();
	o.display();
	return 0;
}