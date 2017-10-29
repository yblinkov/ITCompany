#include "HR.h"

void HR::copy(HR const& hr_copyFrom) {
	cout << "Copy constructor HR" << endl;
	Firstname = hr_copyFrom.Firstname;
	Position = hr_copyFrom.Position;
	IsOrdered = hr_copyFrom.IsOrdered;
	docs = new Documents(hr_copyFrom.docs);
};

HR::HR() : HR("Ivan Ivanovych Ivanov", "Head of HR", false) {
    cout << "Default Constructor of class HR" << endl;
}

HR::HR(string m_Firstname, string m_Position, bool m_IsOrdered) {
    cout << "Constructor of Inicialization 3 arguments of HR" << endl;
    string Firstname = m_Firstname;
    string Position = m_Position;
    bool IsOrdered = m_IsOrdered;

    docs = new Documents();
}

HR::HR(HR &const hr_copyFrom) {
    cout << "Copy constructor HR" << endl;
    Firstname = hr_copyFrom.Firstname;
    Position = hr_copyFrom.Position;
    IsOrdered = hr_copyFrom.IsOrdered;
	docs = new Documents(hr_copyFrom.docs);
}

HR::~HR() {
    std::cout << "Destroying object HR\n";
	delete docs;
}