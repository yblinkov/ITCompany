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
	~HR();
	string WriteOrderInPersonalCard(int i);
	int AllowToGoOnBusinessTrip(void);
	int AllowToGoOnTrainingCourses(void);
	int AllowToGoOnVacation(void);
	int AllowToTakeTheHospital(void);
	string ReturnDocs(int i);
	string GivingAChangesInPersonalCardofWorker();
	string PuttingMarkOfReckoningInEmploymentHistoryBook(void);
	string AddingToAPersonalCardMarkThatDocumentsAreReturned(void);
	string PuttingAMarkInEmploymentHistoryBook(void);

	void SetFirstname(string v_Firstname);
	void SetPosition(string v_Position);
	void SetIsOrdered(bool v_IsOrdered);
	string GetFirstname();
	string GetPosition();
	bool GetIsOrdered();
	bool CheckIsOrdered(bool isOrdered);
protected:
private:
	string Firstname;
	string Position;
	bool IsOrdered;
	string HR_Utility(int i);
	vector<Documents> docs;
};

#endif