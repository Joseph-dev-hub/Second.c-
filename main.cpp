#include<iostream>
#include<string>

using namespace std;

struct acc{
int year_of_birth;
char gender;
string withdraw;
double deposit;
string password;
string user_name;
double balance;
string MOB;
};

void create_account(acc &account){
cout<<"Please enter your name to create your account :\n";
cin.ignore();
getline(cin,account.user_name);
cout<<"Enter your date and month of birth :\n";
cin.ignore();
getline(cin,account.MOB);
cout<<"Enter your year of birth :\n";
cin>>account.year_of_birth;
if(account.year_of_birth>2007){
    cout<<"Invalid year of birth \'Too young!!\'\n\n";
    return;
}
cout<<"Set a password : \n";
cin>>account.password;
int len=account.password.length();
if(len>=5){

account.balance=0.0;
cout<<"Account created successfully \n";
}
else
{
cout<<"Invalid password must be at least 5 characters!";
  }
}

void deposit(acc &account){
cout <<"Enter your password : \n";
string password;
cin>>password;
if(password==account.password){
cout<<"Please \'"<< account.user_name<<"\' Enter amount you want to deposit :\n";
double deposit;
cin>>deposit;
if(deposit>0){
    account.balance+=deposit;
cout<<"Money deposited successfully\n";
}
else
{
 cout<<"Invalid amount to be deposited cannot be less than or equal to  0 :\n\n";
    }
  }
}
void withdraw(acc &account){
cout<<"Please enter your password :\n";
string password;
cin>>password;
if(password==account.password){
cout<<account.user_name<<" please enter the amount you want to withdraw :\n";
double withdraw;
cin>>withdraw;
if(withdraw>0 ||account.balance==withdraw){
    account.balance-=withdraw;

cout<<"Money withdrawn successfully!\n\n";
cout<<"New balance :K"<<account.balance<<endl<<endl;
}
else if(withdraw>account.balance)
   {
       cout<<"Insufficient balance!!\n";
   }
   else if(withdraw<=0){
    cout<<"invalid withdraw cannot be equal to or less than 0!!!\n\n";
   }
 }
}
void check_balance(acc &account){
cout<<"Enter your password to check balance :\n";
string password;
cin>>password;
if(password==account.password){
    cout<<"Your balance is :K"<<account.balance<<endl;
    return;
 }
}
void view_accountDetails(acc &account){
cout<<"Enter your password to view account details :\n";
string password;
cin>>password;
if(password==account.password){
    cout<<"Name : "<<account.user_name<<endl;
    cout<<"Date of birth :"<<account.MOB <<","<< account.year_of_birth<<endl;
    cout<<"Balance : K"<<account.balance<<endl<<endl;
    return;
} else {
cout<<"Account not found!!\n\n";
}
}
int main(){
    acc user;
    int choice;
    while(true){

            cout<<"\t\t\t\t\t______________________________________\n";
    cout<<"\t\t\t\t\t|WELCOME TO JOE MUZO'S BANKING SYSTEM|\n";
    cout<<"\t\t\t\t\t______________________________________\n\n";

cout<<"\t1. Create account\n";
cout<<"\t2. Deposit money\n";
cout<<"\t3. Withdraw money\n";
cout<<"\t4. Check balance\n";
cout<<"\t5. View account details\n";
cout<<"\t6. Exit\n\n";

cin>>choice;
switch(choice){

case 1:
    create_account(user);
    break;
    case 2:
    deposit(user);
    break;
    case 3:
        withdraw(user);
        break;
    case 4:
        check_balance(user);
        break;
    case 5:
        view_accountDetails(user);
        break;
    case 6:
        return 0;
    default :
        cout<<"Invalid choice!!!\n\n";

    return 0;
     }
  }
}
