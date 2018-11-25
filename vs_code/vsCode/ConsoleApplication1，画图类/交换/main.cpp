/*void swap(int &x, int &y)
{
	int tmp = x;
	x = y;
	y = tmp;
}
void sort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = n - 1; j >i; j--)
		{
			if (a[j] < a[j - 1])
				swap(a[j], a[j - 1]);
		}
	}
}

void swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void sort(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j++)
		{
			if (*(a + j) < *(a + j - 1))
				swap(a + j, a + j - 1);
		}
	}
}*/

#include<iostream>
using namespace std;
int main()
{
	int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int *p = a[0];
	cout << a << endl;
	cout << p;
	int *q = &a[0][0];
	cout << q << endl;
	int(*m)[4] = a;
	cout << m << endl;
	int **x;
	
	x = new int*[3];
	for (int i = 0; i < 3; i++)
	{
		x[i] = new int[5];
		for (int j = 0; j < 5; j++)
		{
			x[i][j] = i * 10 + j;
			cout << x[i][j] << ' ';
		}
		cout << endl;
	}
	for (int i = 0; i < 3; i++)
	{
		delete []x[i];
	}
	delete []x;
	system("pause");
	return 0;
}


//电话簿
/*
#include<iostream>
#include<iomanip>
using namespace std;
void swap(char *&a, char *&b)
{
	char *tmp = a;
	a = b;
	b = tmp;
}
void sort(char *name[], char*tele[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (strcmp(name[j], name[j - 1]) < 0)
			{
				swap(name[j], name[j - 1]);
				swap(tele[j], tele[j - 1]);
			}
		}
	}
}
void main()
{
	const int n = 5; 
	char* tele[n] = { "99882345","12345678",
		"26532347", "86861232","39070909" };
	char* name[n] = { "Zhaolin", "Liguoping", "Mazhigang", "Sunyingming", "Mazilan" };
	cout << setw(15) << "NAME" << setw(15) << "TELE NO";
	sort(name, tele, n);
	for (int i = 0; i<n; i++)//将已排好序的结果输出
	{
		cout << endl << "         " << setw(14);
		cout << setiosflags(ios::left);
		cout << name[i] << tele[i];
	}
	cout << endl;
	system("pause");
}
*/