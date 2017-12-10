#include "PersonalCard.h"

PersonalCard::PersonalCard() {
}

PersonalCard::~PersonalCard() {
}

void PersonalCard::PC_Utility() {
	string v_FirstName;
	string v_MarkInEmploymentHistoryBook;
	string v_Birthday;
	string v_BirthdayPlace;
	int v_CurrentExperience = 0;
	string v_Position;
	string v_PensionCertificate;
	string v_MedicalInsurance;
	string v_TaxID;
	string v_MaritalStatus;
	int v_Children = 0;
	string v_EducationDocument;
	string v_PassportNumberandSeries;


	cout << "Creating a personal card..." << endl;
	cout << "Input  Firstname: ";
	cin >> v_FirstName;
	SetFirstName(v_FirstName);
	cout << "Your Firstname is - " << GetFirstName() << endl;

	cout << "Input  Firstname: ";
	cin >> v_MarkInEmploymentHistoryBook;
	SetFirstName(v_MarkInEmploymentHistoryBook);
	cout << "Your Mark In Employment History Book is - " << GetMarkInEmploymentHistoryBook() << endl;

	cout << "Input  birthday: ";
	cin >> v_Birthday;
	SetBirthday(v_Birthday);
	cout << "Your birthday is - " << GetBirhday() << endl;

	cout << "Input birthday place: ";
	cin >> v_BirthdayPlace;
	SetBirthdayPlace(v_BirthdayPlace);
	cout << "Your birthday place is - " << GetBirthdayPlace() << endl;


	while (!CheckCurrentExperience(v_CurrentExperience)) {
		cout << "Input current experience in full years(0 - if not full)): ";
		cin >> v_CurrentExperience;
		if (!CheckCurrentExperience(v_CurrentExperience)) {
			cout << "You have written not number value!Try again." << endl;
		}
	}
	SetCurrentExperience(v_CurrentExperience);
	cout << "Your current Experience is - " << GetCurrentExperience() << endl;


	cout << "Input current position: ";
	cin >> v_Position;
	SetPosition(v_Position);
	cout << "Your current position is - " << GetPosition() << endl;

	cout << "Input serial number of pencion certificate: ";
	cin >> v_PensionCertificate;
	SetPensionCertificate(v_PensionCertificate);
	cout << "Your serial number of pencion certificate is - " << GetPensionCertificate() << endl;

	cout << "Input serial number of medical insurance: ";
	cin >> v_MedicalInsurance;
	SetMedicalInsurance(v_MedicalInsurance);
	cout << "Your serial number of medical insurance is - " << GetMedicalInsurance() << endl;

	cout << "Input serial number of TaxID: ";
	cin >> v_TaxID;
	SetTaxID(v_TaxID);
	cout << "Your serial number of TaxID is - " << GetTaxID() << endl;

	cout << "Input your marital status: ";
	cin >> v_MaritalStatus;
	SetMaritalStatus(v_MaritalStatus);
	cout << "Your marital status is - " << GetMaritalStatus() << endl;


	while (!CheckChildren(v_Children)) {
		cout << "Input number of children in your family: ";
		cin >> v_Children;
		if (!CheckChildren(v_Children)) {
			cout << "You have written not number value!Try again." << endl;
		}
	}
	SetChildren(v_Children);
	cout << "Your number of children in your family is - " << GetChildren() << endl;
	cout << "Input serial number of education document : ";
	cin >> v_EducationDocument;
	SetEducationDocument(v_EducationDocument);
	cout << "Your serial number of education document is - " << GetEducationDocument() << endl;

	cout << "Input your passport number and series: ";
	cin >> v_PassportNumberandSeries;
	SetPassportNumberandSeries(v_PassportNumberandSeries);
	cout << "Your passport number and series is - " << GetPassportNumberandSeries() << endl;

}
std::string PersonalCard::Create()
{
	cout << "<=Area of Personal Card=>" << endl;

	PC_Utility();

	cout << "<=End of Area of Personal Card=>" << endl;

	return "";
}

void PersonalCard::SetFirstName(string v_Firstname) {
	FirstName = v_Firstname;
}

void PersonalCard::SetMarkInEmploymentHistoryBook(string v_MarkInEmploymentHistoryBook) {
	MarkInEmploymentHistoryBook = v_MarkInEmploymentHistoryBook;
}

void PersonalCard::SetBirthday(string v_Birthday) {
	Birthday = v_Birthday;
}

void PersonalCard::SetBirthdayPlace(string v_BirthdayPlace) {
	BirthdayPlace = v_BirthdayPlace;
}

void PersonalCard::SetCurrentExperience(int v_CurrentExperience) {
	CurrentExperience = v_CurrentExperience;
}

void PersonalCard::SetPosition(string v_Position) {
	Position = v_Position;
}
void PersonalCard::SetPensionCertificate(string v_PensionCertificate) {
	PensionCertificate = v_PensionCertificate;
}

void PersonalCard::SetMedicalInsurance(string v_MedicalInsurance) {
	MedicalInsurance = v_MedicalInsurance;
}

void PersonalCard::SetTaxID(string v_TaxID) {
	TaxID = v_TaxID;
}

void PersonalCard::SetMaritalStatus(string v_MaritalStatus) {
	MaritalStatus = v_MaritalStatus;
}

void PersonalCard::SetChildren(int v_Children) {
	Children = v_Children;
}

void PersonalCard::SetEducationDocument(string v_EducationDocument) {
	EducationDocument = v_EducationDocument;
}

void PersonalCard::SetPassportNumberandSeries(string v_PassportNumberandSeries) {
	PassportNumberandSeries = v_PassportNumberandSeries;
}

string PersonalCard::GetFirstName() {
	return FirstName;
}

string PersonalCard::GetMarkInEmploymentHistoryBook() {
	return MarkInEmploymentHistoryBook;
}

string PersonalCard::GetBirhday() {
	return Birthday;
}

string PersonalCard::GetBirthdayPlace() {
	return BirthdayPlace;
}

int PersonalCard::GetCurrentExperience() {
	return CurrentExperience;
}

string PersonalCard::GetPosition() {
	return Position;
}

string PersonalCard::GetPensionCertificate() {
	return PensionCertificate;
}

string PersonalCard::GetMedicalInsurance() {
	return MedicalInsurance;
}

string PersonalCard::GetTaxID() {
	return TaxID;
}

string PersonalCard::GetMaritalStatus() {
	return MaritalStatus;
}

int PersonalCard::GetChildren() {
	return Children;
}

string PersonalCard::GetEducationDocument() {
	return EducationDocument;
}

string PersonalCard::GetPassportNumberandSeries() {
	return PassportNumberandSeries;
}

bool PersonalCard::CheckCurrentExperience(int ñurrentExperience) {
	if (ñurrentExperience == 0) {
		return false;
	}
}

bool PersonalCard::CheckChildren(int v_Children) {
	if (v_Children == 0) {
		return false;
	}
}