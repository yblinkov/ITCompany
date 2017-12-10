#include "PersonalCard.h"
#include "Employee.h"

Employee::Employee() :personalCard(PersonalCard()) {
}

Employee::~Employee() {
}

void Employee::Employee_Utility_Accept() {
	string v_DateOfAcception;
	string v_CauseOfAcception;
	int v_NumberOfAcceptionalOrder = 0;
	cout << "Input date of acception: ";
	cin >> v_DateOfAcception;
	SetDateOfAcception(v_DateOfAcception);
	cout << "Your date of acception is - " << GetDateOfAcception() << endl;

	cout << "Input cause of acception: ";
	cin >> v_CauseOfAcception;
	SetCauseOfAcception(v_CauseOfAcception);
	cout << "Your cause of acception is - " << GetCauseOfAcception() << endl;


	while (!CheckNumberOfAcceptionalOrder(v_NumberOfAcceptionalOrder)) {
		cout << "Input number of acceptional order: ";
		cin >> v_NumberOfAcceptionalOrder;
		if (!CheckNumberOfAcceptionalOrder(v_NumberOfAcceptionalOrder)) {
			cout << "You have written wrong value!Try again." << endl;
		}
	}
	SetNumberOfAcceptionalOrder(v_NumberOfAcceptionalOrder);
	cout << "Your number of acceptional order is - " << GetNumberOfAcceptionalOrder() << endl;


}

void Employee::Employee_Utility_Dismiss() {
	string v_DateOfDismiss;
	string v_CauseOfDismission;
	int v_NumberOfDismissalOrder = 0;
	string v_DateOfReturningMoney;
	cout << "To dismiss you need to input some details..." << endl;
	cout << "Input date of dismission: ";
	cin >> v_DateOfDismiss;
	SetDateOfDismiss(v_DateOfDismiss);
	cout << "Your date of dismission is - " << GetDateOfDismiss() << endl;

	cout << "Input cause of dismission: ";
	cin >> v_CauseOfDismission;
	SetCauseOfDismission(v_CauseOfDismission);
	cout << "Your cause of dismission is - " << GetCauseOfDismission() << endl;


	while (!CheckNumberOfDismissalOrder(v_NumberOfDismissalOrder)) {
		cout << "Input number of dismissional order: ";
		cin >> v_NumberOfDismissalOrder;
		if (!CheckNumberOfDismissalOrder(v_NumberOfDismissalOrder)) {
			cout << "You have written wrong value!Try again." << endl;
		}
	}
	SetNumberOfDismissalOrder(v_NumberOfDismissalOrder);
	cout << "Your number of dismissal order is - " << GetNumberOfDismissalOrder() << endl;


	cout << "Input date of Returning money: ";
	cin >> v_DateOfReturningMoney;
	SetDateOfReturningMoney(v_DateOfReturningMoney);
	cout << "Your date of returning money is - " << GetDateOfReturningMoney() << endl;
}

void Employee::Dismiss() {
	Employee_Utility_Dismiss();
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
	cout << "<========Area of Employee========>" << endl;
	cout << "To accept Emlployment Contract you need to input some details..." << endl;
	Employee_Utility_Accept();
	cout << "Then you need to create your Personal Card" << endl;
	personalCard.Create();
	cout << "<========End of Area of Employee========>" << endl;
	return "";
}

void Employee::SetDateOfAcception(string v_DateOfAcception) {
	DateOfAcception = v_DateOfAcception;
}

void Employee::SetCauseOfAcception(string v_CauseOfAcception) {
	CauseOfAcception = v_CauseOfAcception;
}

void Employee::SetNumberOfAcceptionalOrder(int v_NumberOfAcceptionalOrder) {
	NumberOfAcceptionalOrder = v_NumberOfAcceptionalOrder;
}

void Employee::SetDateOfDismiss(string v_DateOfDismiss) {
	DateOfDismiss = v_DateOfDismiss;
}

void Employee::SetCauseOfDismission(string v_CauseOfDismission) {
	CauseOfDismission = v_CauseOfDismission;
}

void Employee::SetNumberOfDismissalOrder(int v_NumberOfDismissalOrder) {
	NumberOfDismissalOrder = v_NumberOfDismissalOrder;
}

void Employee::SetDateOfReturningMoney(string v_DateOfReturningMoney) {
	DateOfReturningMoney = v_DateOfReturningMoney;
}

string Employee::GetDateOfAcception() {
	return DateOfAcception;
}

string Employee::GetCauseOfAcception() {
	return CauseOfAcception;
}

int Employee::GetNumberOfAcceptionalOrder() {
	return NumberOfAcceptionalOrder;
}

string Employee::GetDateOfDismiss() {
	return DateOfDismiss;
}

string Employee::GetCauseOfDismission() {
	return CauseOfDismission;
}
int Employee::GetNumberOfDismissalOrder() {
	return NumberOfDismissalOrder;
}

string Employee::GetDateOfReturningMoney() {
	return DateOfReturningMoney;
}

bool Employee::CheckNumberOfAcceptionalOrder(int numberOfAcceptionalOrder) {
	if (numberOfAcceptionalOrder == 0) {
		return false;
	}
}

bool Employee::CheckNumberOfDismissalOrder(int numberOfDismissalOrder) {
	if (numberOfDismissalOrder == 0) {
		return false;
	}
}