#include "HR.h"

HR::HR() : HR("", "", false) {
    cout << "Default Constructor of class HR" << endl;
}

HR::HR(string m_Firstname, string m_Position, bool m_IsOrdered) : Firstname(m_Firstname), Position(m_Position), IsOrdered(m_IsOrdered){
    cout << "Constructor of Inicialization 3 arguments of HR" << endl;
    docs.push_back(new Documents());
}

HR::HR(HR &const hr_copyFrom) : Firstname(hr_copyFrom.Firstname), Position(hr_copyFrom.Position), IsOrdered(hr_copyFrom.IsOrdered){
    cout << "Copy constructor HR" << endl;
	docs.push_back(new Documents(hr_copyFrom.docs[0]));
}

HR::HR(string fromString) {
	string tmp = fromString;

	int pos = tmp.find('/');
	Firstname = tmp.substr(0, pos);
	tmp = tmp.substr(0, tmp.length());

	Position = tmp;

	cout << "Constructor of Transformation of 5 arguments HR: ";
}

HR::~HR() {
    std::cout << "Destroying object HR\n";
	docs.clear();
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
