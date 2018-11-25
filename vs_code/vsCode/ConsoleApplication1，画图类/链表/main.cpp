#include<iostream>
#include<time.h>
using namespace std;
class node
{
public:
	int num;
	node *next;
public:
	node(int n = 0)
	{
		num = n;
	}
	~node() {};
};
class list
{
	node *head, *tail;//如何对tail进行操作？
	int nodecount;
public:
	list()
	{
		nodecount = 0;
		head = tail = NULL;
	}
	void insert(int n);
	void remove(int n);
	void find(int n);
	void print();
};
void main()
{
	list obj;
	int count,tmp;
	cout << "Enter the number of the nodes:";
	cin >> count;
	srand(time(0));
	for (int i = 0; i < count; i++)
	{
		tmp = rand() % 100;
		obj.insert(tmp);
	}
	obj.print();
	cout << "Input thenumber you want to insert:";
	cin >> tmp;
	obj.insert(tmp);
	obj.print();
	cout << "Input thenumber you want to remove:";
	cin >> tmp;
	obj.remove(tmp);
	obj.print();
	cout<< "Input thenumber you want to find:";
	cin >> tmp;
	obj.find(tmp);
	obj.print();
	system("pause");
}
void list::insert(int n)
{
	nodecount++;
	node *p = new node(n);
	node *q = head;
	if (head == NULL)
		tail=head = p;
	else if (n < head->num)
	{
		p->next = head;
		head = p;
		return;
	}
	//这一部分可以并列加上对尾的操作：
	/*if (n > tail->num)
	{
		tail->next = p;
		tail = p;
	}*/
	else 
	{
		while (q->next&& q->next->num < n)
			q = q->next;
		p->next = q->next;
		q->next = p;
	}
}
void list::remove(int n)
{
	node *q = head;
	while (q->next->num != n)
	{
		q = q->next;
	}
	node *p = q->next;
	q->next = q->next->next;
	delete p;
}
void list::find(int n)
{
	node *q = head;
	for (int i = 0; q != NULL; i++)
	{
		if (q->num == n)
		{
			cout << "第" << i + 1 << "个为所找元素。" << endl;
			return;
		}
		q = q->next;
	}
	if (q == NULL)
	{
		cout << "无所查元素。" << endl;
	}
}
void list::print()
{
	node *q = head;
	while (q)
	{
		cout << q->num << ' ';
		q = q->next;
	}
	cout << endl;
}