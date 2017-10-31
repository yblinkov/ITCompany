#include "PersonalCard.h"
#include "Employee.h"

Employee::Employee() :
	DateOfAcception(""),
	CauseOfAcception(""),
	NumberOfAcceptionalOrder(0),
	DateOfDismiss(""),
	CauseOfDismission(""),
	NumberOfDismissalOrder(0),
	DateOfReturningMoney(""){
    cout << "Default Constructor of class Employee" << endl;
}

Employee::Employee(
	string m_DateOfAcception, 
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
	DateOfReturningMoney(m_DateOfReturningMoney),
	personalCard(PersonalCard()){

    cout << "Constructor of Inicialization of 7 arguments of class Employee" << endl;

}

Employee::Employee(const Employee& e_copyFrom) :
	DateOfAcception(e_copyFrom.DateOfAcception),
	CauseOfAcception(e_copyFrom.CauseOfAcception),
	NumberOfAcceptionalOrder(e_copyFrom.NumberOfAcceptionalOrder),
	DateOfDismiss(e_copyFrom.DateOfDismiss),
	CauseOfDismission(e_copyFrom.CauseOfDismission),
	NumberOfDismissalOrder(e_copyFrom.NumberOfDismissalOrder),
	DateOfReturningMoney(e_copyFrom.DateOfReturningMoney),
	personalCard(e_copyFrom.personalCard){

    cout << "Copy constructor Employee" << endl;
}


Employee::Employee(string fromString) {
	string tmp = fromString;

	int pos = tmp.find('/');
	DateOfAcception = tmp.substr(0, pos);
	tmp = tmp.substr(pos + 1, tmp.length());

	pos = tmp.find('/');
	CauseOfAcception = tmp.substr(0, pos);
	tmp = tmp.substr(pos + 1, tmp.length());

	pos = tmp.find('/');
	DateOfDismiss = tmp.substr(0, pos);
	tmp = tmp.substr(pos + 1, tmp.length());

	pos = tmp.find('/');
	CauseOfDismission = tmp.substr(0, pos);
	tmp = tmp.substr(pos + 1, tmp.length());

	DateOfReturningMoney = tmp;

	cout << "Constructor of Transformation of 5 arguments Employee: ";
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
