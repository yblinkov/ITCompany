#include "HR.h"
#include "Employee.h"
#include "IT_Company.h"

IT_Company::IT_Company() :
	NameOfCompany(""),
	AmountofEmployees(0),
	hr(HR()) {
	employee.push_back(Employee());
}

IT_Company::~IT_Company() {
	employee.clear();
}

int IT_Company::IT_Utility() {

	bool v_isOrdered = false;
	int v_AmountofEmployees = 0;
	string key = "";
	string v_Firstname = "";
	string v_Position = "";
	string choice = "";
	cout << "If we want to lead employees we need to create HR with Head of HR" << endl;
	cout << "Let`s create a head of HR" << endl;
	cout << "Input name of head: ";
	cin >> v_Firstname;
	hr.SetFirstname(v_Firstname);
	cout << "Name of the Head of HR is - " << hr.GetFirstname() << endl;
	cout << "Input Position of Head of HR: ";
	cin >> v_Position;
	hr.SetPosition(v_Position);
	cout << "Position of the Head of HR is - " << hr.GetPosition() << endl;
	cout << "Well!You have a Head of HR.Now he can hire employees" << endl;

	while (key != "yes" && key != "no") {
		cout << endl << endl << "Do you want to recruit new people?.Write 'yes' to recruit or 'no'" << endl;
		cout << "Your choise is: ";
		cin >> key;
		if (key == "yes") {
			hr.SetIsOrdered(true);
		}
		if (key == "no") {
			hr.SetIsOrdered(false);
		}
		if (key != "yes" && key != "no") {
			cout << "You have written wrong value!Try again." << endl;
		}
	}
	if (hr.CheckIsOrdered(hr.GetIsOrdered())) {
		cout << "Your choise is - " << hr.GetIsOrdered() << endl;
		cout << "Let`s recruit some people..." << endl;
		do {
			cout << "How many of people do you want to recruit?Input amount of employees: ";
			cin >> v_AmountofEmployees;
			if (!CheckAmountofEmployees(v_AmountofEmployees)) {
				cout << "You have written wrong value!Try again." << endl;
			}
		} while (!CheckAmountofEmployees(v_AmountofEmployees));
		SetAmountofEmployees(v_AmountofEmployees);
		cout << "Your number of employees is - " << GetAmountofEmployees() << endl;
		cout << v_AmountofEmployees << " employees want to accept employment contract with Head of HR" << endl;
		for (int i = 0; i < v_AmountofEmployees; i++) {
			employee.push_back(Employee());
			cout << i + 1 << " - employee want to accept employment contract" << endl;
			employee[i].AcceptEmploymentContract();

		}
		cout << "Contracts are accepted.So let`s write orders to Personal Card..." << endl;
		cout << "We need to create some orders for " << v_AmountofEmployees << " employees " << endl;
		for (int i = 0; i < v_AmountofEmployees; i++) {
			cout << "Writing orders to " << i + 1 << " - employee in personal card" << endl;
			hr.WriteOrderInPersonalCard(i);
			if (hr.ReturnDocs(i) == "Dismiss!") {
				cout << "Dismissing the " << i + 1 << " Employee" << endl;
				employee[i].Dismiss();
			}
		}
		return 1;
	}
	else {
		cout << "Your choise is - " << hr.GetIsOrdered() << endl;
	}
}
int IT_Company::RecruitPeople()
{
	string v_NameOfCompany;
	cout << "<==================Area of IT-Company===============>" << endl;
	cout << "Before recruiting people you need to create IT-company,so let`s set name of IT-company:";
	cin >> v_NameOfCompany;
	SetNameOfCompany(v_NameOfCompany);
	cout << "Your name of company is - " << GetNameOfCompany() << endl;
	IT_Utility();
	return 1;
	cout << "<==================End Of Area of IT-Company===============>" << endl;
}

void IT_Company::SetNameOfCompany(string v_NameOfCompany) {
	NameOfCompany = v_NameOfCompany;
}

void IT_Company::SetAmountofEmployees(int v_AmountofEmployees) {
	AmountofEmployees = v_AmountofEmployees;
}

string IT_Company::GetNameOfCompany() {
	return NameOfCompany;
}

int IT_Company::GetAmountofEmployees() {
	return AmountofEmployees;
}

bool IT_Company::CheckAmountofEmployees(int amountOfEmployees) {
	if (amountOfEmployees == 0) {
		return false;
	}
}

