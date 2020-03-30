#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <cstdlib>

//1,2,3,4,5,6,7,8,9
using namespace std;

string primary_person();
string secondary_person();
string playerName;
int AddTwoNumber(int firstNumber, int secondNumber);

int main()
{
	//title
	cout << " \n\n\t\t*** References ***\n\n";

	//create variable
	//create references 

	//first integer regular account 2*
	int primaryAccount = 100;

	//display and a call the value of the integer
	cout << "The account balance for this customer is :" << primaryAccount << endl;

	//reference for the primary account and checking the value
	int& r_primaryAccount = primaryAccount;
	cout << "\nThe hacked account will present :" << r_primaryAccount << endl;

	//change the account balance and check the value
	primaryAccount = 733;
	cout << "\nThis is the actual account and this is the balance of that account :" << primaryAccount << endl;
	cout << "\nThe hacked account will present :" << r_primaryAccount << endl;

	//display end total
	int a = 1000;
	int b = 733;
	int sum = a - b;
	cout << " Account Balance: " << sum << endl;

	//-----------------------------------------------------------------

	//second integer & hacked account 2*
	int secondaryAccount;
	secondaryAccount = 517;
	cout << "\nThe account balance for this customer is :" << secondaryAccount << endl;

	//reference hacked account and display
	int& r_secondaryAccount = secondaryAccount;
	cout << "\nThe hacked account will present :" << r_secondaryAccount << endl;

	//change the account balance and check the value
	secondaryAccount = 22;
	cout << "\nThis is the actual account and this is the balance of that account :" << secondaryAccount << endl;
	cout << "\nThe hacked account will present :" << r_secondaryAccount << endl;
	int x = 517;
	int y = 22;
	AddTwoNumber(x, y);
	//-----------------------------------------------------------------


	return 0;
}

int AddTwoNumber(int firstNumber, int secondNumber)
{
		//display end total
	//int x = 517;
	//int y = 22;
	const int r_sum = firstNumber - secondNumber;
	cout << " Account Balance: " << r_sum << endl;
	return 0;
}


string primary_person()
{
	string introDan = "Dan";
	playerName = "";
	cout << "\n\tYo my name is " << introDan << ", and dan your man, when you need to plan \n\t";
	cout << "Today we are going to trade values through swaps and balances \n\t";
	cout << "Here is the opponent tonight : " << secondary_person() << "\n";
	//secondary_person(introDan);
	return introDan;
}

string secondary_person()
{
	cin >> playerName;
	cout << "Ready for simulation";
	return secondary_person();
}



//notes
/*
references are nicknames for variables
rules for references are just like the rules for nicknames
only one nickname per person/ one reference per variables
what ever happens to a person happens to the nicknamed person
so what happens to a reference happens to the actual variable
-------------------------------------------------------------
733
517

Pass funds balance in a normal transaction using integers parameters.

Print the funds and balance showing this normal transaction should change nothing.

Now pass the account balance by reference to the hacked transaction

In the hacked transaction swap the bank balances.

Print out the new balances.

Add any more functions that you may need.

Your main function should control all the other functions.
 */

 /*
  *
  */
