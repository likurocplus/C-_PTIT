
#include <iostream>
#include <cmath>

using namespace std;

class ptb2
{
	private:
		float a, b, c;
		float delta;
		
	public:
		ptb2();
		void seta(float);
		void setb(float);
		void setc(float);
		float geta();
		float getb();
		float getc();
		void giaipt();
};

ptb2::ptb2()
{
	a = 0;
	b = 0;
	c = 0;
	delta = 0;
}

void ptb2::seta(float fl)
{
	a = fl;
}

void ptb2::setb(float fl)
{
	b = fl;
}

void ptb2::setc(float fl)
{
	c = fl;
}

float ptb2::geta()
{
	return a;
}

float ptb2::getb()
{
	return b;
}

float ptb2::getc()
{
	return c;
}

void ptb2::giaipt()
{
	delta = (float) (b*b - 4*a*c);
	if(delta < 0)
	{
		cout << "Phuong trinh vo nghiem" << endl;
	}
	else if(delta == 0)
	{
		cout << "Phuong trinh co nghiem kep x1 = x2 = " << (float) -b/(2*a) << endl;
	}
	else{
		delta = (float) sqrt(delta);

		cout << "Phuong trinh co 2 nghiem phan biet: " << endl;
		cout << "x1 = " << (float) ((-b + delta) / (2*a)) << endl;
		cout << "x2 = " << (float) ((-b - delta) / (2*a));
	}
}

int main()
{
	ptb2 pt;
	float flInput;
	
	cout << "Nhap a: ";
	cin >> flInput;
	pt.seta(flInput);
	
	cout << "Nhap b: ";
	cin >> flInput;
	pt.setb(flInput);
	
	cout << "Nhap c: ";
	cin >> flInput;
	pt.setc(flInput);
	
	pt.giaipt();
	return 0;
}
