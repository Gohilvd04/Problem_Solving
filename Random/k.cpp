#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
class Bank 
{

	private:
		string name="name";
		long long accnumber=000000000;
		char type[10]="null";
		long long tot =0;

	public:
	
		void setvalue()
		{
			cout << "\nEnter name\n";
			cin.ignore();
			
			getline(cin, name);
			
			cout << "Enter Account number\n";
			cin >> accnumber;
			if(to_string(accnumber).length() < 9 || to_string(accnumber).length() > 18){
				cout<<"Invalid account number! Please retry";
				return;
			}
			cout << "Enter Account type\n";
			cin >> type;
			cout << "Enter Balance\n";
			cin >> tot;
			if(tot<=0){
				cout<<"Invalid amount! Please retry";
				return;
			}
		}
		
		void showdata()
		{
			cout<<"\nName : "<<name<<endl;
			cout<<"Account No. : "<<accnumber<<endl;
			cout<<"Account Type : "<<type<<endl;
			cout<<"Balance : "<<tot<<endl;
		}
		
		void deposit()
		{	int n,amount;
			cout<<"\nEnter amount to be Deposited\n";
			cin>>amount;
			tot=tot+amount;
			if(amount<=0){
				cout<<"Invalid amount! Please retry";
				return;
			}
			cout<<"\n Are you willing to see final amount?\n ";
			cout<<"Enter your choice for further process : \n";
			cout<<"1.Yes\n2.No\n";
			cin>>n;
			if(n==1){
				showbal();
			}
			else if(n==2){
				return;
			}
		}
		
		void showbal(){
			cout<<"\nTotal balance is : "<<tot;
		}
		
		void withdraw(){
			int a,n;
			cout<<"Enter amout to withdraw\n";
			cin>>a;
			tot=tot-a;
			if(a<=0){
				cout<<"Invalid amount! Please retry";
				return;
			}
			cout<<"\n Are you willing to see final amount?\n";
			cout<<"Enter your choice for further process : \n";
			cout<<"1.Yes\n2.No\n";
			cin>>n;
			if(n==1){
				showbal();
			}
			else if(n==2){
				return;
			}
		}
};
	
int main()
{
		
	Bank b;
	int choice;
		
	while (1) {
		cout<<"\n----------------------------------"
			<<"---------------------WELCOME----------------------"
			<<"------------------------------------\n\n";
		cout<<"Enter Your Choice\n";
		cout<<"\t1. Enter name, Account number, Account type\n";
		cout<<"\t2. Balance Enquiry\n";
		cout<<"\t3. Deposit Money\n";
		cout<<"\t4. Show Total balance\n"; 
		cout<<"\t5. Withdraw Money\n";
		cout<<"\t6. Cancel\n";
		cin>> choice;
		
		switch (choice) {
		case 1:
			b.setvalue();
			break;
		case 2:
			b.showdata();
			break;
		case 3:
			b.deposit();
			break;
		case 4:
			b.showbal();
			break;
		case 5:
			b.withdraw();
			break;
		case 6:
			cout<<"Thanks for visiting!";
			exit(1);
			break;
		default:
			cout<<"\nInvalid choice\n";
		}
	}
}