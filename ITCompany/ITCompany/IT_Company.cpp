#include "HR.h"
#include "Employee.h"
#include "IT_Company.h"


IT_Company::IT_Company() {//����������� �� �����������
	cout << "Default Constructor of class IT_Company" << endl;
}

IT_Company::IT_Company(string companyName) :NameOfCompany(companyName){//����������� ����������� ������ ���������
	cout << "Constructor of Inicialization 1 argument of IT_Company" << endl;
}

IT_Company::IT_Company(int EmployeeNum, string companyName) :AmountofEmployees(EmployeeNum), NameOfCompany(companyName){//����������� ����������� 2 ���������
	cout << "Constructor of Inicialization 2 arguments of IT_Company" << endl;
	
	employee.push_back(new Employee());
}

IT_Company::IT_Company(IT_Company* copyFrom) :IT_Company(copyFrom->AmountofEmployees, copyFrom->NameOfCompany){//����������� ���������
	cout << "Copy constructor IT_Company" << endl;
	hr.copy(copyFrom->hr);
	copyFrom->employee;
}

IT_Company::~IT_Company(){//����������
	std::cout << "Destroying object IT_Company\n";
	employee.clear();
}
int IT_Company::RecruitPeople()
{
	return 1;
}
