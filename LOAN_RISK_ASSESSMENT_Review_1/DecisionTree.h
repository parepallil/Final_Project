#ifndef DECISIONTREE_H
#define DECISIONTREE_H

#include <vector>
#include "Applicant.h"
#include "Loan.h"

class DecisionTree {
public:
    DecisionTree(const std::vector<Applicant>& applicants, const std::vector<Loan>& loans);
    bool predict(const Applicant& applicant, const Loan& loan);
};

#endif // DECISIONTREE_H
