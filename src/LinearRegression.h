/*
 * LinearRegressionModel.h
 *
 *  Created on: 24 Mar 2018
 *      Author: chrissherfield
 */
#ifndef STATISTICALLEARNING_LINEARREGRESSION_H
#define STATISTICALLEARNING_LINEARREGRESSION_H

#include <vector>
#include <Matrix.h>

namespace statisticalLearning {

class LinearRegression {

private:

    std::vector<double> features;
    double alpha;


    double hypothesis(std::vector<double> x);

    double hypothesis2(cstools::Matrix X);

public:


    LinearRegression();

    void fit(std::vector<std::vector<double> > X, std::vector<double> y, int num_iterations);

    void print_features();

};


}

#endif //STATISTICALLEARNING_LINEARREGRESSION_H
