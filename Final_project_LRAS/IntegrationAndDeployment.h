#ifndef INTEGRATIONANDDEPLOYMENT_H
#define INTEGRATIONANDDEPLOYMENT_H

#include "DataCollection.h"
#include "DecisionTree.h"
#include "AdaBoost.h"

class IntegrationAndDeployment {
public:
    bool assessLoanRisk(const Applicant& applicant, const Loan& loan);
};

#endif // INTEGRATIONANDDEPLOYMENT_H
