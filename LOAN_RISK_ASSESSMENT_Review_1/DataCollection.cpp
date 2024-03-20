#include "DataCollection.h"

std::vector<Applicant> DataCollection::readApplicantsFromFile() {
    std::vector<Applicant> applicants = {
        {50000, 700, true},
        {60000, 650, false},
        {40000, 720, true},
        {55000, 680, true},
        {70000, 600, false}
    };
    return applicants;
}

std::vector<Loan> DataCollection::readLoansFromFile() {
    std::vector<Loan> loans = {
        {10000, 12, 0.05, false},
        {20000, 24, 0.06, true},
        {15000, 18, 0.07, false},
        {30000, 36, 0.08, true}
    };
    return loans;
}
