#include <iostream>
using namespace std;

int main()
{
	float Z, dobchik, y;
	cout << "Input y\ny=";
	cin >> y;
	dobchik = 1;
	if (pow(y, 3) + 3 == 0)
	{
		Sleep(1000);
		cout << "error";
	}
	else
	{
		for (int n = 1; n <= 10; n++)
		{
			dobchik *= pow(n, 3);
		}
		Z = (sin(y) + dobchik + 2) / (pow(y, 3) + 3);
		Sleep(1000);
		cout << "Z=" << Z;
	}
}