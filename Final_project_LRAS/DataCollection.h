#ifndef DATACOLLECTION_H
#define DATACOLLECTION_H

#include <vector>
#include "Applicant.h"
#include "Loan.h"

class DataCollection {
public:
    std::vector<Applicant> readApplicantsFromFile();
    std::vector<Loan> readLoansFromFile();
};

#endif // DATACOLLECTION_H
