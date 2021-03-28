#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int* masMax=new int[5];
	int Size = 5;
	int** mas = new int* [5];
	for (int i = 0; i < Size; i++)
	{
		mas[i] = new int[Size];
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			mas[i][j] = rand() % 10;
			cout << mas[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";
	int k = 0;
	masMax[k] = mas[0][0];
	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 5-1; i++)
		{
			
			if ( masMax[k]<mas[i][j+1])
			{
				masMax[k] = mas[i][j + 1];
			}
		}
	}

	//i номер в массиве указателе о в массиве знач(i -строка j-столбец)
	return 0;
}