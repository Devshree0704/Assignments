#include<iostream>
#include<fstream>
#include<vector>
#include<string>

using namespace std;

class Account
{
			protected:
				int acc_no;
				string name;
				int acc_bal;
				string username;
				string password;
			public:
			void get_savings()
			{
				ifstream fs;
				string line;
				fs.open("file1.txt",ios::in);
				if(!fs)
				{
					cout<<"Unable to open the file";
					exit(0);
				}	

				cout<<"File opened successfully"<<endl<<"Customer list"<<endl;
				while(!fs.eof())
				{
					line="";
					getline(fs,line);
					cout<<line<<endl;
				}

				fs.close();
			}

			void get_current()
			{
				ifstream fc;
				string line;
				fc.open("file2.txt",ios::in);
				if(!fc)
				{
					cout<<"Unable to open the file";
					exit(0);
				}	

				cout<<"File opened successfully"<<endl<<"Customer list"<<endl;
				while(!fc.eof())
				{
					line="";
					getline(fc,line);
					cout<<line<<endl;
				}

				fc.close();

		}

};

class Savings : public Account
{
	public:
			void sfdisplay()
			{
				get_savings();
			}

			void sinfodisplay()
			{
			cout<<"Customer Information(Savings):-"<<endl;;
			cout<<"Enter Name:-";
			cin>>name;
			cout<<"\nEnter Account Number:-";
			cin>>acc_no;
			cout<<"\nEnter Username:-";
			cin>>username;
			cout<<"\nEnter Password:-";
			cin>>password;

			if(acc_no==1234)
			{
				if(username=="SAAA" && password=="SA1234")
				{
					cout<<"Access Granted"<<endl;
				}
				else
				cout<<"Access Denied"<<endl;
			}		
			else
			cout<<"Access Denied"<<endl;
			}
			

			void sbalance()
			{
			cout<<"\nEnter the balance amount:-";
			cin>>acc_bal;
			if(acc_bal>=5000)
			{
				cout<<"Sufficient Balance"<<endl;
			}
			else
			{
				cout<<"Insufficient Balance"<<endl;
			}
			}
			

};

class Current : public Account
{
	public:
			void cfdisplay()
			{
				get_current();
			}

			void cinfodisplay()
			{
			cout<<"\nCustomer Information(Current):-"<<endl;;
			cout<<"Enter Name:-";
			cin>>name;
			cout<<"\nEnter Account Number:-";
			cin>>acc_no;
			cout<<"\nEnter Username:-";
			cin>>username;
			cout<<"\nEnter Password:-";
			cin>>password;

			if(acc_no==9876)
			{
				if(username=="CAAA" && password=="CA9876")
				{
					cout<<"Access Granted"<<endl;
				}
				else
				cout<<"Access Denied"<<endl;
			}
			else
			{
			cout<<"Access Denied"<<endl;
			}
			}

			void cbalance()
			{
			cout<<"\nEnter the balance amount:-";
			cin>>acc_bal;
			if(acc_bal>=5000)
			{
				cout<<"Sufficient Balance";
			}
			else
			{
				cout<<"Insufficient Balance";
			}
			}
};

int main()
{
	Savings A;
	Current B;

	A.sfdisplay();
	B.cfdisplay();

	A.sinfodisplay();
	A.sbalance();

	B.cinfodisplay();
	B.cbalance();

	return 0;
}
