
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class diem
{
	private:
		string name;
		float x, y;

	public:
		diem();
		void setName(string);
		void setX(float);
		void setY(float);
		string getName();
		int getX();
		int getY();
		float distance(diem&);
		void show();
};

diem::diem()
{
	name = "N/A";
	x = 0;
	y = 0;
}

void diem::setName(string str)
{
	name = str;
}

void diem::setX(float i)
{
	x = i;
}

void diem::setY(float i)
{
	y = i;
}

string diem::getName()
{
	return name;
}

int diem::getX()
{
	return x;
}

int diem::getY()
{
	return y;
}

float diem::distance(diem &point)
{
	return (float) sqrt(pow((point.x - x), 2) + pow((point.y - y), 2));
}

void diem::show()
{
	cout << name << "(" << x << " , " << y << ")" << endl;
}

int main()
{
	int n = 0;
	while (n <= 0)
	{
		cout << "Nhap so diem trong khong gian: ";
		cin >> n;
	}
	
	string strInput;
	int flInput;
	diem *diems = new diem[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap ten diem " << i+1 << ": ";
		cin >> strInput;
		diems[i].setName(strInput);
		
		cout << "Nhap toa do x: ";
		cin >> flInput;
		diems[i].setX(flInput);
		
		cout << "Nhap toa do y: ";
		cin >> flInput;
		diems[i].setY(flInput);
	}
	
	float centroidX = 0;
    float centroidY = 0;

    for (int i = 0; i < n; i++)
    {
        centroidX += diems[i].getX();
        centroidY += diems[i].getY();
    }

    centroidX /= (float)n;
    centroidY /= (float)n;

    diem centroidPoint;
    centroidPoint.setName("G");
    centroidPoint.setX(centroidX);
    centroidPoint.setY(centroidY);

    cout << "Diem trong tam la: ";
    centroidPoint.show();
    
    delete [] diems;
	return 0;
}
