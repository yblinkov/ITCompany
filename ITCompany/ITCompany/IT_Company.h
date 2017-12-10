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

/// ITCompany class
class IT_Company {

public:

    IT_Company();

	/// Destructor
    ~IT_Company();

    int RecruitPeople(void);
	
	/// Contains HR
    HR hr;

	void SetNameOfCompany(string v_NameOfCompany);
	void SetAmountofEmployees(int v_AmountofEmployees);
	string GetNameOfCompany();
	int GetAmountofEmployees();
	bool CheckAmountofEmployees(int v_AmountofEmployees);
protected:
private:
	/// Contains Employees
	vector<Employee> employee;
	/// Contains Company Name
    string NameOfCompany;
	///Contains number of employees
    int AmountofEmployees;
	/// Utility function
	int IT_Utility();
};

#endif