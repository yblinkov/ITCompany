#include <iostream>
#include <string>

using namespace std;

#if !defined(__Viddilkadriv_PersonalCard_h)
#define __Viddilkadriv_PersonalCard_h

class Employee;

class PersonalCard {
public:
    PersonalCard();
    ~PersonalCard();

    string Create(void);
	void SetFirstName(string v_FirstName);
	void SetMarkInEmploymentHistoryBook(string v_MarkInEmploymentHistoryBook);
	void SetBirthday(string v_Birthday);
	void SetBirthdayPlace(string v_BirthdayPlace);
	void SetCurrentExperience(int v_CurrentExperience);
	void SetPosition(string v_Position);
	void SetPensionCertificate(string v_PensionCertificate);
	void SetMedicalInsurance(string v_MedicalInsurance);
	void SetTaxID(string v_TaxID);
	void SetMaritalStatus(string v_MaritalStatus);
	void SetChildren(int v_Children);
	void SetEducationDocument(string v_EducationDocument);
	void SetPassportNumberandSeries(string v_PassportNumberandSeries);

	string GetFirstName();
	string GetMarkInEmploymentHistoryBook();
	string GetBirhday();
	string GetBirthdayPlace();
	int GetCurrentExperience();
	string GetPosition();
	string GetPensionCertificate();
	string GetMedicalInsurance();
	string GetTaxID();
	string GetMaritalStatus();
	int GetChildren();
	string GetEducationDocument();
	string GetPassportNumberandSeries();

	bool CheckCurrentExperience(int ñurrentExperience);
	bool CheckChildren(int ñhildren);
protected:
private:
	void PC_Utility();
	string FirstName;
	string MarkInEmploymentHistoryBook;
    string Birthday;
    string BirthdayPlace;
    int CurrentExperience;
    string Position;
    string PensionCertificate;
    string MedicalInsurance;
    string TaxID;
    string MaritalStatus;
    int Children;
    string EducationDocument;
    string PassportNumberandSeries;
};

#endif