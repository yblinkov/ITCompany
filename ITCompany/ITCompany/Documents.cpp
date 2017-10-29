/***********************************************************************
 * Module:  Documents.cpp
 * Author:  Блінков Євген
 * Modified: 12 жовтня 2017 р. 8:33:33
 * Purpose: Implementation of the class Documents
 ***********************************************************************/

#include "HR.h"
#include "Documents.h"


////////////////////////////////////////////////////////////////////////
// Name:       Documents::Create()
// Purpose:    Implementation of Documents::Create()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Documents::Create()
{
   // TODO : implement
	return "";
}Documents::Documents() :Documents("Accept!", "-", "-", "stazh 5 rokiv", "Contract!"){
	cout << "Default Constructor of class Documents" << endl;
}
Documents::Documents(
	string m_OrderToAccept, 
	string m_OrderToDismission, 
	string m_OrderToGiveVacation, 
	string m_EmploymentHistoryBook, 
	string m_EmploymentContract){

	cout << "Constructor of Inicialization of 5 arguments Documents" << endl;
	string OrderToAccept = m_OrderToAccept;
	string OrderToDismission = m_OrderToDismission;
	string OrderToGiveVacation = m_OrderToGiveVacation;
	string EmploymentHistoryBook = m_EmploymentHistoryBook;
	string EmploymentContract = m_EmploymentContract;


}

Documents::Documents(Documents* docs_copyFrom){//конструктор копіювання
	cout << "Copy constructor Documents" << endl;
	OrderToAccept = docs_copyFrom->OrderToAccept;
	OrderToDismission = docs_copyFrom->OrderToDismission;
	OrderToGiveVacation = docs_copyFrom->OrderToGiveVacation;
	EmploymentHistoryBook = docs_copyFrom->EmploymentHistoryBook;
	EmploymentContract = docs_copyFrom->EmploymentContract;
}

Documents::Documents(PersonalCard* personalCard) :Documents(
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