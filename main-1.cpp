#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct employee {
	string first_name;
	string last_name;
	string password;
	string id_number;
	string employee_status;
	int age;
	double salary;
};
float nhima=0.10;
float napsa=0.12;
float Tax=0.15;

class employee_database {
	private :
	vector<employee>employees;

	public :

	void add_employee() {
		employee employee;
		cout<<"Please enter your first name :";
	    cin>>employee.first_name;
	    cout<<"Enter your last name :";
	    cin>>employee.last_name;
	    cout<<"Please enter your age :";
	    cin>>employee.age;
	    if(employee.age<18) {
	    	cout<<"Please make sure you enter the correct age???\n\n";
	    	return;
	    }
    	cout<<"Enter your ID number :";
    	cin>>employee.id_number;
  	  cout<<"Enter employee status :";
    	cin.ignore();
	    getline(cin,employee.employee_status);
	    cout<<"Pease enter your salary :";
	    cin>>employee.salary;
	    if(employee.salary<=1000) {
	    	cout<<"Invalid ?????\n";
	    	return;
	    }
	    cout<<"Please set a password :";
	    cin.ignore();
    	getline(cin,employee.password);
	    employees.push_back(employee);
    	cout<<"Employee added successfully!\n";
	}
		void search_employee() {
			employee employee;
			string password;
			cout<<"Please enter password :";
			cin>>password;

			for (const auto&employee:employees) {
				if (password==employee.password) {

			cout<<"Employee's first name : "<<employee.first_name<<endl;
			cout<<"Employee's last name : "<<employee.last_name<<"\n";
			cout<<"Employee's full name : "<<employee.first_name<<"\t"<<employee.last_name<<"\n";
			cout<<"Employee's age : "<<employee.age<<"\n";
			cout<<"Employee's ID number : "<<employee.id_number<<"\n";
			cout<<"Employee's status : "<<employee.employee_status<<"\n";
			cout<<"Employee's salary : K"<<employee.salary<<"\n";
			cout<<"Napsa deductions : K"<<employee.salary*napsa<<"\n";
			cout<<"Nhima deductions : K"<<employee.salary*nhima<<"\n";
			cout<<"Tax deductions : K"<<employee.salary*Tax<<"\n";
			double deductions=nhima+napsa+Tax;
			cout<<"Total deductions : K"<<employee.salary*deductions<<"\n";
			double netpay=employee.salary-(employee.salary*deductions);
			cout<<"Net pay = K"<<netpay<<"\n";
			cout<<"...........................................................................................................................\n\n";
				}
			}
		}
		void display_employees() {
			employee employee;
			if (employees.empty()) {
				cout<<"No employees in the data base press '1' to add!!\n\n";
			}else{
				for(const auto&employee:employees) {
				cout<<"Employee's first name : "<<employee.first_name<<endl;
			cout<<"Employee's last name : "<<employee.last_name<<"\n";
			cout<<"Employee's age : "<<employee.age<<"\n";
			cout<<"Employee's ID number : "<<employee.id_number<<"\n";
			cout<<"Employee's status : "<<employee.employee_status<<"\n";
			cout<<"Employee's salary : K"<<employee.salary<<"\n";
			cout<<"Napsa deductions : K"<<employee.salary*napsa<<"\n";
			cout<<"Nhima deductions : K"<<employee.salary*nhima<<"\n";
			cout<<"Tax deductions : K"<<employee.salary*Tax<<"\n";
			double deductions=nhima+napsa+Tax;
			cout<<"Total deductions : K "<<employee.salary*deductions<<"\n";
			double netpay=employee.salary-(employee.salary*deductions);
			cout<<"Net pay = K "<<netpay<<"\n";
			cout<<"\n";
		}
	}
		}
};
			int main() {
				employee_database database;
				while (true) {
                        cout<<"\t\t\t\t******************************************************\n";
                        cout<<"\t\t\t\t// WELCOME TO JOE MUZO'S EMPLOYEE'S DATABASE SYSTEM //\n";
                cout<<"\t\t\t\t******************************************************\n\n";
					cout<<"1. Add employee\n";
					cout<<"2. Search employee\n";
					cout<<"3. Display employees\n";
					cout<<"4. Exit\n";
					int choice;
					cin>>choice;
					switch (choice) {
					case 1:
					database.add_employee();
					break;
					case 2:
					database.search_employee();
					break;
					case 3:
					database.display_employees();
					break;
					case 4:
					    return 0;
					default:
					cout<<"Invalid choice please make sure you select the correct choice !!\n";
					}
			  }
return 0;
			}
