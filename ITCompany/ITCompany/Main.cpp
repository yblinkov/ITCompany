#include "Employee.h"
#include "HR.h"
#include "IT_Company.h"
#include "PersonalCard.h"
#include "Documents.h"

using namespace std;

int main() {
	cout << "Yevgeniy Blinkov    Group IS-63   Number Of Gradebook IS6303 " << endl;
	cout << "<=====================Version 3============================> " << endl;
	cout << "Start modelling..." << endl;

	IT_Company *m_IT_Company1 = new IT_Company();
	string key = "";
	cout << endl << endl << "Do you want to start a program?.Write 'yes' to start or 'no' to finish" << endl;
	while (key != "yes" && key != "no") {
		cout << "Your choise is: ";
		cin >> key;
		if (key != "yes" && key != "no") {
			cout << "No! Please input 'yes' to start or 'no' to finish" << endl;
		}
	}
	if (key == "yes") {
		(*m_IT_Company1).RecruitPeople();
	}
	delete m_IT_Company1;
	cout << endl << endl;
	cout << "Finish modelling." << endl;
	system("pause");

	return 0;
}