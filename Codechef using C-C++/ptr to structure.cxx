#include <iostream>
using namespace std;

struct rectangle
{
	int length;
	int breadth;
};

int main()
{
	struct rectangle *p;

	p = (struct rectangle *)malloc(sizeof(struct rectangle));

	//	(*p).length = 25;    ........ both we can
	//	(*p).breadth = 10;      write

	p->length = 25;
	p->breadth = 10;

	cout << p->length << endl;
	cout << p->breadth;
}