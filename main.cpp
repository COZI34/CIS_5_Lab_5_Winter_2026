#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

struct BusinessCard {
	string companyName;
	string companyAddress;
	string phoneNumber;
	string workingHours;
	string pointOfContact;
	double priceQuoted;
};

int main() {
	srand(static_cast<unsigned>(time(nullptr)));

	BusinessCard companies[5];

	companies[0].companyName = "TechNova";
	companies[0].companyAddress = "123 Main St";
	companies[0].phoneNumber = "555-1111";
	companies[0].workingHours = "9AM - 5PM";
	companies[0].pointOfContact = "Alice";
	companies[0].priceQuoted = rand() % 500 + 500;

	companies[1].companyName = "CodeWorks";
	companies[1].companyAddress = "456 Oak Ave";
	companies[1].phoneNumber = "555-2222";
	companies[1].workingHours = "8AM - 4PM";
	companies[1].pointOfContact = "Bob";
	companies[1].priceQuoted = rand() % 500 + 500;

	companies[2].companyName = "DevSolutions";
	companies[2].companyAddress = "789 Pine Rd";
	companies[2].phoneNumber = "555-3333";
	companies[2].workingHours = "10AM - 6PM";
	companies[2].pointOfContact = "Charlie";
	companies[2].priceQuoted = rand() % 500 + 500;

	companies[3].companyName = "NextGen IT";
	companies[3].companyAddress = "321 Maple Blvd";
	companies[3].phoneNumber = "555-4444";
	companies[3].workingHours = "9AM - 6PM";
	companies[3].pointOfContact = "Diana";
	companies[3].priceQuoted = rand() % 500 + 500;

	companies[4].companyName = "ByteBuilders";
	companies[4].companyAddress = "654 Cedar Ln";
	companies[4].phoneNumber = "555-5555";
	companies[4].workingHours = "7AM - 3PM";
	companies[4].pointOfContact = "Ethan";
	companies[4].priceQuoted = rand() % 500 + 500;

	cout << "Company Price Quotes:\n\n";
	for (int i = 0; i < 5; i++) {
		cout << companies[i].companyName
			<< " - $" << companies[i].priceQuoted << endl;
	}

	int bestCompanyIndex = 0;

	for (int i = 1; i < 5; i++) {
		if (companies[i].priceQuoted < companies[bestCompanyIndex].priceQuoted) {
			bestCompanyIndex = i;
		}
	}

	cout << "\nBest Company to Purchase From:\n";
	cout << "Company Name: " << companies[bestCompanyIndex].companyName << endl;
	cout << "Address: " << companies[bestCompanyIndex].companyAddress << endl;
	cout << "Phone: " << companies[bestCompanyIndex].phoneNumber << endl;
	cout << "Hours: " << companies[bestCompanyIndex].workingHours << endl;
	cout << "Point of Contact: " << companies[bestCompanyIndex].pointOfContact << endl;
	cout << "Price Quoted: $" << companies[bestCompanyIndex].priceQuoted << endl;

	return 0;
}
