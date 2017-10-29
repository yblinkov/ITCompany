#include <iostream>
#include "String"
#include "PersonalCard.h"
#include "Documents.h"

#if !defined(__Viddilkadriv_HR_h)
#define __Viddilkadriv_HR_h

class PersonalCard;

class Documents;

class HR {
public:

    HR();

    HR(string Firstname, string Position, bool IsOrdered);

	HR(HR &const hr_copyFrom);

    ~HR();
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

    Documents* docs;
};

#endif