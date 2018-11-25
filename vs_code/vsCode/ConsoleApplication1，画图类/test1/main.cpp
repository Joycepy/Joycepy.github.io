#include<iostream>
using namespace std;
//char* match(char a, char *s)
//{
//	char *p = s;
//	while (*p!=0&&*p != a)
//		p++;
//	return p;
//}
//void main()
//{
//	char s[] = "I am a student.";
//	char*d = match('w', s);
//	if (*d)
//		cout << d;
//	else
//		cout << "No match found" << endl;
//	system("pause");
//}

//函数指针
/*int max(int x, int y)
{
	cout << "Max:";
	return x > y ? x : y;
}
int min(int x, int y)
{
	cout << "Min:";
	return x > y ? y : x;
}
void main()
{
	int tmp;
	int(*p)(int, int);
	cout << "max/min?---in put 1/0:";
	cin >> tmp;
	if (tmp)
		p = max;
	else
		p = min;
	int a, b, c;
	cin >> a >> b;
	c=p(a, b);
	cout << c << endl;
	system("pause");
}*/

//二维指针
/*void main()
{
	int lin, col, i, j;
	cout << "lin,col=";
	cin >> lin >> col;
	int **b;
	b = new int*[lin];
	for (int i = 0; i < lin; i++)
	{
		b[i] = new int[col];
	}
	for (int i = 0; i < lin; i++)
		for (int j = 0; j < col; j++)
			b[i][j] = 10 * i + j;
	for (int i = 0; i < lin; i++)
	{
		for (int j = 0; j < col; j++)
			cout << b[i][j] << ' ';
		cout << endl;
	}
	cout << *(*b + 2) << endl;
	cout << **b + 2 << endl;
	cout << **(b + 2) << endl;
	system("pause");
}*/
float pai = 3.14;
void main()
{
	int r = 3;
	cout << r * pai*r << endl;
	cout << r * r*pai << endl;
	system("pause");
}