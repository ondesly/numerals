//
//  vec4.h
//  vectors
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 28.06.2020.
//  Copyright © 2020-2021 Dmitrii Torkhov. All rights reserved.
//

#pragma once

#include <algorithm>

#include "vectors/vec2.h"

namespace cc {

    template<class T>
    struct vec4 {

        // -- Data --

        union {

            struct {

                T x, y;

                union {

                    struct {

                        T width, height;

                    };

                    struct {

                        T z, w;

                    };

                };

            };

            struct {

                T left, bottom, right, top;

            };

            struct {

                vec2<T> origin, size;

            };

        };

        // -- Implicit basic constructors --

        vec4();

        vec4(const vec4 &v);

        // -- Explicit basic constructors --

        explicit vec4(T s);

        vec4(T x, T y, T width, T height);

        vec4(const vec2<T> &o, const vec2<T> &s);

        // -- Destructor --

        ~vec4();

        // -- Copy assignment --

        vec4 &operator=(const vec4 &v);

        // -- Comparison --

        bool equals(const vec4 &v) const;

        // -- Component accesses --

        T &operator[](size_t i);

        const T &operator[](size_t i) const;

        // -- Unary arithmetic operators --

        vec4 &operator+=(const vec4 &v);

        vec4 &operator+=(T s);

        vec4 &operator-=(const vec4 &v);

        vec4 &operator-=(T s);

        vec4 &operator*=(const vec4 &v);

        vec4 &operator*=(T s);

        vec4 &operator/=(const vec4 &v);

        vec4 &operator/=(T s);

        // Rectangle operations

        T get_min_x() const;

        T get_max_x() const;

        T get_min_y() const;

        T get_max_y() const;

        void merge(const vec4 &v);

        bool contains(const vec2<T> &v) const;

    };

    // -- Types --

    using float4 = vec4<float>;

    using int4 = vec4<int>;

    using size_t4 = vec4<size_t>;

    // -- Binary operators --

    template<class T>
    bool operator==(const cc::vec4<T> &v1, const cc::vec4<T> &v2);

    template<class T>
    bool operator!=(const cc::vec4<T> &v1, const cc::vec4<T> &v2);

    template<class T>
    cc::vec4<T> operator+(const cc::vec4<T> &v1, const cc::vec4<T> &v2);

    template<class T>
    cc::vec4<T> operator+(const cc::vec4<T> &v1, T s);

    template<class T>
    cc::vec4<T> operator-(const cc::vec4<T> &v1, const cc::vec4<T> &v2);

    template<class T>
    cc::vec4<T> operator-(const cc::vec4<T> &v, T s);

    template<class T>
    cc::vec4<T> operator*(const cc::vec4<T> &v1, const cc::vec4<T> &v2);

    template<class T>
    cc::vec4<T> operator*(const cc::vec4<T> &v, T s);

    template<class T>
    cc::vec4<T> operator/(float f, const cc::vec4<T> &v);

    template<class T>
    cc::vec4<T> operator/(const cc::vec4<T> &v, T s);

    template<class T>
    cc::vec4<T> operator/(const cc::vec4<T> &v1, const cc::vec4<T> &v2);

}

#include "vec4.inl"
