#include <iostream>
using namespace std;

struct rectangle
{
	int l;
	int b;
};

int main()
{
	int *p1;
	float *p2;
	char *p3;
	double *p4;
	bool *p5;
	struct rectangle *p6;

	cout << sizeof(p1) << endl;
	cout << sizeof(p2) << endl;
	cout << sizeof(p3) << endl;
	cout << sizeof(p4) << endl;
	cout << sizeof(p5) << endl;
	cout << sizeof(p6) << endl;

	return 0;
}