#include "PersonalCard.h"
#include "Employee.h"
Employee::Employee() : Employee("11.11.11", "prosto!", 666, "12.12.12", "neprosto!", 13, "13.13.13") {
    cout << "Default Constructor of class Employee" << endl;
}

Employee::Employee(string m_DateOfAcception, string m_CauseOfAcception, int m_NumberOfAcceptionalOrder,
                   string m_DateOfDismiss, string m_CauseOfDismission, int m_NumberOfDismissalOrder,
                   string m_DateOfReturningMoney) {
    cout << "Constructor of Inicialization of 7 arguments" << endl;
    string DateOfAcception = m_CauseOfAcception;
    string CauseOfAcception = m_CauseOfAcception;
    int NumberOfAcceptionalOrder = m_NumberOfAcceptionalOrder;
    string DateOfDismiss = m_DateOfDismiss;
    string CauseOfDismission = m_CauseOfDismission;
    int NumberOfDismissalOrder = m_NumberOfDismissalOrder;
    string DateOfReturningMoney = m_DateOfReturningMoney;
    personalCard = new PersonalCard();
    PersonalCard personalCard2(personalCard);
}

Employee::Employee(Employee *e_copyFrom) {
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
void Employee::Dismiss() {
	// TODO : implement
}

std::string Employee::GetNewPosition() {
	// TODO : implement
	return "";
}

int Employee::GoOnTrainingCourses() {
	// TODO : implement
	return 1;
}

std::string Employee::GiveResume() {
	// TODO : implement
	return "";
}

std::string Employee::AcceptEmploymentContract() {
	// TODO : implement
	return "";
}
