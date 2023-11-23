// Vo Trung Kien
// N22DCPT046
// D22CQPT01-N

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

int Input();
int Output(int n);
int SoDao(int n);
bool SoDoiXung(int n, int reverse_n);
bool SoChinhPhuong(int n);
bool SoNguyenTo(int n);
int TongSoLe(int n);
int TongSoNguyenTo(int n);
int TongSoChinhPhuong(int n);
bool SoHoanChinh(int n);
bool SoArmstrong(int n);

int main()
{
	int n = Input();
	Output(n);
	
	return 0;
}

int Input()
{
	cout << "a) So dao cua n" << endl;
	cout << "b) Kiem tra n co phai so doi xung" << endl;
	cout << "c) Kiem tra n co phai so chinh phuong" << endl;
	cout << "d) Kiem tra n co phai so nguyen to" << endl;
	cout << "e) Tong cac chu so le" << endl;
	cout << "f) Tong cac chu so nguyen to" << endl;
	cout << "g) Tong cac chu so chinh phuong" << endl;
	cout << "h) Kiem tra n co phai so hoan chinh" << endl;
	cout << "f) Kiem tra n co phai so Armstrong" << endl;

	int n;
	while (true)
	{
		cin >> n;

		if (n > 0)
		{
			break;
		}
		else
		{
			cout << "n khong hop le. Xin moi nhap lai: " << endl;
		}
	}
	return n;
}

void Output(int n)
{
	cout << "a) S1 = " << SoDao(n) << endl;

	if(SoDoiXung(n, SoDao(n)))
	{
		cout << "b) n la so doi xung" << endl;
	}
	else
	{
		cout << "b) n khong phai la so doi xung" << endl;
	}

	if(SoChinhPhuong(n))
	{
		cout << "c) n la so chinh phuong" << endl;
	}
	else
	{
		cout << "c) n khong phai la so chinh phuong" << endl;
	}

	if(SoNguyenTo(n))
	{
		cout << "d) n la so nguyen to" << endl;
	}
	else
	{
		cout << "d) n khong phai la so nguyen to" << endl;
	}

	cout << "e) Tong so le = " << TongSoLe(n) << endl;

	cout << "f) Tong so nguyen to = " << TongSoNguyenTo(n) << endl;

	cout << "g) Tong so chinh phuong = " << TongSoChinhPhuong(n) << endl;

	if(SoHoanChinh(n))
	{
		cout << "h) n la so hoan chinh" << endl;
	}
	else
	{
		cout << "h) n khong phai la so hoan chinh" << endl;
	}

	if(SoArmstrong(n))
	{
		cout << "i) n la so Armstrong" << endl;
	}
	else
	{
		cout << "i) n khong phai la so Armstrong" << endl;
	}
}

int SoDao(int n)
{
	stringstream ss;
	ss << n;
	string str = ss.str();
	int l = 0;
	int r = str.length() - 1;
	while (l < r)
	{
		char temp;
		temp = str[l];
		str[l] = str[r];
		str[r] = temp;
		l++;
		r--;
	}
	return stoi(str);
}

bool SoDoiXung(int n, int reverse_n)
{
	if (n == reverse_n)
	{
		return true;
	}
	
	return false;
}

bool SoChinhPhuong(int n)
{
	if (static_cast<float>(sqrt(n)) == static_cast<int>(sqrt(n)))
	{
		return true;
	}
	
	return false;
}

bool SoNguyenTo(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) return false;
	}
	
	return true;
}

int TongSoLe(int n)
{
	int result = 0;
	for (int i = 1; i <=n; i++)
	{
		if (i % 2 != 0)
		{
			result += i;
		}
	}
	return result;
}

int TongSoNguyenTo(int n)
{
	int result = 0;
	for (int i = 2; i <= n; i++)
	{
		if (SoNguyenTo(i))
		{
			result += i;
		}
	}
	return result;
}

int TongSoChinhPhuong(int n)
{
	int result = 0;
	for (int i = 1; i <= n; i++)
	{
		if (SoChinhPhuong(i))
		{
			result += i;
		}
	}
	
	return result;
}

bool SoHoanChinh(int n)
{
	int result = 0;
	int temp = n;
	while(temp != 0)
	{
		result += temp % 10;
		temp /= 10;
	}
	
	if (result == n)
	{
		return true;
	}
	return false;
}

bool SoArmstrong(int n)
{
	int result = 0;
	int temp = n;
	while (temp != 0)
	{
		result += (temp % 10) * (temp % 10) * (temp % 10);
		temp /= 10;
	}
	
	if (result == n)
	{
		return true;
	}
	return false;
}

