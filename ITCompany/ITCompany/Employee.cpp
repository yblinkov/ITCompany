/***********************************************************************
 * Module:  Employee.cpp
 * Author:  Блінков Євген
 * Modified: 17 жовтня 2017 р. 22:58:21
 * Purpose: Implementation of the class Employee
 ***********************************************************************/

#include "PersonalCard.h"
#include "Employee.h"

////////////////////////////////////////////////////////////////////////
// Name:       Employee::Dismiss()
// Purpose:    Implementation of Employee::Dismiss()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Employee::Dismiss()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Employee::GetNewPosition()
// Purpose:    Implementation of Employee::GetNewPosition()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Employee::GetNewPosition()
{
   // TODO : implement
	return "";
}

////////////////////////////////////////////////////////////////////////
// Name:       Employee::GoOnTrainingCourses()
// Purpose:    Implementation of Employee::GoOnTrainingCourses()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Employee::GoOnTrainingCourses()
{
   // TODO : implement
	return 1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Employee::GiveResume()
// Purpose:    Implementation of Employee::GiveResume()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Employee::GiveResume()
{
   // TODO : implement
	return "";
}

////////////////////////////////////////////////////////////////////////
// Name:       Employee::AcceptEmploymentContract()
// Purpose:    Implementation of Employee::AcceptEmploymentContract()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Employee::AcceptEmploymentContract()
{
   // TODO : implement
	return "";
}
Employee::Employee() :Employee("11.11.11","prosto!",666,"12.12.12","neprosto!",13,"13.13.13"){
	cout << "Default Constructor of class Employee" << endl;
}
Employee::Employee(string m_DateOfAcception,string m_CauseOfAcception,int m_NumberOfAcceptionalOrder,string m_DateOfDismiss,string m_CauseOfDismission,int m_NumberOfDismissalOrder,string m_DateOfReturningMoney){
	cout << "Constructor of Inicialization of 7 arguments" << endl;
	string DateOfAcception=m_CauseOfAcception;
	string CauseOfAcception = m_CauseOfAcception;
	int NumberOfAcceptionalOrder = m_NumberOfAcceptionalOrder;
	string DateOfDismiss = m_DateOfDismiss;
	string CauseOfDismission = m_CauseOfDismission;
	int NumberOfDismissalOrder = m_NumberOfDismissalOrder;
	string DateOfReturningMoney = m_DateOfReturningMoney;
	personalCard = new PersonalCard();
	PersonalCard personalCard2(personalCard);


} 

Employee::Employee(Employee* e_copyFrom){//конструктор копіювання
	cout << "Copy constructor Employee" << endl;
	DateOfAcception = e_copyFrom->DateOfAcception;
	CauseOfAcception = e_copyFrom->CauseOfAcception;
	NumberOfAcceptionalOrder = e_copyFrom->NumberOfAcceptionalOrder;
	DateOfDismiss = e_copyFrom->DateOfDismiss;
	CauseOfDismission = e_copyFrom->CauseOfDismission;
	NumberOfDismissalOrder = e_copyFrom->NumberOfDismissalOrder;
	DateOfReturningMoney = e_copyFrom->DateOfReturningMoney;
	personalCard = e_copyFrom->personalCard;

}
Employee::~Employee() {
	std::cout << "Destroying object Employee\n";
}