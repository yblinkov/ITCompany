#include <iostream>
#include <string>

using namespace std;

#if !defined(__Viddilkadriv_PersonalCard_h)
#define __Viddilkadriv_PersonalCard_h

class Employee;

/// PersonalCard class
class PersonalCard {
public:
	// Default constructor
	PersonalCard();
	/// Destructor
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
	/// Utility funxtion
	void PC_Utility();
	/// firstname
	string FirstName;
	/// MarkInEmploymentHistoryBook
	string MarkInEmploymentHistoryBook;
	///Birthday
	string Birthday;
	///BirthdayPlace
	string BirthdayPlace;
	///CurrentExperience
	int CurrentExperience;
	/// Position
	string Position;
	///PensionCertificate
	string PensionCertificate;
	///MedicalInsurance
	string MedicalInsurance;
	///TaxID
	string TaxID;
	///MaritalStatus
	string MaritalStatus;
	///Children
	int Children;
	///EducationDocument
	string EducationDocument;
	///PassportNumberandSeries
	string PassportNumberandSeries;
};

#endif