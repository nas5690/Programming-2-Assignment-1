/*Naveed Siddiqui
CPSC 2376: Programming II

This program will allow the user to input their name, address, track, gender, three phone numbers,
tuition for Fall, and student ID. It will then show what they entered in an ordered list.*/


#include <iostream>
using namespace std;

#define phoneno 3


int main()
{
	system("cls");
	cout << "\n\t\t\t Employer Information System ";
	cout << "\n\t\t\t Created By: Programming II Students ";
	cout << "\n\n";
	cout << "\n\t\t\t Enter Your Name: ";
	char name[50];
	//cin >> name;
	cin.getline(name, 50);

	cout << "\n\t\t\t Enter Your Address: ";
	char address[50];
	cin.getline(address, 50);

	cout << "\n\t\t\t Enter Your Track: ";
	char track[50]; // This is a char variable
	cin.getline(track, 50);

	cout << "\n\t\t\t Enter Your Gender (F: Female, M: Male): ";
	char gender[10]; //This is a char variable
	cin.getline(gender, 10);

	int phone[phoneno];
	cout << "\n\t\t\t Enter 3 Phone Numbers: ";
	for (int i = 0; i < 3; i++)
	{
		cout << "\n\t\t\t PHONE NUMBER " << i + 1 << ": ";
		cin >> phone[i];
	}

	cout << "\n\t\t\t Enter Your Tuition Fee for Fall 2016: ";
	double tuition;
	cin >> tuition;

	cout << "\n\t\t\t Enter Your ID: ";
	int id;
	cin >> id;



	//Print Information
	system("cls");
	cout << "\n\t\t\t Employer Information System ";
	cout << "\n\t\t\t Created By: Programming II Students ";
	cout << "\n\n";
	cout << "\n\t\t\t 1. Name: " << name;
	cout << "\n\t\t\t 2. Address: " << address;
	cout << "\n\t\t\t 3. Track: " << track;
	cout << "\n\t\t\t 4. Gender: " << gender;
	cout << "\n\t\t\t 5. Phone Number: ";
	for (int i = 0; i < 3; i++)
	{
		cout << "\n\t\t\t PHONE NUMBER " << i + 1 << ": " << phone[i] << endl;

	}
	cout << "\n\t\t\t 6. Tuition Fee for Fall 2016: " << tuition;
	cout << "\n\t\t\t 7. Student ID: " << id << endl;




	system("PAUSE");
	return 0;
}