#include <iostream>
#include "String"
#include "PersonalCard.h"
#include "Documents.h"
#include <vector>

#if !defined(__Viddilkadriv_HR_h)
#define __Viddilkadriv_HR_h

class PersonalCard;

class Documents;

class HR {
public:

    HR();
    HR(string Firstname, string Position, bool IsOrdered);
	HR(HR &const hr_copyFrom);
	HR::HR(string fromString);
    ~HR();
	string WriteOrderInPersonalCard(void);
	int AllowToGoOnBusinessTrip(void);
	int AllowToGoOnTrainingCourses(void);
	int AllowToGoOnVacation(void);
	int AllowToTakeTheHospital(void);
	string ReturnDocs(void);
	string GivingAChangesInPersonalCardofWorker(void);
	string PuttingMarkOfReckoningInEmploymentHistoryBook(void);
	string AddingToAPersonalCardMarkThatDocumentsAreReturned(void);
	string PuttingAMarkInEmploymentHistoryBook(void);

protected:
private:
    string Firstname;
    string Position;
    bool IsOrdered;
    vector<Documents> docs;
};

#endif