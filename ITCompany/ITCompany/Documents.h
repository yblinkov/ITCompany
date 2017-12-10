#include <iostream>
#include "String"

#if !defined(__Viddilkadriv_Documents_h)
#define __Viddilkadriv_Documents_h

class HR;

class Documents {

public:
	Documents();
	~Documents();

	std::string Create();

	std::string EmploymentContract;

	void SetOrderToAccept(string v_OrderToAccept);
	void SetOrderToDismission(string v_OrderToDismission);
	void SetOrderToGiveVacation(string v_OrderToGiveVacation);
	void SetEmploymentHistoryBook(string v_EmploymentHistoryBook);

	string GetOrderToAccept();
	string GetOrderToDismission();
	string GetOrderToGiveVacation();
	string GetEmploymentHistoryBook();
	bool CheckOrderToDismiss(string orderToDismiss);
protected:
private:
	string Docs_Utility();
	string OrderToAccept;
	string OrderToDismission;
	string OrderToGiveVacation;
	string EmploymentHistoryBook;
};

#endif