#include <iostream>
using namespace std;

int main()
{
	cout << "the bytes taken by variable: \n";
	cout << "\n____________________________________________\n";

	cout << " size of integer  :           " << sizeof(int) << " bytes\n";
cout << " size of character  :        " << sizeof(char) << " bytes\n";
cout << " size of floating point  :     " << sizeof(float) << " bytes\n";
cout << " size of double  :            " << sizeof(double) << " bytes\n";
cout << " size of long  :            " << sizeof(long) << " bytes\n";
cout << " size of boolean  :         " << sizeof(bool) << " bytes\n";

return 0;
}