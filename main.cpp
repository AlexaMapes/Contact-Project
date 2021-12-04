// Alexa Mapes 6/6/2021

#include <iostream>
#include "ContactNode.h"
using namespace std;

int main() {
	ContactNode* headObj = nullptr;
	ContactNode* contactObj1 = nullptr;
	ContactNode* contactObj2 = nullptr;
	ContactNode* contactObj3 = nullptr;
	ContactNode* currObj = nullptr;
	string userContactName;
	string userContactNum;

	headObj = new ContactNode();

	cout << "Person 1" << endl << "Enter name:" << endl;
	getline(cin, userContactName);
	cout << "Enter phone number:" << endl;
	cin >> userContactNum;
	cout << "You entered: " << userContactName << ", " << userContactNum << endl << endl;
	
	contactObj1 = new ContactNode(userContactName, userContactNum);
	headObj->InsertAfter(contactObj1);

	cin.ignore();

	cout << "Person 2" << endl << "Enter name:" << endl;
	getline(cin, userContactName);
	cout << "Enter phone number:" << endl;
	cin >> userContactNum;
	cout << "You entered: " << userContactName << ", " << userContactNum << endl << endl;

	contactObj2 = new ContactNode(userContactName, userContactNum);
	contactObj1->InsertAfter(contactObj2);

	cin.ignore();

	cout << "Person 3" << endl << "Enter name:" << endl;
	getline(cin, userContactName);
	cout << "Enter phone number:" << endl;
	cin >> userContactNum;
	cout << "You entered: " << userContactName << ", " << userContactNum << endl << endl;

	contactObj3 = new ContactNode(userContactName, userContactNum);
	contactObj2->InsertAfter(contactObj3);

	cout << "CONTACT LIST" << endl;
	currObj = contactObj1;
	while (currObj != nullptr) {
		currObj->PrintContactNode();
		cout << endl;
		currObj = currObj->GetNext();
	}

	return 0;
}
