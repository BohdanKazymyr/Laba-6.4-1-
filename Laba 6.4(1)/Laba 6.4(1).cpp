#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		a[i] = rand() %100 -15 ;
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		if (i ==0)
			cout << 0 << ' ';
		else
			cout << a[i] << " ";
}
int Min(int* a, const int size)
{
	int min = abs(a[1]);
	for (int i = 1; i < size; i++)
		if (abs(a[i]) < min)
			min = abs(a[i]);
	return min;
}
int Sum(int* a, const int size)
{
	int sum = 0;
	for (int i = 1; i < size; i++)
			sum += abs(a[i]);
	return sum;
}
void foo(int size, int a[])
{

	for (int i = 0; i < size; i++)
	{
		a[0] = 0;
		if (i == 0)
			cout << a[1] << " ";
		if (i % 2 == 0)
			cout << a[i + 1] << ' ';
		if (i % 2 != 0)
			cout << a[i - 1] << " ";
	}

}
int main()
{
	srand((unsigned)time(NULL));
	int size;
	cout << "size = "; cin >> size;
	int* a = new int[size];
	int i = 0;
	Create(a, size);
	Print(a, size);
	cout << endl;
	cout << "Min = " << Min(a, size) << endl;
	cout << "S = " << Sum(a, size) << endl;
	foo(size, a);
	delete[] a;
	return 0;
}