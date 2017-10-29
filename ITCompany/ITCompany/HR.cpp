#include "HR.h"

std::string HR::WriteOrderInPersonalCard() {
    // TODO : implement
    return "";
}

int HR::AllowToGoOnBusinessTrip() {
    // TODO : implement
    return 1;
}

int HR::AllowToGoOnTrainingCourses() {
    // TODO : implement
    return 1;
}

int HR::AllowToGoOnVacation() {
    // TODO : implement
    return 1;
}

int HR::AllowToTakeTheHospital() {
    // TODO : implement
    return 1;
}

std::string HR::ReturnDocs() {
    // TODO : implement
    return "";
}

std::string HR::GivingAChangesInPersonalCardofWorker() {
    // TODO : implement
    return "";
}

std::string HR::PuttingMarkOfReckoningInEmploymentHistoryBook() {
    // TODO : implement
    return "";
}

std::string HR::AddingToAPersonalCardMarkThatDocumentsAreReturned() {
    // TODO : implement
    return "";
}

std::string HR::PuttingAMarkInEmploymentHistoryBook() {
    // TODO : implement
    return "";
}

HR::HR() : HR("Ivan Ivanovych Ivanov", "Head of HR", false) {
    cout << "Default Constructor of class HR" << endl;
}

HR::HR(string m_Firstname, string m_Position, bool m_IsOrdered) {
    cout << "Constructor of Inicialization 3 arguments of HR" << endl;
    string Firstname = m_Firstname;
    string Position = m_Position;
    bool IsOrdered = m_IsOrdered;
    docs = new Documents();
    Documents docs2(docs);
}

HR::HR(HR *hr_copyFrom) {
    cout << "Copy constructor HR" << endl;
    Firstname = hr_copyFrom->Firstname;
    Position = hr_copyFrom->Position;
    IsOrdered = hr_copyFrom->IsOrdered;
    docs = hr_copyFrom->docs;
}

HR::~HR() {
    std::cout << "Destroying object HR\n";
}