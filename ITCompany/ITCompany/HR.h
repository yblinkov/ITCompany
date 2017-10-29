/***********************************************************************
 * Module:  HR.h
 * Author:  Блінков Євген
 * Modified: 17 жовтня 2017 р. 23:03:57
 * Purpose: Declaration of the class HR
 ***********************************************************************/
#include <iostream>
#include "String"
#include "PersonalCard.h"
#include "Documents.h"

#if !defined(__Viddilkadriv_HR_h)
#define __Viddilkadriv_HR_h
class PersonalCard;
class Documents;
class HR
{
public:
	HR();
	HR(string Firstname, string Position, bool IsOrdered);//конструктор ініціалізації
	//HR(PersonalCard* pc) {//конструктор з аргументом
		//std::cout << "Creating object HR\n";
		//Firstname = pc->FirstName;
	//}
	HR::HR(HR* hr_copyFrom);
	~HR();//деструктор
   std::string WriteOrderInPersonalCard(void);
   int AllowToGoOnBusinessTrip(void);
   int AllowToGoOnTrainingCourses(void);
   int AllowToGoOnVacation(void);
   int AllowToTakeTheHospital(void);
   std::string ReturnDocs(void);
   std::string GivingAChangesInPersonalCardofWorker(void);
   std::string PuttingMarkOfReckoningInEmploymentHistoryBook(void);
   std::string AddingToAPersonalCardMarkThatDocumentsAreReturned(void);
   std::string PuttingAMarkInEmploymentHistoryBook(void);
protected:
private:
   std::string Firstname;
   std::string Position;
   bool IsOrdered;
   Documents docs;
};

#endif