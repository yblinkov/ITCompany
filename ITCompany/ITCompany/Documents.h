#include <iostream>
#include "String"

#if !defined(__Viddilkadriv_Documents_h)
#define __Viddilkadriv_Documents_h

class HR;

class Documents {

public:
    Documents();

    Documents(string OrderToAccept,
              string OrderToDismission,
              string OrderToGiveVacation,
              string EmploymentHistoryBook,
              string EmploymentContract);

    Documents(const Documents& docs_copyFrom);

	Documents(string fromString);

    ~Documents();

    std::string Create(void);

    std::string EmploymentContract;

protected:
private:
    string OrderToAccept;
    string OrderToDismission;
    string OrderToGiveVacation;
    string EmploymentHistoryBook;
};

#endif