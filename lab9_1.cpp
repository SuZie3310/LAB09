#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

double loan;
double interestRate;
double payment;
int numberOfYears=1;

int main(){	
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interestRate;
	cout << "Enter amount you can pay per year: ";
	cin >> payment;
	 
	
double newbalance = loan;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	while (newbalance > 0)
	{
		
double interest = newbalance * (interestRate / 100);
		double total = newbalance + interest;
		double actualPayment = (total < payment) ? total : payment;
		double nextBalance = total - actualPayment;

		cout << fixed << setprecision(2); 
		cout << setw(13) << left << numberOfYears++; 
		cout << setw(13) << left << newbalance;
		cout << setw(13) << left << interest;
		cout << setw(13) << left << total;
		cout << setw(13) << left << actualPayment;
		cout << setw(13) << left << nextBalance;
		cout << "\n";	
		
		newbalance = nextBalance;
	}
	return 0;
}
