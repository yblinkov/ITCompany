#include <iostream>
#include "String"

#if !defined(__Viddilkadriv_Documents_h)
#define __Viddilkadriv_Documents_h

class HR;

/// Documents class
class Documents {

public:
	/// Default constructor
	Documents();
	/// Destructor
	~Documents();

	/// Creation method
	std::string Create();

	/// Employment contract
	std::string EmploymentContract;

	/// Setter Order to accept
	void SetOrderToAccept(string v_OrderToAccept);
	/// Setter Order to dismiss
	void SetOrderToDismission(string v_OrderToDismission);
	/// Setter Order give vacation
	void SetOrderToGiveVacation(string v_OrderToGiveVacation);
	/// Setter employment history book
	void SetEmploymentHistoryBook(string v_EmploymentHistoryBook);

	string GetOrderToAccept();
	string GetOrderToDismission();
	string GetOrderToGiveVacation();
	string GetEmploymentHistoryBook();
	bool CheckOrderToDismiss(string orderToDismiss);
protected:
private:
	/// Utility function
	string Docs_Utility();
	/// Order to accept
	string OrderToAccept;
	/// Order to dismiss
	string OrderToDismission;
	/// Vacation order
	string OrderToGiveVacation;
	/// Employment history
	string EmploymentHistoryBook;
};

#endif