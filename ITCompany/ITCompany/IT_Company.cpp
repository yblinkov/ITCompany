/***********************************************************************
 * Module:  IT_Company.cpp
 * Author:  Блінков Євген
 * Modified: 11 жовтня 2017 р. 19:27:49
 * Purpose: Implementation of the class IT_Company
 ***********************************************************************/

#include "HR.h"
#include "Employee.h"
#include "IT_Company.h"


////////////////////////////////////////////////////////////////////////
// Name:       IT_Company::RecruitPeople()
// Purpose:    Implementation of IT_Company::RecruitPeople()
// Return:     int
////////////////////////////////////////////////////////////////////////
int IT_Company::RecruitPeople()
{
   // TODO : implement
	return 1;
}
IT_Company::IT_Company(int EmployeeNum, string companyName){
	cout << "Constructor of Inicialization 2 arguments" << endl;
	AmountofEmployees = EmployeeNum;
	NameOfCompany = companyName;
	hr = new HR();
	HR hr2(hr);
	employee.push_back(new Employee());
}

IT_Company::IT_Company(string companyName) : IT_Company(1, companyName){
	cout << "Constructor of Inicialization 1 argument of IT_Company" << endl;
}


IT_Company::IT_Company(): IT_Company("Default company") {
	cout << "Default Constructor of class IT_Company" << endl;
}

// copy constructor - copy from constant. for example: IT_Company company; 
//IT_Company::IT_Company(IT_Company const& copyFrom) {
//	cout << "Copy constructor" << endl;
//	AmountofEmployees = copyFrom.AmountofEmployees;
//	NameOfCompany = copyFrom.NameOfCompany;
//	hr = copyFrom.hr; 
//	employee = copyFrom.employee;
//}

// copy constructor - copy from reference. for example: IT_Company* company = new IT_Company(); 
IT_Company::IT_Company(IT_Company* copyFrom) {
	cout << "Copy constructor IT_Company" << endl;
	AmountofEmployees = copyFrom->AmountofEmployees;
	NameOfCompany = copyFrom->NameOfCompany;
	hr = copyFrom->hr; 
	employee = copyFrom->employee;
}

IT_Company::~IT_Company(){
	std::cout << "Destroying object IT_Company\n";
	if (hr != NULL) {
		delete hr;
		hr = NULL;
	}
	
	employee.clear();
}
