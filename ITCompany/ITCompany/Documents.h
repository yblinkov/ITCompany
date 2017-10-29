/***********************************************************************
 * Module:  Documents.h
 * Author:  Блінков Євген
 * Modified: 12 жовтня 2017 р. 8:33:33
 * Purpose: Declaration of the class Documents
 ***********************************************************************/
#include <iostream>
#include "String"

#if !defined(__Viddilkadriv_Documents_h)
#define __Viddilkadriv_Documents_h

class HR;

class Documents
{
public:
	Documents();
	Documents(string OrderToAccept, string OrderToDismission, string OrderToGiveVacation, string EmploymentHistoryBook, string EmploymentContract);
	Documents::Documents(Documents* docs_copyFrom);
	Documents(PersonalCard* personalCard);//конструктор перетворення
	~Documents();//деструктор
	std::string Create(void);

	HR* hR;

	std::string EmploymentContract;

protected:
private:
	std::string OrderToAccept;
	std::string OrderToDismission;
	std::string OrderToGiveVacation;
	std::string EmploymentHistoryBook;
};

#endif