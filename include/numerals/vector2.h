//
// Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 28.06.2020.
//

#pragma once

#include <cstddef>

namespace cc {

    template<class T>
    struct vector2 {

        // -- Data --

        union {

            struct {

                T x, y;

            };

            struct {

                T w, h;

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

        // -- Component accesses --

        T &operator[](size_t i);

        const T &operator[](size_t i) const;

        // -- Unary arithmetic operators --

        vector2 &operator+=(const vector2 &v);

        vector2 &operator+=(T s);

        vector2 &operator-=(const vector2 &v);

        vector2 &operator-=(T s);

        vector2 &operator*=(const vector2 &v);

        vector2 &operator*=(T s);

        vector2 &operator/=(const vector2 &v);

        vector2 &operator/=(T s);

    };

    // -- Types --

    using float2 = vector2<float>;

    using int2 = vector2<int>;

    using size_t2 = vector2<size_t>;

    // -- Binary operators --

    template<class T>
    bool operator==(const cc::vector2<T> &v1, const cc::vector2<T> &v2);

    template<class T>
    bool operator!=(const cc::vector2<T> &v1, const cc::vector2<T> &v2);

    template<class T>
    cc::vector2<T> operator+(const cc::vector2<T> &v1, const cc::vector2<T> &v2);

    template<class T>
    cc::vector2<T> operator+(const cc::vector2<T> &v1, T s);

    template<class T>
    cc::vector2<T> operator-(const cc::vector2<T> &v1, const cc::vector2<T> &v2);

    template<class T>
    cc::vector2<T> operator-(const cc::vector2<T> &v, T s);

    template<class T>
    cc::vector2<T> operator*(const cc::vector2<T> &v1, const cc::vector2<T> &v2);

    template<class T>
    cc::vector2<T> operator*(const cc::vector2<T> &v, T s);

    template<class T>
    cc::vector2<T> operator/(T s, const cc::vector2<T> &v);

    template<class T>
    cc::vector2<T> operator/(const cc::vector2<T> &v, T s);

    template<class T>
    cc::vector2<T> operator/(const cc::vector2<T> &v1, const cc::vector2<T> &v2);

}

#include "vector2.inl"
