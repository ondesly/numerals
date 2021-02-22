//
//  vec3.h
//  vectors
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 08.12.2020.
//  Copyright © 2020-2021 Dmitrii Torkhov. All rights reserved.
//

#pragma once

#include <cmath>

namespace oo {

    template<class T>
    struct vec3 {

        // -- Data --

        T x, y, z;

        // -- Implicit basic constructors --

        vec3();

        vec3(const vec3 &v);

        vec3(const vec3 &v1, const vec3 &v2) {

        }

        // -- Explicit basic constructors --

        explicit vec3(T s);

        vec3(T x, T y, T z);

        // -- Destructor --

        ~vec3();

        // -- Copy assignment --

        vec3 &operator=(const vec3 &v);

        // -- Comparison --

        bool equals(const vec3 &v) const;

        // -- Component accesses --

        T &operator[](size_t i);

        const T &operator[](size_t i) const;

        // -- Unary arithmetic operators --

        vec3 &operator+=(const vec3 &v);

        vec3 &operator+=(T s);

        vec3 &operator-();

        vec3 operator-() const;

        vec3 &operator-=(const vec3 &v);

        vec3 &operator-=(T s);

        vec3 &operator*=(const vec3 &v);

        vec3 &operator*=(T s);

        vec3 &operator/=(const vec3 &v);

        vec3 &operator/=(T s);

        // Static vector operations

        static void cross(const vec3 &v1, const vec3 &v2, vec3 *dst);

        static void subtract(const vec3 &v1, const vec3 &v2, vec3 *dst);

        static float get_dot(const vec3 &v1, const vec3 &v2);

        // Vector operations

        void normalize();

        float get_dot(const vec3 &v) const;

        float get_length() const;

        float get_length_squared() const;

    };

    // -- Binary operators --

    template<class T>
    bool operator==(const oo::vec3<T> &v1, const oo::vec3<T> &v2);

    template<class T>
    bool operator!=(const oo::vec3<T> &v1, const oo::vec3<T> &v2);

    template<class T>
    oo::vec3<T> operator+(const oo::vec3<T> &v1, const oo::vec3<T> &v2);

    template<class T>
    oo::vec3<T> operator+(const oo::vec3<T> &v1, T s);

    template<class T>
    oo::vec3<T> operator-(const oo::vec3<T> &v1, const oo::vec3<T> &v2);

    template<class T>
    oo::vec3<T> operator-(const oo::vec3<T> &v, T s);

    template<class T>
    oo::vec3<T> operator*(T s, const oo::vec3<T> &v);

    template<class T>
    oo::vec3<T> operator*(const oo::vec3<T> &v1, const oo::vec3<T> &v2);

    template<class T>
    oo::vec3<T> operator*(const oo::vec3<T> &v, T s);

    template<class T>
    oo::vec3<T> operator/(T s, const oo::vec3<T> &v);

    template<class T>
    oo::vec3<T> operator/(const oo::vec3<T> &v, T s);

    template<class T>
    oo::vec3<T> operator/(const oo::vec3<T> &v1, const oo::vec3<T> &v2);

}

#include "vec3.inl"
