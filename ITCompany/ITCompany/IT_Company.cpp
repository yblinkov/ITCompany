#include "HR.h"
#include "Employee.h"
#include "IT_Company.h"

int IT_Company::RecruitPeople()
{
   // TODO : implement
	return 1;
}

IT_Company::IT_Company(int EmployeeNum, string companyName){
	cout << "Constructor of Inicialization 2 arguments" << endl;
	AmountofEmployees = EmployeeNum;
	NameOfCompany = companyName;

	employee.push_back(new Employee());
}

IT_Company::IT_Company(string companyName) : IT_Company(1, companyName){
	cout << "Constructor of Inicialization 1 argument of IT_Company" << endl;
}

IT_Company::IT_Company(): IT_Company("Default company") {
	cout << "Default Constructor of class IT_Company" << endl;
}

IT_Company::IT_Company(IT_Company* copyFrom) {
	cout << "Copy constructor IT_Company" << endl;

	AmountofEmployees = copyFrom->AmountofEmployees;
	NameOfCompany = copyFrom->NameOfCompany;
	hr.copy(copyFrom->hr); 
	employee = copyFrom->employee;
}

IT_Company::~IT_Company(){
	std::cout << "Destroying object IT_Company\n";
	employee.clear();
}
