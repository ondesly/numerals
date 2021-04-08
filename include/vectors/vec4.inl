//
//  vec4.inl
//  vectors
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 28.06.2020.
//  Copyright © 2020-2021 Dmitrii Torkhov. All rights reserved.
//

namespace oo {

    // -- Implicit basic constructors --

    template<class T>
    inline vec4<T>::vec4() : x(), y(), width(), height() {
    }

    template<class T>
    inline vec4<T>::vec4(const vec4 &v) : x(v.x), y(v.y), width(v.width), height(v.height) {
    }

    // -- Explicit basic constructors --

    template<class T>
    inline vec4<T>::vec4(T s) : x(s), y(s), width(s), height(s) {
    }

    template<class T>
    inline vec4<T>::vec4(T x, T y, T width, T height) : x(x), y(y), width(width), height(height) {
    }

    // -- Destructor --

    template<class T>
    inline vec4<T>::~vec4() {};

    // -- Copy assignment --

    template<class T>
    inline vec4 <T> &vec4<T>::operator=(const vec4 &v) {
        x = v.x;
        y = v.y;
        width = v.width;
        height = v.height;

        return *this;
    }

    // -- Comparison --

    template<class T>
    bool vec4<T>::equals(const vec4 &v) const {
        return (std::abs(x - v.x) < std::numeric_limits<T>::epsilon()) &&
               (std::abs(y - v.y) < std::numeric_limits<T>::epsilon()) &&
               (std::abs(width - v.width) < std::numeric_limits<T>::epsilon()) &&
               (std::abs(height - v.height) < std::numeric_limits<T>::epsilon());
    }

    // -- Component accesses --

    template<class T>
    inline T &vec4<T>::operator[](size_t i) {
        switch (i) {
            case 0:
            default:
                return x;
            case 1:
                return y;
            case 2:
                return width;
            case 3:
                return height;
        }
    }

    template<class T>
    inline const T &vec4<T>::operator[](size_t i) const {
        switch (i) {
            case 0:
            default:
                return x;
            case 1:
                return y;
            case 2:
                return width;
            case 3:
                return height;
        }
    }

    // -- Unary arithmetic operators --

    template<class T>
    inline vec4 <T> &vec4<T>::operator+=(const vec4 <T> &v) {
        return *this = vec4(x + v.x, y + v.y, width + v.width, height + v.height);
    }

    template<class T>
    inline vec4 <T> &vec4<T>::operator+=(T s) {
        return *this = vec4(x + s, y + s, width + s, height + s);
    }

    template<class T>
    inline vec4 <T> &vec4<T>::operator-=(const vec4 <T> &v) {
        return *this = vec4(x - v.x, y - v.y, width - v.width, height - v.height);
    }

    template<class T>
    inline vec4 <T> &vec4<T>::operator-=(T s) {
        return *this = vec4(x - s, y - s, width - s, height - s);
    }

    template<class T>
    inline vec4 <T> &vec4<T>::operator*=(const vec4 <T> &v) {
        return *this = vec4(x * v.x, y * v.y, width * v.width, height * v.height);
    }

    template<class T>
    inline vec4 <T> &vec4<T>::operator*=(T s) {
        return *this = vec4(x * s, y * s, width * s, height * s);
    }

    template<class T>
    inline vec4 <T> &vec4<T>::operator/=(const vec4 <T> &v) {
        return *this = vec4(x / v.x, y / v.y, width / v.width, height / v.height);
    }

    template<class T>
    inline vec4 <T> &vec4<T>::operator/=(T s) {
        return *this = vec4(x / s, y / s, width / s, height / s);
    }

    // -- Binary operators --

    template<class T>
    inline bool operator==(const vec4 <T> &v1, const vec4 <T> &v2) {
        return v1.x == v2.x && v1.y == v2.y && v1.width == v2.width && v1.height == v2.height;
    }

    template<class T>
    inline bool operator!=(const vec4 <T> &v1, const vec4 <T> &v2) {
        return !(v1 == v2);
    }

    template<class T>
    inline vec4 <T> operator+(const vec4 <T> &v1, const vec4 <T> &v2) {
        return vec4<T>(v1) += v2;
    }

    template<class T>
    inline vec4 <T> operator+(const vec4 <T> &v, T s) {
        return vec4<T>(v) += s;
    }

    template<class T>
    inline vec4 <T> operator-(const vec4 <T> &v1, const vec4 <T> &v2) {
        return vec4<T>(v1) -= v2;
    }

    template<class T>
    inline vec4 <T> operator-(const vec4 <T> &v, T s) {
        return vec4<T>(v) -= s;
    }

    template<class T>
    inline vec4 <T> operator*(const vec4 <T> &v1, const vec4 <T> &v2) {
        return vec4<T>(v1) *= v2;
    }

    template<class T>
    inline vec4 <T> operator*(const vec4 <T> &v, T s) {
        return vec4<T>(v) *= s;
    }

    template<class T>
    inline vec4 <T> operator/(T s, const vec4 <T> &v) {
        return {s / v.x, s / v.y, s / v.width, s / v.height};
    }

    template<class T>
    inline vec4 <T> operator/(const vec4 <T> &v, T s) {
        return vec4<T>(v) /= s;
    }

    template<class T>
    inline vec4 <T> operator/(const vec4 <T> &v1, const vec4 <T> &v2) {
        return vec4<T>(v1) /= v2;
    }

}