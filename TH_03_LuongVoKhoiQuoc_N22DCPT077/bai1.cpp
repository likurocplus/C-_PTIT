
#include <iostream>
#include <string>

using namespace std;

class Car
{
	public:
		Car();
		string brand;
		float weight;
		int seats;
		void show();
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

int main()
{
	Car car1, car2, car3;

	cout << "Input for car 1: " << endl;
	cout << "Brand: ";
	cin.ignore();
	getline(cin, car1.brand);
	cout << "Weight: ";
	cin >> car1.weight;
	cout << "Seats: ";
	cin >> car1.seats;
	
	cout << "Input for car 2: " << endl;
	cout << "Brand: ";
	cin.ignore();
	getline(cin, car2.brand);
	cout << "Weight: ";
	cin >> car2.weight;
	cout << "Seats: ";
	cin >> car2.seats;
	
	cout << "Input for car 3: " << endl;
	cout << "Brand: ";
	cin.ignore();
	getline(cin, car3.brand);
	cout << "Weight: ";
	cin >> car3.weight;
	cout << "Seats: ";
	cin >> car3.seats;
	
	car1.show();
	car2.show();
	car3.show();
	
	return 0;
}
