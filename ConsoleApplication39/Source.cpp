#include <iostream>
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

using namespace std;
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	
}
int main (void)
{
	setlocale(LC_ALL, "rus");
	int i, j;
	i = 10;
	j = 20;
	cout << "i � j ���� ������� ���������� : " << i << " "<<j << endl;
	swap(&i, &j);
	cout << "i � j ����� ������� ���������� :  " << i << " "<< j << endl;
	return 0;
	
}

