/*#include<iostream>
#include<iomanip>
using namespace std;
class person
{
public:
	char *name;
	char sex;
	int age;
	person *next;
};
class list
{
	person *head,*tail;
public:
	void add();
	void print();
	void male();
};
void list::add()
{
	person *item = new person;
	tail=head = item;
	while (1)
	{
		cin >> item->name;// cin.getline(item->name, 21);//cin.ignore(20, 'n');
		if (item->name[0] !='*')
		{

			cin >> item->sex;
			cin>> item->age;
			tail = item;
			item->next = NULL;
		}
		else
		{
			tail->next = NULL;
			delete []item;
			break;
		}
		item->next = new person;
		item = item->next;
	} 
}
void list::print()
{
	person *p = head;
	while (p)
	{
		cout << setw(12) << p->name << setw(8) << p->sex << setw(8) << p->age << endl;
		p = p->next;
	}
}
void list::male()
{
	int num = 0, sum = 0;
	person *p = head;
	while (p)
	{
		if (p->sex == 'm')
		{
			num++;
			sum += p->age;
		}
		p = p->next;
	}
	cout << "the number of the male is " << num << ", their average age is " << sum / num << endl;
}
void main()
{
	list mylist;
	mylist.add();
	mylist.print();
	mylist.male();
	system("pause");
}*/
#include<iostream>
#include<string.h>
using namespace std;
void main()
{
	char a[20] = "asdfg";
	char b[20] = "qwee";
	strcpy_s(a, b);
	cout << a;
	system("pause");
}