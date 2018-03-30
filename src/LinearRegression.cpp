/*
 * LinearRegressionModel.cpp
 *
 *  Created on: 24 Mar 2018
 *      Author: chrissherfield
 */

#include <iostream>

#include "LinearRegression.h"
using namespace cstools;
using namespace std;


namespace statisticalLearning {

double LinearRegression::hypothesis(vector<double> x)
{
    double sum = 0;
    if (features.size() == x.size())
    {
        for (int i = 0; i < this->features.size(); ++i)
        {
            sum += (features[i] * x[i]);
        }
    }
    else
    {
        cout << "Sample vector wrong size.";
    }

    return sum;
}

LinearRegression::LinearRegression()
{
    this->features.push_back(2.3);
    this->alpha = 0.1;

    cout << "Features: " << this->features[0] << endl;
    cout << "Learning Rate (alpha): " << this->alpha << endl;

}

void LinearRegression::fit(vector<vector<double> > X, vector<double> y, int num_iterations)
{

    for (int iterations = 0; iterations < num_iterations; iterations++)
    {
        vector<double> new_features;

        for (int f = 0; f < this->features.size(); ++f)
        {
            double sum = 0;
            for (int s = 0; s < y.size(); ++s)
            {
//                    cout << "-------------------------------" << endl;
//                    cout << "Sample: " << s << endl;
//
//                    cout << "Hypothesis: " << hypothesis(X[s]) << endl;
                sum += (hypothesis(X[s]) - y[s]) * X[s][f];
//                    cout << "Sum: " << sum << endl;
            }
            double theta = this->features[f] - (alpha / X.size()) * sum;

            new_features.push_back(theta);

            this->features = new_features;
        }
        this->print_features();
    }

}

void LinearRegression::print_features()
{
    for (int i = 0; i < this->features.size(); ++i)
    {
        cout << "Theta:" << this->features[i] << endl;
    }
}

double LinearRegression::hypothesis2(Matrix X) {
    // Need to make each sample point a column vector, how will the function receive it??



    return 0;
}

}
