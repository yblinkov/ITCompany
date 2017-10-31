#include "HR.h"
#include "Employee.h"
#include "IT_Company.h"

IT_Company::IT_Company() :
		NameOfCompany(""),
		AmountofEmployees(0),
		hr(HR()){

	//����������� �� �����������
	cout << "Default Constructor of class IT_Company" << endl;
}

IT_Company::IT_Company(int EmployeeNum, string companyName) :
		AmountofEmployees(EmployeeNum),
		NameOfCompany(companyName),
		hr(HR()){

	//����������� ����������� 2 ���������
	cout << "Constructor of Inicialization 2 arguments of IT_Company" << endl;
	
	employee.push_back(new Employee());
}

//����������� ���������
IT_Company::IT_Company(IT_Company* copyFrom) : 
	AmountofEmployees(copyFrom->AmountofEmployees), 
	NameOfCompany(copyFrom->NameOfCompany), 
	hr(HR(copyFrom->hr)) {

	cout << "Copy constructor IT_Company" << endl; 
}

IT_Company::IT_Company(string fromString) {
	int pos = fromString.find('/');
	string companyNameStr = fromString.substr(0, pos);
	string amountOfEmployeesStr = fromString.substr(pos + 1, fromString.length());

	NameOfCompany = companyNameStr;
	AmountofEmployees = atoi(amountOfEmployeesStr.c_str());

	cout << 
		"'ITCompany' was initialized (transform constructor) with params: " <<
		" NameOfCompany = " << NameOfCompany <<
		" AmountofEmployees = " << AmountofEmployees
		<< endl;
}

//����������
IT_Company::~IT_Company(){
	std::cout << "Destroying object IT_Company\n";
	employee.clear();
}

int IT_Company::RecruitPeople()
{
	return 1;
}
