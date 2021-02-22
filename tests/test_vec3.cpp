//
//  test_3.cpp
//  vectors
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 22.02.2021.
//  Copyright © 2021 Dmitrii Torkhov. All rights reserved.
//

#include <vectors/vec3.h>

int main() {
    const oo::vec3<float> c_addition_ref{7.F, 8.F, 9.F};
    const oo::vec3<float> c_subtraction_ref{-3.F, -2.F, -1.F};
    const oo::vec3<float> c_multiplication_ref{10.F, 15.F, 20.F};
    const oo::vec3<float> c_division_ref{0.4F, 0.6F, 0.8F};

    const oo::vec3<float> f1{2.F, 3.F, 4.F};
    const oo::vec3<float> f2{5.F};

    return (c_addition_ref == f1 + f2 && c_subtraction_ref == f1 - f2 &&
            c_multiplication_ref == f1 * f2 && c_division_ref == f1 / f2) ? 0 : 1;
}