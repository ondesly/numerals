//
// Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 28.06.2020.
//

#pragma once

#include <cmath>
#include <limits>

namespace cc {

    template<class T, class S = T>
    struct vector2 {

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

        vector2();

        vector2(const vector2 &v);

        // -- Explicit basic constructors --

        explicit vector2(T s);

        vector2(T x, T y);

        // -- Destructor --

        ~vector2();

        // -- Copy assignment --

        vector2 &operator=(const vector2 &v);

        // -- Comparison --

        bool equals(const vector2 &v) const;

        // -- Component accesses --

        T &operator[](size_t i);

        const T &operator[](size_t i) const;

        // -- Unary arithmetic operators --

        vector2 &operator+=(const vector2 &v);

        vector2 &operator+=(S s);

        vector2 &operator-=(const vector2 &v);

        vector2 &operator-=(S s);

        vector2 &operator*=(const vector2 &v);

        vector2 &operator*=(S s);

        vector2 &operator/=(const vector2 &v);

        vector2 &operator/=(S s);

    };

    // -- Types --

    using float2 = vector2<float>;

    using int2 = vector2<int>;

    using size_t2 = vector2<size_t>;

    // -- Binary operators --

    template<class T, class S>
    bool operator==(const cc::vector2<T, S> &v1, const cc::vector2<T, S> &v2);

    template<class T, class S>
    bool operator!=(const cc::vector2<T, S> &v1, const cc::vector2<T, S> &v2);

    template<class T, class S>
    cc::vector2<T, S> operator+(const cc::vector2<T, S> &v1, const cc::vector2<T, S> &v2);

    template<class T, class S>
    cc::vector2<T, S> operator+(const cc::vector2<T, S> &v1, S s);

    template<class T, class S>
    cc::vector2<T, S> operator-(const cc::vector2<T, S> &v1, const cc::vector2<T, S> &v2);

    template<class T, class S>
    cc::vector2<T, S> operator-(const cc::vector2<T, S> &v, S s);

    template<class T, class S>
    cc::vector2<T, S> operator*(const cc::vector2<T, S> &v1, const cc::vector2<T, S> &v2);

    template<class T, class S>
    cc::vector2<T, S> operator*(const cc::vector2<T, S> &v, S s);

    template<class T, class S>
    cc::vector2<T, S> operator/(S s, const cc::vector2<T, S> &v);

    template<class T, class S>
    cc::vector2<T, S> operator/(const cc::vector2<T, S> &v, S s);

    template<class T, class S>
    cc::vector2<T, S> operator/(const cc::vector2<T, S> &v1, const cc::vector2<T, S> &v2);

}

#include "vector2.inl"
