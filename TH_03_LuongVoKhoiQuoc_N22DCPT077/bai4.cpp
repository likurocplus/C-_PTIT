

#include <iostream>
#include <string>

using namespace std;

class Car
{
	public:
		Car();
		~Car();
		
		void show();
		void showTravelers_List();
		
		string getBrand();
		float getWeight();
		int getSeats();
		int getTravelers();
		
		void setBrand(string);
		void setWeight(float);
		void setSeats(int);
		void setTravelers(int);

	private:
		string brand;
		float weight;
		int seats;
		int travelers;
		string* travelers_List;

};

Car::Car()
{
	brand = "N/A";
	weight = 0;
	seats = 0;
	travelers = 0;
}

Car::~Car()
{
	delete [] travelers_List;
}

void Car::show()
{
	cout << brand << " - " << weight << " kg - " << seats << " seats." << endl;
	showTravelers_List();
}

void Car::showTravelers_List()
{
	for (int i = 0; i < travelers; i++)
	{
		cout << "Id of traveler " << i << ": " << travelers_List[i] << endl;
	}
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

int Car::getTravelers()
{
	return travelers;
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

void Car::setTravelers(int n)
{
	travelers = n;
	travelers_List = new string[travelers];
	
	for (int i = 0; i < n; i++)
	{
		cout << "Id of traveler " << i << ": ";
		cin >> travelers_List[i];
	}
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
		
		intInput = 0;
		while (intInput <= 0)
		{
			cout << "Enter number of travelers: ";
			cin >> intInput;
		}
		cars[i].setTravelers(intInput);
	}

	for (int i = 0; i < n; i++)
	{
		cars[i].show();
	}

	delete [] cars;
	return 0;
}
