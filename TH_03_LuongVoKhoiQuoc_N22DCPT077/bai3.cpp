
#include <iostream>
#include <string>

using namespace std;

class Car
{
	public:
		Car();
		void show();
		string getBrand();
		float getWeight();
		int getSeats();
		void setBrand(string);
		void setWeight(float);
		void setSeats(int);

	private:
		string brand;
		float weight;
		int seats;

};

Car::Car()
{
	brand = "N/A";
	weight = 0;
	seats = 0;
}

void Car::show()
{
	cout << brand << " - " << weight << " kg - " << seats << " seats." << endl;
}

string Car::getBrand()
{
	return brand;
}

float Car::getWeight()
{
	return weight;
}

int Car::getSeats()
{
	return seats;
}

void Car::setBrand(string b)
{
	brand = b;
}

void Car::setWeight(float w)
{
	weight = w;
}

void Car::setSeats(int s)
{
	seats = s;
}

int main()
{
	int n = 0;
	while ( n <= 0)
	{
		cout << "Nhap so luong xe: ";
		cin >> n;
	}
	Car* cars = new Car[n];
	int intInput;
	float flInput;
	string strInput;
	
	for (int i = 0; i < n; i++)
	{
		cout << "Input for car " << i + 1 << ":" << endl;
		cout << "Brand: ";
		cin.ignore();
		getline(cin, strInput);
		cars[i].setBrand(strInput);
		cout << "Weight: ";
		cin >> flInput;
		cars[i].setWeight(flInput);
		cout << "Seats: ";
		cin >> intInput;
		cars[i].setSeats(intInput);
	}

	for (int i = 0; i < n; i++)
	{
		cars[i].show();
	}

	delete [] cars;
	return 0;
}
