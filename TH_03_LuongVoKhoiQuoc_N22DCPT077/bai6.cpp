
#include <iostream>

using namespace std;

class hinhchunhat
{
	private:
		float dai;
		float rong;
		
	public:
		hinhchunhat();
		void setWidth(float);
		void setLength(float);
		float getWidth();
		float getLength();
		void dientich();
		void chuvi();
};

hinhchunhat::hinhchunhat()
{
	dai = -1;
	rong = -1;
}

void hinhchunhat::setLength(float fl)
{
	dai = fl;
}

void hinhchunhat::setWidth(float fl)
{
	rong = fl;
}

float hinhchunhat::getLength()
{
	return dai;
}

float hinhchunhat::getWidth()
{
	return rong;
}

void hinhchunhat::chuvi()
{
	cout << "Chu vi: " << (float) 2*(dai + rong) << endl;
}

void hinhchunhat::dientich()
{
	cout << "Dien tich: " << (float) dai * rong << endl;
}

int main()
{
	int n = 0;
	while (n <= 0)
	{
		cout << "Nhap so hinh chu nhat: ";
		cin >> n;
	}
	
	hinhchunhat *hcn = new hinhchunhat[n];
	float flInput;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin hinh chu nhat " << i + 1 << ":" << endl;
		
		cout << "Nhap chieu dai: ";
		cin >> flInput;
		hcn[i].setLength(flInput);
		
		cout << "Nhap chieu rong: ";
		cin >> flInput;
		hcn[i].setWidth(flInput);
		
		cout << endl;
		
		if (hcn[i].getWidth() > 0 && hcn[i].getLength() > 0)
		{
			hcn[i].chuvi();
			hcn[i].dientich();
		}
		else
		{
			cout << "Chieu dai hoac/va chieu rong khong hop le.";
		}

		cout << endl;
	}
	
	delete [] hcn;
	return 0;
}
