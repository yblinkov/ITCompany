#include "Employee.h"
#include "HR.h"
#include "IT_Company.h"
#include "PersonalCard.h"
#include "Documents.h"

using namespace std;

int main() {
	cout << "Yevgeniy Blinkov Group IC-63" << endl;
	cout << "--------------------------------------" << endl;
	cout << "Start modelling..." << endl;
	cout << "<==========Version 2===========>" << endl;

	IT_Company* m_IT_Company1 = new IT_Company();
	{

		IT_Company m_IT_Company2(m_IT_Company1);
		PersonalCard* personalCard = new PersonalCard("Yevgen"); // stvorennya personalCard dlya vikoristannya yak dgerela dlya peretvorennya
		cout << "person: " << personalCard->FirstName << endl;// znachennya polya dgerela
		Documents docs(personalCard); //stvorennya Documents z dgerela pc (PersonalCard)

		cout << "employment contract: " << docs.EmploymentContract << endl; // Dovedennya sho znachennya polya Documents vzyate na osnovi PersonalCard

		delete personalCard;// vidalennya PersonalCard 
	}

	
	//delete m_IT_Company1;

	cout << "Finish modelling." << endl;
	system("pause");
	return 0;
}