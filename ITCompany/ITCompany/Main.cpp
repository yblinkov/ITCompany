#include "Employee.h"
#include "HR.h"
#include "IT_Company.h"
#include "PersonalCard.h"
#include "Documents.h"

using namespace std;

int main() {
	cout << "Yevgeniy Blinkov Group IC-63" << endl;
	cout << "Start modelling..." << endl;

	//Priklad parsingu
	{
		Documents docs("OrderToAccept1/OrderToDismission2/OrderToGiveVacation3/EmploymentHistoryBook4/Contract5");
	}
	//Викликається конструктор ейчара тоді коли створюється іт компанія
	{
		cout << "-----Example 1-----" << endl;
		IT_Company *m_IT_Company1 = new IT_Company();
		delete m_IT_Company1;
	}
	{
		cout << "-----Example 2 - transformation constructor-----" << endl;
		IT_Company m_IT_Company2("Company1/2"); // transfor constructor
		cout << "-----Example 3-----" << endl;
		IT_Company m_IT_Company3(1, "Default company");
		cout << "-----Example 4-----" << endl;
		IT_Company m_IT_Company4(m_IT_Company2); 
	}

    cout << "Finish modelling." << endl;
    system("pause");

    return 0;
}