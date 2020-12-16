#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
int Sum(int mas[], const int i);
int main()
{
	const int i = 23;
	int r[i]{};
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
	cout << "S = " << Sum(r, i-1) << endl;
}
int Sum(int mas[], const int i)
{
	if(mas[i] % 4 != 0){
		if (i == 0)
			return mas[i];
		else
			return mas[i] + Sum(mas, i - 1);
	}
}

