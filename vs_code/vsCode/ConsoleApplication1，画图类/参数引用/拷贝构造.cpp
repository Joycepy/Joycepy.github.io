#include<iostream>
using namespace std;
class Myclass
{
	char *name;
public:
	Myclass(char *);
	Myclass(Myclass &);
	void copy(Myclass&);
	void operator = (Myclass &);
	void print();
	~Myclass()
	{
		delete[]name;
	}
};
int main()
{
	char *p = new char[20];
	cin >> p;
	Myclass obj(p);//ִ�й��캯��
	Myclass obj1("asdfg");//ִ�й��캯��
	Myclass obj2 =obj1;//ִ�п������캯��
	obj.print();
	obj1.print();
	obj2.print();
	obj1 = obj;//ִ�и�ֵ��������غ���
	obj.copy(obj2);//���ó�Ա����
	obj.print();
	obj1.print();
	obj2.print();
	system("pause");
	return 0;
}
void Myclass::print()
{
	cout << name << endl;
}
Myclass::Myclass(char *p)
{
	name = new char[20];
	strcpy(name, p);
}
Myclass::Myclass(Myclass & m)
{
	name = new char[20];
	strcpy(name, m.name);
}
void Myclass::operator=(Myclass & m)
{
	name = new char[20];
	strcpy(name, m.name);
}
void Myclass::copy(Myclass & m)
{
	name = new char[20];
	strcpy(name, m.name);
}