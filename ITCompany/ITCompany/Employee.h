/***********************************************************************
 * Module:  Employee.h
 * Author:  Блінков Євген
 * Modified: 17 жовтня 2017 р. 22:58:21
 * Purpose: Declaration of the class Employee
 ***********************************************************************/
#include <iostream>
#include "String"
#include "PersonalCard.h"
using namespace std;
#if !defined(__Viddilkadriv_Employee_h)
#define __Viddilkadriv_Employee_h
class PersonalCard;
class Employee
{
public:
	Employee();//конструктор за замовчуванням
	Employee(string m_DateOfAcception, string m_CauseOfAcception, int m_NumberOfAcceptionalOrder, string m_DateOfDismiss, string m_CauseOfDismission, int m_NumberOfDismissalOrder, string m_DateOfReturningMoney);
	Employee::Employee(Employee* copyFrom);
	~Employee();
   void Dismiss(void);
   std::string GetNewPosition(void);
   int GoOnTrainingCourses(void);
   std::string GiveResume(void);
   std::string AcceptEmploymentContract(void);

protected:
private:
  string DateOfAcception;
  string CauseOfAcception;
   int NumberOfAcceptionalOrder;
  string DateOfDismiss;
  string CauseOfDismission;
   int NumberOfDismissalOrder;
  string DateOfReturningMoney;
   PersonalCard personalCard;
};

#endif