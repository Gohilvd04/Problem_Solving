#include <iostream>
using namespace std;
struct student
{
	int roll;
	char name[20];
	char hobby[20];
};
int main()
{
	struct student s1,s2,s3;
	
	cin>>s1.roll>>s1.name>>s1.hobby;
	cin>>s2.roll>>s2.name>>s2.hobby;
	cin>>s3.roll>>s3.name>>s3.hobby;
	
	cout<<"Details of student : "<<endl;
	cout<<"roll no.  "<<"   name  "<<"  hobby  "<<endl;
	cout<<s1.roll<<".      "<<s1.name<<"       "<<s1.hobby<<endl;
	
	cout<<s2.roll<<".      "<<s2.name<<"     "<<s2.hobby<<endl;
	
	cout<<s3.roll<<".      "<<s3.name<<"      "<<s3.hobby<<endl;
	return 0;
}