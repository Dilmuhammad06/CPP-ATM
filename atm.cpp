#include <iostream>

using namespace std;

int balance = 128;

class ATM{
	public:
		int limit = 15000;
	void balance_check(){
		cout<<"\nYour balance is "<<balance;
	}

	void withdraw(int num){
		if (num<=balance){
			balance = balance - num;
			cout<<"\nOperation succeed\n\nYour balance is "<<balance<<endl;
		}
		else{
			cout<<"\nYou balance is low or error"<<endl;
		}
	}

	void debit(int num){
		if (num<=limit){
			balance = balance + num;
			cout<<"\nOperation succeed\n\nYour balance is "<<balance<<endl;
		}
		else{
			cout<<"\nSorry there is a limit"<<endl;
		}
	}

};


void atm(){
	ATM myatm;
	int option;
	int exit;
	cout<<"Select an option\n\n[1] - Check for balance\n[2] - Withdraw\n[3] - Debit"<<endl;
	cin>>option;

	if (option == 1){
		myatm.balance_check();
		cout<<"\n\nBack to menu ?\n[1] - back\n[0] - exit\n"<<endl;;
		cin>>exit;
		if (exit == 1){
			atm();
		}
	}
	else if (option == 2){
		int num;
		cout<<"How much you want to withdraw ?"<<endl;
		cin>>num;
		myatm.withdraw(num);
		cout<<"\n\nBack to menu ?\n[1] - back\n[0] - exit\n"<<endl;
                cin>>exit;
                if (exit == 1){
                        atm();
                }
	}
	else if (option == 3){
		int num;
		cout<<"How much you want ?"<<endl;
		cin>>num;
		myatm.debit(num);
		cout<<"\n\nBack to menu ?\n[1] - back\n[0] - exit\n"<<endl;
                cin>>exit;
                if (exit == 1){
                        atm();
                }
	}
}

int main(){

atm();

return 0;
}
