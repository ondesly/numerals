//
//  test_2.cpp
//  vectors
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 22.02.2021.
//  Copyright © 2021 Dmitrii Torkhov. All rights reserved.
//

#include <vectors/vec2.h>

int main() {
    const oo::vec2<float> c_addition_ref{7.F, 8.F};
    const oo::vec2<float> c_subtraction_ref{-3.F, -2.F};
    const oo::vec2<float> c_multiplication_ref{10.F, 15.F};
    const oo::vec2<float> c_division_ref{0.4F, 0.6F};

    const oo::vec2<float> f1{2.F, 3.F};
    const oo::vec2<float> f2{5.F};

    return (c_addition_ref == f1 + f2 && c_subtraction_ref == f1 - f2 &&
            c_multiplication_ref == f1 * f2 && c_division_ref == f1 / f2) ? 0 : 1;
}