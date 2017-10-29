#include <iostream>
#include "String"
#include "PersonalCard.h"
#include "Documents.h"

#if !defined(__Viddilkadriv_HR_h)
#define __Viddilkadriv_HR_h

class PersonalCard;

class Documents;

class HR {
public:

    HR();

    HR(string Firstname, string Position, bool IsOrdered);

	HR(HR &const hr_copyFrom);

    ~HR();

	void copy(HR const& hr);

protected:
private:
    std::string Firstname;
    std::string Position;
    bool IsOrdered;

    Documents* docs;
};

#endif