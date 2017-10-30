#include "HR.h"
#include "Documents.h"

Documents::Documents() : Documents("", "", "", "", ""){
	cout << "Default Constructor of class Documents" << endl;
}


Documents::Documents(string fromString) {
	string tmp = fromString;

	int pos = tmp.find('/');
	OrderToAccept = tmp.substr(0, pos);
	tmp = tmp.substr(pos + 1, tmp.length());

	pos = tmp.find('/');
	OrderToDismission = tmp.substr(0, pos);
	tmp = tmp.substr(pos + 1, tmp.length());

	pos = tmp.find('/');
	OrderToGiveVacation = tmp.substr(0, pos);
	tmp = tmp.substr(pos + 1, tmp.length());

	pos = tmp.find('/');
	EmploymentHistoryBook = tmp.substr(0, pos);
	tmp = tmp.substr(pos + 1, tmp.length());

	EmploymentContract = tmp;

	cout << "Constructor of Transformation of 5 arguments Documents: " << 
		" OrderToAccept = " << OrderToAccept <<
		" OrderToDismission = " << OrderToDismission <<
		" OrderToGiveVacation = " << OrderToGiveVacation <<
		" EmploymentHistoryBook = " << EmploymentHistoryBook <<
		" EmploymentContract = " << EmploymentContract <<
		endl;
}

Documents::Documents(
	string m_OrderToAccept, 
	string m_OrderToDismission, 
	string m_OrderToGiveVacation, 
	string m_EmploymentHistoryBook, 
	string m_EmploymentContract) : 

	OrderToAccept(m_OrderToAccept),
	OrderToDismission(m_OrderToDismission),
	OrderToGiveVacation(m_OrderToGiveVacation),
	EmploymentHistoryBook(m_EmploymentHistoryBook),
	EmploymentContract(m_EmploymentContract){

	cout << "Constructor of Initialization of 5 arguments Documents" << endl;
}

Documents::Documents(Documents* docs_copyFrom) :
	OrderToAccept(docs_copyFrom->OrderToAccept),
	OrderToDismission(docs_copyFrom->OrderToDismission),
	OrderToGiveVacation(docs_copyFrom->OrderToGiveVacation),
	EmploymentHistoryBook(docs_copyFrom->EmploymentHistoryBook),
	EmploymentContract(docs_copyFrom->EmploymentContract){

	cout << "Copy constructor Documents" << endl;
}

Documents::Documents(PersonalCard* personalCard) : Documents(
	"Accept!", 
	"-", 
	"-", 
	"Employent history book: " + personalCard->MarkInEmploymentHistoryBook, 
	"Contract with " + personalCard->FirstName){

	// peretvorennya
	cout << "Creating object Documents from PersonalCard\n";

}

Documents::~Documents() {
	cout << "Destroying object Documents\n";
}

std::string Documents::Create()
{
	return "";
}