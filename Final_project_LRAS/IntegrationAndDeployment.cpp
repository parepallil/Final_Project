#include "IntegrationAndDeployment.h"

bool IntegrationAndDeployment::assessLoanRisk(const Applicant& applicant, const Loan& loan) {
    DataCollection dataCollection;
    std::vector<Applicant> applicants = dataCollection.readApplicantsFromFile();
    std::vector<Loan> loans = dataCollection.readLoansFromFile();

    DecisionTree decisionTree(applicants, loans);
    bool decisionTreePrediction = decisionTree.predict(applicant, loan);

    AdaBoost adaBoost(applicants, loans);
    bool adaBoostPrediction = adaBoost.predict(applicant, loan);

    return (decisionTreePrediction && adaBoostPrediction); // Placeholder for demonstration
}
