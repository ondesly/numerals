//
//  vec2.h
//  vectors
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 28.06.2020.
//  Copyright © 2020-2021 Dmitrii Torkhov. All rights reserved.
//

#pragma once

#include <cmath>
#include <limits>

namespace oo {

    template<class T, class S = T>
    struct vec2 {

        // -- Data --

        union {

            struct {

                T x, y;

            };

            struct {

                T width, height;

            };

        };

        // -- Implicit basic constructors --

        vec2();

        vec2(const vec2 &v);

        // -- Explicit basic constructors --

        explicit vec2(T s);

        vec2(T x, T y);

        // -- Destructor --

        ~vec2();

        // -- Copy assignment --

        vec2 &operator=(const vec2 &v);

        // -- Comparison --

        bool equals(const vec2 &v) const;

        // -- Component accesses --

        T &operator[](size_t i);

        const T &operator[](size_t i) const;

        // -- Unary arithmetic operators --

        vec2 &operator+=(const vec2 &v);

        vec2 &operator+=(S s);

        vec2 &operator-();

        vec2 operator-() const;

        vec2 &operator-=(const vec2 &v);

        vec2 &operator-=(S s);

        vec2 &operator*=(const vec2 &v);

        vec2 &operator*=(S s);

        vec2 &operator/=(const vec2 &v);

        vec2 &operator/=(S s);

    };

    // -- Binary operators --

    template<class T, class S>
    bool operator==(const oo::vec2<T, S> &v1, const oo::vec2<T, S> &v2);

    template<class T, class S>
    bool operator!=(const oo::vec2<T, S> &v1, const oo::vec2<T, S> &v2);

    template<class T, class S>
    oo::vec2<T, S> operator+(const oo::vec2<T, S> &v1, const oo::vec2<T, S> &v2);

    template<class T, class S>
    oo::vec2<T, S> operator+(const oo::vec2<T, S> &v1, S s);

    template<class T, class S>
    oo::vec2<T, S> operator-(const oo::vec2<T, S> &v1, const oo::vec2<T, S> &v2);

    template<class T, class S>
    oo::vec2<T, S> operator-(const oo::vec2<T, S> &v, S s);

    template<class T, class S>
    oo::vec2<T, S> operator*(const oo::vec2<T, S> &v1, const oo::vec2<T, S> &v2);

    template<class T, class S>
    oo::vec2<T, S> operator*(const oo::vec2<T, S> &v, S s);

    template<class T, class S>
    oo::vec2<T, S> operator/(S s, const oo::vec2<T, S> &v);

    template<class T, class S>
    oo::vec2<T, S> operator/(const oo::vec2<T, S> &v, S s);

    template<class T, class S>
    oo::vec2<T, S> operator/(const oo::vec2<T, S> &v1, const oo::vec2<T, S> &v2);

}

#include "vec2.inl"
