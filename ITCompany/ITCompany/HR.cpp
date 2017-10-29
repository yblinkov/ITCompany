/***********************************************************************
 * Module:  HR.cpp
 * Author:  Блінков Євген
 * Modified: 17 жовтня 2017 р. 23:03:57
 * Purpose: Implementation of the class HR
 ***********************************************************************/

#include "HR.h"

////////////////////////////////////////////////////////////////////////
// Name:       HR::WriteOrderInPersonalCard()
// Purpose:    Implementation of HR::WriteOrderInPersonalCard()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string HR::WriteOrderInPersonalCard()
{
   // TODO : implement
	return "";
}

////////////////////////////////////////////////////////////////////////
// Name:       HR::AllowToGoOnBusinessTrip()
// Purpose:    Implementation of HR::AllowToGoOnBusinessTrip()
// Return:     int
////////////////////////////////////////////////////////////////////////

int HR::AllowToGoOnBusinessTrip()
{
   // TODO : implement
	return 1;
}

////////////////////////////////////////////////////////////////////////
// Name:       HR::AllowToGoOnTrainingCourses()
// Purpose:    Implementation of HR::AllowToGoOnTrainingCourses()
// Return:     int
////////////////////////////////////////////////////////////////////////

int HR::AllowToGoOnTrainingCourses()
{
   // TODO : implement
	return 1;
}

////////////////////////////////////////////////////////////////////////
// Name:       HR::AllowToGoOnVacation()
// Purpose:    Implementation of HR::AllowToGoOnVacation()
// Return:     int
////////////////////////////////////////////////////////////////////////

int HR::AllowToGoOnVacation()
{
   // TODO : implement
	return 1;
}

////////////////////////////////////////////////////////////////////////
// Name:       HR::AllowToTakeTheHospital()
// Purpose:    Implementation of HR::AllowToTakeTheHospital()
// Return:     int
////////////////////////////////////////////////////////////////////////

int HR::AllowToTakeTheHospital()
{
   // TODO : implement
	return 1;
}

////////////////////////////////////////////////////////////////////////
// Name:       HR::ReturnDocs()
// Purpose:    Implementation of HR::ReturnDocs()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string HR::ReturnDocs()
{
   // TODO : implement
	return "";
}

////////////////////////////////////////////////////////////////////////
// Name:       HR::GivingAChangesInPersonalCardofWorker()
// Purpose:    Implementation of HR::GivingAChangesInPersonalCardofWorker()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string HR::GivingAChangesInPersonalCardofWorker()
{
   // TODO : implement
	return "";
}

////////////////////////////////////////////////////////////////////////
// Name:       HR::PuttingMarkOfReckoningInEmploymentHistoryBook()
// Purpose:    Implementation of HR::PuttingMarkOfReckoningInEmploymentHistoryBook()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string HR::PuttingMarkOfReckoningInEmploymentHistoryBook()
{
   // TODO : implement
	return "";
}

////////////////////////////////////////////////////////////////////////
// Name:       HR::AddingToAPersonalCardMarkThatDocumentsAreReturned()
// Purpose:    Implementation of HR::AddingToAPersonalCardMarkThatDocumentsAreReturned()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string HR::AddingToAPersonalCardMarkThatDocumentsAreReturned()
{
   // TODO : implement
	return "";
}

////////////////////////////////////////////////////////////////////////
// Name:       HR::PuttingAMarkInEmploymentHistoryBook()
// Purpose:    Implementation of HR::PuttingAMarkInEmploymentHistoryBook()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string HR::PuttingAMarkInEmploymentHistoryBook()
{
   // TODO : implement
	return "";
}
HR::HR():HR("Ivan Ivanovych Ivanov","Head of HR",false){
	cout << "Default Constructor of class HR" << endl;
}
HR::HR(string m_Firstname, string m_Position, bool m_IsOrdered){
	cout << "Constructor of Inicialization 3 arguments of HR" << endl;
	string Firstname = m_Firstname;
	string Position = m_Position;
	bool IsOrdered = m_IsOrdered;
	docs = new Documents();
	Documents docs2(docs);
}

HR::HR(HR* hr_copyFrom){//конструктор копіювання
	cout << "Copy constructor HR" << endl;
	Firstname = hr_copyFrom->Firstname;
	Position = hr_copyFrom->Position;
	IsOrdered = hr_copyFrom->IsOrdered;
	docs = hr_copyFrom->docs;
	
}
HR::~HR() {
	std::cout << "Destroying object HR\n";
}