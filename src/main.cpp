//============================================================================
// Name        : StatisticalLearning.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <vector>
#include <iostream>

#include <Matrix.h>
#include "LinearRegression.h"

using namespace std;
using namespace cstools;


int main() {
//    LinearRegression lm;
//    double arrX[] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9,
//                     2.0};
//    double arrY[] = {0.01, 0.02, 0.03, 0.04, 0.05, 0.06, 0.07, 0.08, 0.09, 0.1, 0.11, 0.12, 0.13, 0.14, 0.15, 0.16,
//                     0.17, 0.18, 0.19, 0.2};
//    vector<vector<double> > X;
//    vector<double> y;
//    for (int i = 0; i < sizeof(arrX) / sizeof(arrX[0]); i++) {
//        vector<double> x;
//        x.push_back(arrX[i]);
//        X.push_back(x);
//        y.push_back(arrY[i]);
//
//    }
//
//
//    lm.fit(X, y, 100);
//    lm.print_features();


    vector<double> v1 = {1, 8, 14};
    vector<double> v2 = {1, 2, 2};
    vector<double> v3 = {1, 2, 9};

    vector<vector<double> > vv1;

    vv1.push_back(v1);
    vv1.push_back(v2);
    vv1.push_back(v3);

    vector<double> v4 = {1, 1, 2};
    vector<double> v5 = {1, 0.1, 0.3};
    vector<double> v6 = {1, 1.2, 2.3};

    vector<vector<double> > vv2;

    vv2.push_back(v4);
    vv2.push_back(v5);
    vv2.push_back(v6);

    Matrix m1 = Matrix(vv1);
    Matrix m2 = Matrix(vv2);

    cout << "----- M1 -------" << endl;
    m1.print_matrix();
    cout << "----- M2 -------" << endl;
    m2.print_matrix();
//
    Matrix m3 = m1 + m2;

    cout << "----- M3 = M1 + M2 -------" << endl;

    m3.print_matrix();
//
    Matrix m4 = m1 * m2;
    cout << "----- M4 = M1 * M2 -------" << endl;

    m4.print_matrix();

    Matrix id = Matrix::identity(3);

    cout << "----- Identity(3) -------" << endl;
    id.print_matrix();
    Matrix m5 = m1 * id;

    cout << "----- M5 = M1 * id -------" << endl;

    m5.print_matrix();

    vector<double> t = {1, 1, 2};
    Matrix r_vec = Matrix(t); // 1 x 3 matrix
    cout << "----- r_vec -------" << endl;

    r_vec.print_matrix();

    Matrix m6 = r_vec * m5;

    cout << "----- M6 = r_vec * m5 -------" << endl;

    m6.print_matrix();


    return 0;
}
