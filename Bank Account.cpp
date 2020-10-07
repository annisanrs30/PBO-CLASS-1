#include <iostream>
#include <string>

using namespace std;
class Account
{
 	public:
  		Account( int);
  		void credit(int );
  		void debit(int );
  		int getaccountBalance();
 	private:
 	int accountBalance;
};

Account::Account( int balance)
{
 	if(balance>=0)
  		accountBalance=balance;
 	else
 	{
 		accountBalance=0;
  		cout<<"Saldo awal tidak valid."<<endl;
	}
}

	void Account::credit( int balance)
{
	accountBalance = accountBalance + balance;
}

	void Account::debit( int balance)
{
	if(accountBalance>=balance)
	
	{
		accountBalance = accountBalance - balance;
 	}
	 
	 else
	{
		cout<<"Jumlah debit melebihi saldo akun."<<endl;
	}
}

int Account::getaccountBalance()
	{
		return accountBalance;
	}

int main ()
	{
		// membuat dua objek akun
		Account account1(175);
		Account account2(-37);
	
		// menampilkan saldo awal
		cout << "Saldo akun 1 adalah : " << account1.getaccountBalance() << endl;
		cout << "Saldo akun 2 adalah : " << account2.getaccountBalance() << endl << endl;
	
	
		// kreditkan sejumlah dana
		cout << "Mengkredikan 281 ke akun1" << endl;
		account1.credit(281);
		cout << "Saldo akun1 sekarang adalah " << account1.getaccountBalance() << endl << endl;
		
		cout << "Mengkreditkan 72 ke akun2" << endl;
		account2.credit(72);
		cout << "Saldo akun 2 sekarang adalah " << account2.getaccountBalance() << endl << endl;
		
		// debitkan sejumlah dana
		cout << "Mendebitkan 93 dari akun1" << endl;
		account1.debit(93);
		cout << "Saldo akun1 sekarang adalah " << account1.getaccountBalance() << endl << endl;
		
		cout << "Mendebitkan 72 dari akun2" << endl;
		account2.debit(71);
		cout << "Saldo akun2 sekarang adalah " << account2.getaccountBalance() << endl << endl;	
	}
