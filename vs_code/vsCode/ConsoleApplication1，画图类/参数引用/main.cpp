#include <iostream>
using namespace std;
const int maxcard = 20;
class Set {
	int elems[maxcard];
	int card;
public:
	Set(void) { card = 0; };
	void print();
	friend bool operator & (int, Set);
	bool operator == (Set);
	friend Set operator + (Set, int);
	void operator - (int);
	friend bool operator < (Set, Set);
	friend Set operator * (Set, Set);
};
bool Set::operator==(Set s)
{
	for (int i = 0; i < card; i++)
	{
		if (elems[i] != s.elems[i])
			return 0;
	}
	return 1;
}
void Set::print()
{
	for (int i = 0; i < card; i++)
		cout << elems[i] << ' ';
	cout << endl;
}
bool operator & (int x, Set s)
{
	for (int i = 0; i < s.card; i++)
		if (x == s.elems[i])
			return 1;
	return 0;
}
Set operator + (Set s, int n)
{
	s.elems[s.card++] = n;
	return s;
}
void Set:: operator - (int n)
{
	int i;
	for (i = 0; i < card; i++)
	{
		if (elems[i] == n)
		{			
			for (int j = i; j + 1 < card; j++)
			{
				elems[j] = elems[j + 1];
			}
			break;
		}
	}
	if(i!=card)
		card -= 1;
}
bool operator < (Set s1, Set s2)
{
	int i, j;
	for (i = 0; i < s1.card; i++)
	{
		for (j = 0; j < s2.card; j++)
		{
			if (s2.elems[j] == s1.elems[i])
				break;
		}
		if (j == s2.card)
			return 0;
	}
	return 1;
}
Set operator * (Set s1, Set s2)
{
	Set obj;
	for(int i=0;i<s1.card;i++)
		for (int j = 0; j < s2.card; j++)
		{
			if (s1.elems[i] == s2.elems[j])
				obj.elems[obj.card++] = s1.elems[i];
		}
	return obj;
}
void main()
{
	Set s, s1, s2, s3, s4;
	for (int i = 0; i < 10; i++)
	{
		s = s + i;
		s1 = s1 + 2 * i;
		s2 = s2 + 3 * i;
	}
	cout << "s=";
	s.print();
	cout << "s1=";
	s1.print();
	cout << "s2=";
	s2.print();
	for (int i = 0; i < 5; i++)
	{
		s - i;
		s1 - i;
		s2 - i;
	}
	cout << "after RevElem(0->4)," << endl << "s=";
	s.print();
	cout << "s1=";
	s1.print();
	cout << "s2=";
	s2.print();
	s3 = s * s1;
	cout << "s3=s*s1 :";
	s3.print();
	if (s1 == s3)
		cout << "s1=s3";
	else
		cout << "s1!=s3" << endl;
	if (s3 == s3)
		cout << "s3=s3" << endl;
	else
		cout << "s3!=s3" << endl;
	if (s3 < s1)
		cout << "s1 contains s3." << endl;
	else 
		cout<< "s2 not contains s3." << endl;
	system("pause");
}