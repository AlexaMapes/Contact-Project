// Alexa Mapes 6/6/2021

#include <string>
using namespace std;


class ContactNode {
public:
	ContactNode(string t_contactName = "none", string t_contactPhoneNum = "000-000-0000", ContactNode* nextLoc = nullptr);
	void InsertAfter(ContactNode* nodeLoc);
	string GetName();
	string GetPhoneNumber();
	ContactNode* GetNext();
	void PrintContactNode();
private:
	string contactName;
	string contactPhoneNum;
	ContactNode* nextNodePtr;
};