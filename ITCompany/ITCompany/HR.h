#include <iostream>
#include "String"
#include "PersonalCard.h"
#include "Documents.h"
#include <vector>

#if !defined(__Viddilkadriv_HR_h)
#define __Viddilkadriv_HR_h

class PersonalCard;

class Documents;

///HR class
class HR {
public:
	///Default constructor
	HR();
	///Destructor
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
	/// first name
	string Firstname;
	///position
	string Position;
	///is ordered
	bool IsOrdered;
	/// utility funtioin
	string HR_Utility(int i);
	/// contains Documents
	vector<Documents> docs;
};

#endif
