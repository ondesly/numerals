//
//  vector3.h
//  numerals
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 08.12.2020.
//  Copyright © 2020 Dmitrii Torkhov. All rights reserved.
//

#pragma once

#include <cmath>

namespace cc {

    template<class T>
    struct vector3 {

        // -- Data --

        T x, y, z;

        // -- Implicit basic constructors --

        vector3();

        vector3(const vector3 &v);

        vector3(const vector3 &v1, const vector3 &v2) {

        }

        // -- Explicit basic constructors --

        explicit vector3(T s);

        vector3(T x, T y, T z);

        // -- Destructor --

        ~vector3();

        // -- Copy assignment --

        vector3 &operator=(const vector3 &v);

        // -- Comparison --

        bool equals(const vector3 &v) const;

        // -- Component accesses --

        T &operator[](size_t i);

        const T &operator[](size_t i) const;

        // -- Unary arithmetic operators --

        vector3 &operator+=(const vector3 &v);

        vector3 &operator+=(T s);

        vector3 &operator-();

        vector3 operator-() const;

        vector3 &operator-=(const vector3 &v);

        vector3 &operator-=(T s);

        vector3 &operator*=(const vector3 &v);

        vector3 &operator*=(T s);

        vector3 &operator/=(const vector3 &v);

        vector3 &operator/=(T s);

        // Static vector operations

        static void cross(const vector3 &v1, const vector3 &v2, vector3 *dst);

        static void subtract(const vector3 &v1, const vector3 &v2, vector3 *dst);

        static float get_dot(const vector3 &v1, const vector3 &v2);

        // Vector operations

        void normalize();

        float get_dot(const vector3 &v) const;

        float get_length() const;

        float get_length_squared() const;

    };

    // -- Binary operators --

    template<class T>
    bool operator==(const cc::vector3<T> &v1, const cc::vector3<T> &v2);

    template<class T>
    bool operator!=(const cc::vector3<T> &v1, const cc::vector3<T> &v2);

    template<class T>
    cc::vector3<T> operator+(const cc::vector3<T> &v1, const cc::vector3<T> &v2);

    template<class T>
    cc::vector3<T> operator+(const cc::vector3<T> &v1, T s);

    template<class T>
    cc::vector3<T> operator-(const cc::vector3<T> &v1, const cc::vector3<T> &v2);

    template<class T>
    cc::vector3<T> operator-(const cc::vector3<T> &v, T s);

    template<class T>
    cc::vector3<T> operator*(T s, const cc::vector3<T> &v);

    template<class T>
    cc::vector3<T> operator*(const cc::vector3<T> &v1, const cc::vector3<T> &v2);

    template<class T>
    cc::vector3<T> operator*(const cc::vector3<T> &v, T s);

    template<class T>
    cc::vector3<T> operator/(T s, const cc::vector3<T> &v);

    template<class T>
    cc::vector3<T> operator/(const cc::vector3<T> &v, T s);

    template<class T>
    cc::vector3<T> operator/(const cc::vector3<T> &v1, const cc::vector3<T> &v2);

}

#include "vector3.inl"
