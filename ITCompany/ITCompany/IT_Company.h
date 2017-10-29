/***********************************************************************
 * Module:  IT_Company.h
 * Author:  Блінков Євген
 * Modified: 11 жовтня 2017 р. 19:27:49
 * Purpose: Declaration of the class IT_Company
 ***********************************************************************/
#include <iostream>
#include <string>
#include <vector>
#include "HR.h"
#include "Employee.h"
using namespace std;
#if !defined(__Viddilkadriv_IT_Company_h)
#define __Viddilkadriv_IT_Company_h

class HR;
class Employee;

class IT_Company
{
public:
	IT_Company();

	IT_Company::IT_Company(IT_Company* copyFrom); 
	IT_Company(string companyName);
	IT_Company(int EmployeeNum,string companyName);

	~IT_Company();//деструктор

	int RecruitPeople(void);

	HR* hr;
	vector<Employee> employee;
protected:
private:
	std::string NameOfCompany;
	int AmountofEmployees;
};
#endif