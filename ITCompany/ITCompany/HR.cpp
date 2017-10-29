#include "HR.h"
HR::HR() : HR("Ivan Ivanovych Ivanov", "Head of HR", false) {
    cout << "Default Constructor of class HR" << endl;
}

HR::HR(string m_Firstname, string m_Position, bool m_IsOrdered) : Firstname(m_Firstname), Position(m_Position), IsOrdered(m_IsOrdered){
    cout << "Constructor of Inicialization 3 arguments of HR" << endl;
    docs = new Documents();
}

HR::HR(HR &const hr_copyFrom) : Firstname(hr_copyFrom.Firstname), Position(hr_copyFrom.Position), IsOrdered(hr_copyFrom.IsOrdered){
    cout << "Copy constructor HR" << endl;
	docs = new Documents(hr_copyFrom.docs);
}

HR::~HR() {
    std::cout << "Destroying object HR\n";
	delete docs;
}
std::string HR::WriteOrderInPersonalCard()
{
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
std::string HR::ReturnDocs()
{
	return "";
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
void HR::copy(HR const& hr_copyFrom) {
	cout << "Copy constructor HR" << endl;
	Firstname = hr_copyFrom.Firstname;
	Position = hr_copyFrom.Position;
	IsOrdered = hr_copyFrom.IsOrdered;
	docs = new Documents(hr_copyFrom.docs);
};
