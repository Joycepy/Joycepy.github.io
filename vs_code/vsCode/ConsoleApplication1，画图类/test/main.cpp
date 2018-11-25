//#include<iostream>
//using namespace std;
//class A
//{
//	int a=1;
//public:
//	void print()
//	{
//		B bb;
//		cout << a << '  ' << bb.b ;
//	}
//};
//class B
//{
//	int b=2;
//	friend A;
//
//};
//class C
//{
//	int c=3;
//	friend B;
//};
//int main()
//{
//	A aa;
//	aa.print();
//	system("pause");
//	return 0;
//}

#include<iostream>
using namespace std;
class point
{
public:
	int x, y;
};
class Distance
{
public:
	point p1, p2;
	virtual float D(point p1, point p2)=0;
};
class M :public Distance
{
public:
	float D(point p1, point p2)
	{
		return abs(p1.x - p2.x) + abs(p1.y -p2.y);
	}
};
class E :public Distance
{
public:
	float D(point p1, point p2)
	{
		return ((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y));
	}
};
void main()
{
	point p1, p2;
	M dis;
	E dis1;
	cin >> p1.x >> p1.y >>p2.x >> p2.y;
	cout << dis.D(p1, p2) << ' ' << dis1.D(p1, p2) << endl;
	system("pause");
}

//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//class pixel
//{
//public:
//	int x, y;
//};
//class D
//{
//public:
//	pixel p1, p2;
//	virtual float dis(pixel, pixel) = 0;
//};
//class MD :public D
//{
//public:
//	float dis(pixel p1, pixel p2)
//	{
//		return (abs(p1.x - p2.x) + abs(p1.y - p2.y));
//	};
//};
//class ED :public D
//{
//public:
//	float dis(pixel p1, pixel p2)
//	{
//		return ((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y));
//	};
//};
//int main()
//{
//	pixel p1, p2;
//	cin >> p1.x >> p1.y >> p2.x >> p2.y;
//	if (p1.x < 0 || p1.x>40000 || p2.x < 0 || p2.x>40000 || p2.y < 0 || p2.y>40000 || p1.y < 0 || p1.y>40000)
//		return 0;
//	MD d1; ED d2;
//	cout << d1.dis(p1, p2) << " " << d2.dis(p1, p2) << endl;
//	return 0;
//}
