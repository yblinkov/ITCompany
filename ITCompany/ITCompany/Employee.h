#include <iostream>
#include "String"
#include "PersonalCard.h"

using namespace std;

#if !defined(__Viddilkadriv_Employee_h)
#define __Viddilkadriv_Employee_h

class PersonalCard;

/// Employee class
class Employee {

public:

	/// Default constructor
	Employee();

	///Destructor
	~Employee();

	/// ORder to dismiss
	void Dismiss(void);

	/// Returns new position
	string GetNewPosition(void);

	/// Sends to training course
	int GoOnTrainingCourses(void);

	/// Returns CV
	string GiveResume(void);

	// Accepts
	string AcceptEmploymentContract(void);
	void SetDateOfAcception(string v_DateOfAcception);
	void SetCauseOfAcception(string v_CauseOfAcception);
	void SetNumberOfAcceptionalOrder(int v_NumberOfAcceptionalOrder);
	void SetDateOfDismiss(string v_DateOfDismiss);
	void SetCauseOfDismission(string v_CauseOfDismission);
	void SetNumberOfDismissalOrder(int v_NumberOfDismissalOrder);
	void SetDateOfReturningMoney(string v_DateOfReturningMoney);

	string GetDateOfAcception();
	string GetCauseOfAcception();
	int GetNumberOfAcceptionalOrder();
	string GetDateOfDismiss();
	string GetCauseOfDismission();
	int GetNumberOfDismissalOrder();
	string GetDateOfReturningMoney();
	bool CheckNumberOfAcceptionalOrder(int numberOfAcceptionalOrder);
	bool CheckNumberOfDismissalOrder(int numberOfDismissalOrder);
protected:
private:
	string DateOfAcception;
	string CauseOfAcception;
	int NumberOfAcceptionalOrder;
	string DateOfDismiss;
	string CauseOfDismission;
	int NumberOfDismissalOrder;
	string DateOfReturningMoney;
	void Employee_Utility_Dismiss();
	void Employee_Utility_Accept();
	PersonalCard personalCard;
};

#endif