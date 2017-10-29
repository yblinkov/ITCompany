/***********************************************************************
 * Module:  PersonalCard.h
 * Author:  ������ �����
 * Modified: 12 ������ 2017 �. 8:34:30
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
	PersonalCard(string FirstName, string Birthday, string BirthdayPlace, int CurrentExperience, string Position, string Pension�ertificate, string MedicalInsurance, string TaxID, string MaritalStatus, int Children, string EducationDocument, string PassportNumberandSeries);//����������� �����������
	PersonalCard::PersonalCard(PersonalCard* pc_copyFrom);

	~PersonalCard();//����������
   string Create(void);
   string FirstName;
   string MarkInEmploymentHistoryBook;
protected:
private:
 
   string Birthday;
   string BirthdayPlace;

   int CurrentExperience;
   string Position;
   string Pension�ertificate;
   string MedicalInsurance;
   string TaxID;
   string MaritalStatus;
   int Children;
   string EducationDocument;
   string PassportNumberandSeries;
};

#endif