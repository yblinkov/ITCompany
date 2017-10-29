/***********************************************************************
 * Module:  PersonalCard.h
 * Author:  Áë³íêîâ ªâãåí
 * Modified: 12 æîâòíÿ 2017 ğ. 8:34:30
 * Purpose: Declaration of the class PersonalCard
 ***********************************************************************/
#include <iostream>
#include <string>
using namespace std;

#if !defined(__Viddilkadriv_PersonalCard_h)
#define __Viddilkadriv_PersonalCard_h
class Employee;
class PersonalCard
{
public:
	PersonalCard();
	PersonalCard(string FirstName);
	PersonalCard(string FirstName, string Birthday, string BirthdayPlace, int CurrentExperience, string Position, string PensionÑertificate, string MedicalInsurance, string TaxID, string MaritalStatus, int Children, string EducationDocument, string PassportNumberandSeries);//êîíñòğóêòîğ ³í³ö³àë³çàö³¿
	PersonalCard::PersonalCard(PersonalCard* pc_copyFrom);

	~PersonalCard();//äåñòğóêòîğ
   string Create(void);
   string FirstName;
   string MarkInEmploymentHistoryBook;
protected:
private:
 
   string Birthday;
   string BirthdayPlace;

   int CurrentExperience;
   string Position;
   string PensionÑertificate;
   string MedicalInsurance;
   string TaxID;
   string MaritalStatus;
   int Children;
   string EducationDocument;
   string PassportNumberandSeries;
};

#endif