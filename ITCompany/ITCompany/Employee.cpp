#include "PersonalCard.h"
#include "Employee.h"

Employee::Employee() : Employee("11.11.11", "prosto!", 666, "12.12.12", "neprosto!", 13, "13.13.13") {
    cout << "Default Constructor of class Employee" << endl;
}

Employee::Employee(string m_DateOfAcception, 
	string m_CauseOfAcception,
	int m_NumberOfAcceptionalOrder,
    string m_DateOfDismiss,
	string m_CauseOfDismission, 
	int m_NumberOfDismissalOrder,
	string m_DateOfReturningMoney) :

	DateOfAcception(m_CauseOfAcception), 
	CauseOfAcception(m_CauseOfAcception), 
	NumberOfAcceptionalOrder(m_NumberOfAcceptionalOrder),
	DateOfDismiss(m_DateOfDismiss),
	CauseOfDismission(m_CauseOfDismission),
	NumberOfDismissalOrder(m_NumberOfDismissalOrder),
	DateOfReturningMoney(m_DateOfReturningMoney){

    cout << "Constructor of Inicialization of 7 arguments" << endl;
    personalCard = new PersonalCard();
    PersonalCard personalCard2(personalCard);
}

Employee::Employee(Employee *e_copyFrom) :
	DateOfAcception(e_copyFrom->DateOfAcception), 
	CauseOfAcception(e_copyFrom->CauseOfAcception), 
	NumberOfAcceptionalOrder(e_copyFrom->NumberOfAcceptionalOrder), 
	DateOfDismiss(e_copyFrom->DateOfDismiss), 
	CauseOfDismission(e_copyFrom->CauseOfDismission), 
	NumberOfDismissalOrder(e_copyFrom->NumberOfDismissalOrder), 
	DateOfReturningMoney(e_copyFrom->DateOfReturningMoney),
	personalCard(e_copyFrom->personalCard){

    cout << "Copy constructor Employee" << endl;
  }

Employee::~Employee() {
    std::cout << "Destroying object Employee\n";
}

void Employee::Dismiss() {
}

std::string Employee::GetNewPosition() {
	return "";
}

int Employee::GoOnTrainingCourses() {
	return 1;
}

std::string Employee::GiveResume() {
	return "";
}

std::string Employee::AcceptEmploymentContract() {
	return "";
}
