
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
	Car car1, car2, car3;
	int intInput;
	float flInput;
	string strInput;

	cout << "Input for car 1: " << endl;
	cout << "Brand: ";
	getline(cin, strInput);
	car1.setBrand(strInput);
	cout << "Weight: ";
	cin >> flInput;
	car1.setWeight(flInput);
	cout << "Seats: ";
	cin >> intInput;
	car1.setSeats(intInput);

	cout << "Input for car 2: " << endl;
	cout << "Brand: ";
	cin.ignore();
	getline(cin, strInput);
	car2.setBrand(strInput);
	cout << "Weight: ";
	cin >> flInput;
	car2.setWeight(flInput);
	cout << "Seats: ";
	cin >> intInput;
	car2.setSeats(intInput);

	cout << "Input for car 3: " << endl;
	cout << "Brand: ";
	cin.ignore();
	getline(cin, strInput);
	car3.setBrand(strInput);
	cout << "Weight: ";
	cin >> flInput;
	car3.setWeight(flInput);
	cout << "Seats: ";
	cin >> intInput;
	car3.setSeats(intInput);

	car1.show();
	car2.show();
	car3.show();

	return 0;
}
