#include "Employee.h"
#include "HR.h"
#include "IT_Company.h"
#include "PersonalCard.h"
#include "Documents.h"

using namespace std;

int main() {
    cout << "Yevgeniy Blinkov Group IC-63" << endl;
	cout << "Start modelling..." << endl;
	
	IT_Company *m_IT_Company1 = new IT_Company();

	{
		IT_Company m_IT_Company2("Default company");
		IT_Company m_IT_Company3(1, "Default company");
		IT_Company m_IT_Company4(m_IT_Company1); 
	}

	delete m_IT_Company1;

    cout << "Finish modelling." << endl;
    system("pause");

    return 0;
}