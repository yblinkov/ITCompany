#include <iostream>
#include <string>

using namespace std;

#if !defined(__Viddilkadriv_PersonalCard_h)
#define __Viddilkadriv_PersonalCard_h

class Employee;

class PersonalCard {
public:
    PersonalCard();

    PersonalCard(string fromString);

    PersonalCard(string FirstName,
                 string Birthday,
                 string BirthdayPlace,
                 int CurrentExperience,
                 string Position,
                 string PensionCertificate,
                 string MedicalInsurance,
                 string TaxID,
                 string MaritalStatus,
                 int Children,
                 string EducationDocument,
                 string PassportNumberandSeries);

    PersonalCard(const PersonalCard& pc_copyFrom);

    ~PersonalCard();

    string Create(void);

    string FirstName;
    string MarkInEmploymentHistoryBook;

protected:
private:
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