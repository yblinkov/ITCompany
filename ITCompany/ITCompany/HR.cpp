#include "HR.h"

HR::HR() {
	docs.push_back(Documents());
}

HR::~HR() {
	docs.clear();
}

string HR::HR_Utility(int i) {
	string order = docs[i].GetOrderToDismission();
	if (docs[i].CheckOrderToDismiss(order)) {
		return docs[i].GetOrderToDismission();
	}
	return "";
}

std::string HR::WriteOrderInPersonalCard(int i)
{

	cout << "<========Area of HR========>" << endl;
	docs.push_back(Documents());
	docs[i].Create();
	cout << "<========End Of Area of HR========>" << endl;
	return "";
}

int HR::AllowToGoOnBusinessTrip()
{
	return 1;
}

int HR::AllowToGoOnTrainingCourses()
{
	return 1;
}

int HR::AllowToGoOnVacation()
{
	return 1;
}

int HR::AllowToTakeTheHospital()
{
	return 1;
}

std::string HR::ReturnDocs(int i)
{
	return HR_Utility(i);;
}

std::string HR::GivingAChangesInPersonalCardofWorker()
{
	return "";
}

std::string HR::PuttingMarkOfReckoningInEmploymentHistoryBook()
{
	return "";
}

std::string HR::AddingToAPersonalCardMarkThatDocumentsAreReturned()
{
	return "";
}

std::string HR::PuttingAMarkInEmploymentHistoryBook()
{
	return "";
}
void HR::SetFirstname(string v_Firstname) {
	Firstname = v_Firstname;
}

void HR::SetPosition(string v_Position) {
	Position = v_Position;
}

void HR::SetIsOrdered(bool v_IsOrdered) {
	IsOrdered = v_IsOrdered;
}

string HR::GetFirstname() {
	return Firstname;
}

string HR::GetPosition() {
	return Position;
}

bool HR::GetIsOrdered() {
	return IsOrdered;
}

bool HR::CheckIsOrdered(bool v_IsOrdered) {
	if (v_IsOrdered == false) {
		return false;
	}
}