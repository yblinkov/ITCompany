#include "HR.h"
#include "Employee.h"
#include "IT_Company.h"


IT_Company::IT_Company() {//конструктор за замовчанням
	cout << "Default Constructor of class IT_Company" << endl;
}

IT_Company::IT_Company(string companyName) :NameOfCompany(companyName){//конструктор ініціалізації одного аргументу
	cout << "Constructor of Inicialization 1 argument of IT_Company" << endl;
}

IT_Company::IT_Company(int EmployeeNum, string companyName) :AmountofEmployees(EmployeeNum), NameOfCompany(companyName){//конструктор ініціалізації 2 аргументів
	cout << "Constructor of Inicialization 2 arguments of IT_Company" << endl;
	
	employee.push_back(new Employee());
}

IT_Company::IT_Company(IT_Company* copyFrom) :IT_Company(copyFrom->AmountofEmployees, copyFrom->NameOfCompany){//конструктор копіювання
	cout << "Copy constructor IT_Company" << endl;
	hr.copy(copyFrom->hr);
	copyFrom->employee;
}

IT_Company::~IT_Company(){//деструктор
	std::cout << "Destroying object IT_Company\n";
	employee.clear();
}
int IT_Company::RecruitPeople()
{
	return 1;
}
