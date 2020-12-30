#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
int Sum(int mas[], const int n);
int Kil(int mas[], const int n);
int main()
{
	const int n = 23;
	int r[n]{};
	srand(time(NULL));
	for (int i = 0; i < 23; i++)
	{
		r[i] = rand() % 45 - 19;
	}
	cout << endl << "mas from -19 to 25: ";
	for (int i = 0; i < 23; i++)
	{
		cout << r[i] << "  ";
	}
	cout << endl;
	cout << "Suma = " << Sum(r, n - 1) << endl;
	cout << "Kilkist = " << Kil(r, n - 22) << endl;
}
int Sum(int mas[], const int i)
{
	if(mas[i] % 4 != 0 && mas[i] > 0)
	{
		if (i == 0)
			return mas[i];
		else
			return mas[i] + Sum(mas, i - 1);
	}
}
int Kil(int mas[], const int i)
{
	if (mas[i] % 4 != 0 && mas[i] > 0)
	{
		if (i == 0)
			return i;
		else
			return i +Kil(mas,i-23) ;
	}
}

