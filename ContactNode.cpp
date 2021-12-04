// Alexa Mapes 6/6/2021

#include "ContactNode.h"
#include <iostream>

ContactNode::ContactNode(string t_contactName, string t_contactPhoneNum, ContactNode* nextLoc) {
	this->contactName = t_contactName;
	this->contactPhoneNum = t_contactPhoneNum;
	this->nextNodePtr = nextLoc;
}

void ContactNode::InsertAfter(ContactNode* nodeLoc) {
	ContactNode* tmpNext = nullptr;
	tmpNext = this->nextNodePtr;
	this->nextNodePtr = nodeLoc;
	nodeLoc->nextNodePtr = tmpNext;
}

string ContactNode::GetName() {
	return this->contactName;
}

string ContactNode::GetPhoneNumber() {
	return this->contactPhoneNum;
}

ContactNode* ContactNode::GetNext() {
	return this->nextNodePtr;
}

void ContactNode::PrintContactNode() {
	cout << "Name: " << this->contactName << endl;
	cout << "Phone number: " << this->contactPhoneNum << endl;
}
