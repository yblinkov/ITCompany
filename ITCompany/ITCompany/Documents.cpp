#include "HR.h"
#include "Documents.h"

Documents::Documents() {
}

Documents::~Documents() {
}

string Documents::Docs_Utility() {
	cout << "<=Area of Documents=>" << endl;
	string v_OrderToAccept;
	string v_OrderToDismission;
	string v_OrderToGiveVacation;
	string v_EmploymentHistoryBook;
	int document = 0;
	cout << "Creating a document..." << endl;
	cout << "What document would you want to create?" << endl;
	cout << "1 - Order to accept" << endl;
	cout << "2 - Order to dismiss" << endl;
	cout << "3 - Order to give vacation" << endl;
	cout << "4 - Employement contract" << endl;
	while (document == 0) {
		cout << "Input correct option from the list above" << endl;
		cout << "Your option :";
		cin >> document;
		switch (document) {
		case 1: {
			cout << "Input  order to accept: ";
			cin >> v_OrderToAccept;
			SetOrderToAccept(v_OrderToAccept);
			cout << "Your order to accept is - " << GetOrderToAccept() << endl;
			cout << "<=End of Area of Documents=>" << endl;
			return GetOrderToAccept();


		}
		case 2: {
			cout << "Input order to dismiss(Tip:Input 'Dismiss!'): ";
			cin >> v_OrderToDismission;
			SetOrderToDismission(v_OrderToDismission);
			cout << "Your order to dismission is - " << GetOrderToDismission() << endl;
			cout << "<=End of Area of Documents=>" << endl;
			return GetOrderToDismission();
		}
		case 3: {
			cout << "Input order to give vacation: ";
			cin >> v_OrderToGiveVacation;
			SetOrderToGiveVacation(v_OrderToGiveVacation);
			cout << "Your order to give vacation is - " << GetOrderToGiveVacation() << endl;
			cout << "<=End of Area of Documents=>" << endl;
			return GetOrderToGiveVacation();
		}
		case 4: {
			cout << "Input serial nummber of Employment history book: ";
			cin >> v_EmploymentHistoryBook;
			SetEmploymentHistoryBook(v_EmploymentHistoryBook);
			cout << "Your serial nummber of Employment history bookt is - " << GetEmploymentHistoryBook() << endl;
			cout << "<=End of Area of Documents=>" << endl;
			return GetEmploymentHistoryBook();
		}
		default: {
			document = 0;
			cout << "No!You entered wrong option.Please try again" << endl;

		}
		}
	}
}

std::string Documents::Create()
{
	string docs_curier = Docs_Utility();
	return docs_curier;
}

void Documents::SetOrderToAccept(string v_OrderToAccept) {
	OrderToAccept = v_OrderToAccept;
}

void Documents::SetOrderToDismission(string v_OrderToDismission) {
	OrderToDismission = v_OrderToDismission;
}

void Documents::SetOrderToGiveVacation(string v_OrderToGiveVacation) {
	OrderToGiveVacation = v_OrderToGiveVacation;
}
void Documents::SetEmploymentHistoryBook(string v_EmploymentHistoryBook) {
	EmploymentHistoryBook = v_EmploymentHistoryBook;
}

string Documents::GetOrderToAccept() {
	return OrderToAccept;
}

string Documents::GetOrderToDismission() {
	return OrderToDismission;
}

string Documents::GetOrderToGiveVacation() {
	return OrderToGiveVacation;
}

string Documents::GetEmploymentHistoryBook() {
	return EmploymentHistoryBook;
}

bool Documents::CheckOrderToDismiss(string orderToDismiss) {
	if (orderToDismiss == "Dismiss!") return true;
}