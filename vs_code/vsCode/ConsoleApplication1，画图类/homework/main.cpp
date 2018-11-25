//#include<iostream>
//using namespace std;
//struct S
//{
//	char  str[100];
//	int index;
//};
//void rank_s(int n, S *s)
//{
//	for (int i = 0; i < n -1; i++)
//	{
//		for (int j = 1; j < n; j++)
//		{
//			if (strcmp(s[i].str, s[j].str) > 0)
//			{
//				int temp = s[i].index;
//				s[i].index = s[j].index;
//				s[j].index = temp;
//			}
//
//		}
//	}
//}
//int main()
//{
//	S *s;
//	int n;
//	cin >> n;
//	s = new S[n];
//	for (int i = 0; i < n; i++)
//	{
//		s[i].index = i+1;
//		cin >> s[i].str;
//	}
//	rank_s(n, s);
//	for (int i = 0; i < n-1; i++)
//	{
//		cout << s[i].index << ' ';
//	}
//	cout << s[n - 1].index << endl;
//	system("pause");
//	return 0;
//}

#include<iostream>
using namespace std;
struct node
{
	int item;
	node *next;
public:
	node(int n=0)
	{
		item = n;
		next = NULL;
	}
};
class list
{
	node *head;
	node p;
public:
	list()
	{
		head =NULL;
	}
	void insert(int n);
	void disp();
};
void list::insert(int n)
{
	node *temp = new node(n);
	if (head==NULL)
	{
		head = temp;
		return;
	}
	node *q = head;
	while (q->next!= 0)
	{
		if (n == q->item)
			return;
		q = q->next;
	}
	
	if (n < head->item)
	{		
		temp->next= head;
		head = temp;
	}
	else
	{
		node *q=head;
		while (q->next != NULL && q->next->item< n)
			q = q->next;
			temp->next = q->next;
			q->next = temp;
	}

}
void list::disp()
{
	node *temp = head;
	while (temp->next)
	{
		cout << temp->item << ' ';
		temp = temp->next;
	}
	cout << temp->item << endl;
}
bool isprime(int n)
{
	if (n == 2 || n == 3)
		return 1;
	else
	{
		for (int i = 2; i*i <= n; i++)
		{
			if (n%i == 0)
				return 0;
		}
		return 1;
	}
}
int main()
{
	list p;
	int n;
	while (1)
	{
		cin >> n;
		if (n < -10000 || n>10000)
			return 0;
		if (!isprime(n))
			break;
			p.insert(n);
	}
	p.disp();
	system("pause");
	return 0;
}