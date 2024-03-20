#include <iostream>
#include "IntegrationAndDeployment.h"

int main() {
    IntegrationAndDeployment integrationAndDeployment;
    Applicant testApplicant = { 50000, 700, true };
    Loan testLoan = { 10000, 12, 0.05, false };

    bool riskAssessment = integrationAndDeployment.assessLoanRisk(testApplicant, testLoan);
    std::cout << "Loan Risk Assessment Result: " << (riskAssessment ? "High risk" : "Low risk") << std::endl;

    return 0;
}
