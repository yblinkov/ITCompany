/***********************************************************************
 * Module:  PersonalCard.cpp
 * Author:  Áë³íêîâ ªâãåí
 * Modified: 12 æîâòíÿ 2017 ğ. 8:34:30
 * Purpose: Implementation of the class PersonalCard
 ***********************************************************************/

#include "PersonalCard.h"

////////////////////////////////////////////////////////////////////////
// Name:       PersonalCard::Create()
// Purpose:    Implementation of PersonalCard::Create()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string PersonalCard::Create()
{
   // TODO : implement
	return "";
}
PersonalCard::PersonalCard(string FirstName) :PersonalCard(FirstName, " 11", " dd", 132, " pp", "PP ", "mm ", "TT ", "MR ", 2, " EE", " SS"){
	cout << "Default Constructor of class PersonalCard" << endl;
}

PersonalCard::PersonalCard():PersonalCard("Name", " 11"," dd",132 ," pp","PP ","mm ","TT ","MR ",2," EE"," SS"){
	cout << "Default Constructor of class PersonalCard" << endl;
}

PersonalCard::PersonalCard(string m_FirstName, string m_Birthday, string m_BirthdayPlace, int m_CurrentExperience, string m_Position, string m_PensionÑertificate, string m_MedicalInsurance, string m_TaxID, string m_MaritalStatus, int m_Children, string m_EducationDocument, string m_PassportNumberandSeries){
	cout << "Constructor of Inicialization of 5 arguments PersonalCard" << endl;
	Birthday = m_Birthday;
	BirthdayPlace = m_BirthdayPlace;
	CurrentExperience = m_CurrentExperience;
	Position = m_Position;
	PensionÑertificate = m_PensionÑertificate;
	MedicalInsurance = m_MedicalInsurance;
	TaxID = m_TaxID;
	MaritalStatus = m_MaritalStatus;
	Children = m_Children;
	EducationDocument = m_EducationDocument;
	PassportNumberandSeries = m_PassportNumberandSeries;
	FirstName = m_FirstName;
}

PersonalCard::PersonalCard(PersonalCard* pc_copyFrom){//êîíñòğóêòîğ êîï³şâàííÿ
	cout << "Copy constructor PersonalCard" << endl;
	Birthday = pc_copyFrom->Birthday;
	BirthdayPlace = pc_copyFrom->BirthdayPlace;
	CurrentExperience = pc_copyFrom->CurrentExperience;
	Position = pc_copyFrom->Position;
	PensionÑertificate = pc_copyFrom->PensionÑertificate;
	MedicalInsurance = pc_copyFrom->MedicalInsurance;
	TaxID = pc_copyFrom->TaxID;
	MaritalStatus = pc_copyFrom->MaritalStatus;
	Children = pc_copyFrom->Children;
	EducationDocument = pc_copyFrom->EducationDocument;
	PassportNumberandSeries = pc_copyFrom->PassportNumberandSeries;
}

PersonalCard::~PersonalCard() {
	cout << "Destroying object PersonalCard\n";
}