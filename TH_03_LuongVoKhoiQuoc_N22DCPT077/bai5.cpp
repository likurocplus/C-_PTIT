

#include <iostream>
#include <string>

using namespace std;

class Thisinh
{
	private:
		string hoten;
		int somonthi;
		float *diem;
		float trungbinh;
	public:
		Thisinh();
		~Thisinh();
		void setHoten(string);
		void setSomonthi(int);
		string getHoTen();
		int getSoMonthi();
		float getTrungbinh();
		void tinh_tb();
		void show();
		bool have_zero_point();
};

Thisinh::Thisinh()
{
	hoten = "N/A";
	somonthi = 0;
	trungbinh = 0;
}

Thisinh::~Thisinh()
{
	delete [] diem;
}

void Thisinh::setHoten(string s)
{
	hoten = s;
}

void Thisinh::setSomonthi(int n)
{
	somonthi = n;
	diem = new float[somonthi];
	
	for (int i = 0; i < somonthi; i++)
	{
		cout << "Nhap diem " << i + 1 << ": ";
		cin >> diem[i];
	}
	
	tinh_tb();
}

string Thisinh::getHoTen()
{
	return hoten;
}

int Thisinh::getSoMonthi()
{
	return somonthi;
}

float Thisinh::getTrungbinh()
{
	return trungbinh;
}

void Thisinh::tinh_tb()
{
	float tongDiem = 0;
	for (int i = 0; i < somonthi; i++)
	{
		tongDiem += diem[i];
	}
	trungbinh = (float) tongDiem / somonthi;
}

bool Thisinh::have_zero_point()
{
	for (int i = 0; i < somonthi; i++)
	{
		if (diem[i] <= 0)
		{
			return true;
		}
	}
	return false;
}

void Thisinh::show()
{
	cout << "Ho va ten: " << hoten << endl;
	cout << "So mon thi: " << somonthi << endl;
	cout << "Diem tung mon: "<< endl;
	for (int i = 0; i < somonthi; i++)
	{
		cout << "Diem mon " << i+1 << ": " << diem[i] << endl;
	}
	
	cout << "Diem trung binh: " << trungbinh << endl;
	cout << endl;
}

int main()
{
	int n = 0;
	while (n <= 0)
	{
		cout << "Nhap so luong thi sinh: ";
		cin >> n;
	}
	
	Thisinh *thisinh = new Thisinh[n];
	
	string strInput;
	int intInput;
	
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin thi sinh " << i+1 << ": " << endl;
		
		cout << "Nhap ho ten: ";
		cin.ignore();
		getline(cin, strInput);
		thisinh[i].setHoten(strInput);
		
		cout << "Nhap so mon thi va diem tung mon: ";
		cin >> intInput;
		thisinh[i].setSomonthi(intInput);
	}
	
	cout << "Danh sach thi sinh trung tuyen:" << endl;
	for (int i = 0; i < n; i++)
	{
		if (thisinh[i].getTrungbinh() >= 5 && !thisinh[i].have_zero_point())
		{
			thisinh[i].show();
		}
	}
	
	delete [] thisinh;
	return 0;
}
