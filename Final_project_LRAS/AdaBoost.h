#ifndef ADABOOST_H
#define ADABOOST_H

#include <vector>
#include "Applicant.h"
#include "Loan.h"

class AdaBoost {
public:
    AdaBoost(const std::vector<Applicant>& applicants, const std::vector<Loan>& loans);
    bool predict(const Applicant& applicant, const Loan& loan);
};

#endif // ADABOOST_H
