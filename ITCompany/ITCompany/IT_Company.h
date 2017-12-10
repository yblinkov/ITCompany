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

class IT_Company {

public:
    IT_Company();

    ~IT_Company();

    int RecruitPeople(void);

    HR hr;
	void SetNameOfCompany(string v_NameOfCompany);
	void SetAmountofEmployees(int v_AmountofEmployees);
	string GetNameOfCompany();
	int GetAmountofEmployees();
	bool CheckAmountofEmployees(int v_AmountofEmployees);
protected:
private:
	vector<Employee> employee;
    string NameOfCompany;
    int AmountofEmployees;
	int IT_Utility();
};

#endif