#include <iostream>
using namespace std;

//#define FOR_BEASICS
void main()

{
	setlocale(LC_ALL, "");

#ifdef FOR_BEASICS
	int n; // ���������� ��������
	cout << "������� ���������� ��������:"; cin >> n;
	for (int i = 0;
		i < n;
		i++)
	{
		cout << i << "\t";
	}
	cout << endl;

#endif // FOR_BEASICS

	long long int f = 1; // ��������� �����, ���������� � ���������
	int n;
	cout << "������� �����:"; cin >> n;
	for (int i= 1; i <=n; i++)
	{
		cout << i << "! =";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
}