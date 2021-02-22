//
//  vec2.inl
//  vectors
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 28.06.2020.
//  Copyright © 2020-2021 Dmitrii Torkhov. All rights reserved.
//

namespace oo {

    // -- Implicit basic constructors --

    template<class T, class S>
    inline vec2<T, S>::vec2() : x(), y() {
    }

    template<class T, class S>
    inline vec2<T, S>::vec2(const vec2 &v) : x(v.x), y(v.y) {
    }

    // -- Explicit basic constructors --

    template<class T, class S>
    inline vec2<T, S>::vec2(T s) : x(s), y(s) {
    }

    template<class T, class S>
    inline vec2<T, S>::vec2(T x, T y) : x(x), y(y) {
    }

    // -- Destructor --

    template<class T, class S>
    inline vec2<T, S>::~vec2() {
    }

    // -- Copy assignment --

    template<class T, class S>
    inline vec2 <T, S> &vec2<T, S>::operator=(const vec2 &v) {
        x = v.x;
        y = v.y;

        return *this;
    }

    // -- Comparison --

    template<class T, class S>
    bool vec2<T, S>::equals(const vec2 &v) const {
        return (std::abs(x - v.x) < std::numeric_limits<T>::epsilon())
                && (std::abs(y - v.y) < std::numeric_limits<T>::epsilon());
    }

    // -- Component accesses --

    template<class T, class S>
    inline T &vec2<T, S>::operator[](size_t i) {
        switch (i) {
            case 0:
            default:
                return x;
            case 1:
                return y;
        }
    }

    template<class T, class S>
    inline const T &vec2<T, S>::operator[](size_t i) const {
        switch (i) {
            case 0:
            default:
                return x;
            case 1:
                return y;
        }
    }

    // -- Unary arithmetic operators --

    template<class T, class S>
    inline vec2 <T, S> &vec2<T, S>::operator+=(const vec2 <T, S> &v) {
        return *this = vec2(x + v.x, y + v.y);
    }

    template<class T, class S>
    inline vec2 <T, S> &vec2<T, S>::operator+=(S s) {
        return *this = vec2(x + s, y + s);
    }

    template<class T, class S>
    inline vec2 <T, S> &vec2<T, S>::operator-() {
        return *this = vec2(-x, -y);
    }

    template<class T, class S>
    inline vec2 <T, S> vec2<T, S>::operator-() const {
        return vec2(-x, -y);
    }

    template<class T, class S>
    inline vec2 <T, S> &vec2<T, S>::operator-=(const vec2 <T, S> &v) {
        return *this = vec2(x - v.x, y - v.y);
    }

    template<class T, class S>
    inline vec2 <T, S> &vec2<T, S>::operator-=(S s) {
        return *this = vec2(x - s, y - s);
    }

    template<class T, class S>
    inline vec2 <T, S> &vec2<T, S>::operator*=(const vec2 <T, S> &v) {
        return *this = vec2(x * v.x, y * v.y);
    }

    template<class T, class S>
    inline vec2 <T, S> &vec2<T, S>::operator*=(S s) {
        return *this = vec2(x * s, y * s);
    }

    template<class T, class S>
    inline vec2 <T, S> &vec2<T, S>::operator/=(const vec2 <T, S> &v) {
        return *this = vec2(x / v.x, y / v.y);
    }

    template<class T, class S>
    inline vec2 <T, S> &vec2<T, S>::operator/=(S s) {
        return *this = vec2(x / s, y / s);
    }

    // -- Vector operations --

    template<class T, class S>
    inline T vec2<T, S>::get_length() const {
        return std::sqrt(x * x + y * y);
    }

    template<class T, class S>
    inline T vec2<T, S>::get_distance(const vec2 <T, S> &v) const {
        return (*this - v).get_length();
    }

    template<class T, class S>
    inline vec2 <T, S> vec2<T, S>::get_midpoint(const vec2 <T, S> &v) const {
        return vec2((x + v.x) / 2.F, (y + v.y) / 2.F);
    }

    // -- Binary operators --

    template<class T, class S>
    inline bool operator==(const vec2 <T, S> &v1, const vec2 <T, S> &v2) {
        return v1.x == v2.x && v1.y == v2.y;
    }

    template<class T, class S>
    inline bool operator!=(const vec2 <T, S> &v1, const vec2 <T, S> &v2) {
        return !(v1 == v2);
    }

    template<class T, class S>
    inline vec2 <T, S> operator+(const vec2 <T, S> &v1, const vec2 <T, S> &v2) {
        return vec2<T, S>(v1) += v2;
    }

    template<class T, class S>
    inline vec2 <T, S> operator+(const vec2 <T, S> &v, S s) {
        return vec2<T, S>(v) += s;
    }

    template<class T, class S>
    inline vec2 <T, S> operator-(const vec2 <T, S> &v1, const vec2 <T, S> &v2) {
        return vec2<T, S>(v1) -= v2;
    }

    template<class T, class S>
    inline vec2 <T, S> operator-(const vec2 <T, S> &v, S s) {
        return vec2<T, S>(v) -= s;
    }

    template<class T, class S>
    inline vec2 <T, S> operator*(const vec2 <T, S> &v1, const vec2 <T, S> &v2) {
        return vec2<T, S>(v1) *= v2;
    }

    template<class T, class S>
    inline vec2 <T, S> operator*(const vec2 <T, S> &v, S s) {
        return vec2<T, S>(v) *= s;
    }

    template<class T, class S>
    inline vec2 <T, S> operator/(S s, const vec2 <T, S> &v) {
        return {s / v.x, s / v.y};
    }

    template<class T, class S>
    inline vec2 <T, S> operator/(const vec2 <T, S> &v, S s) {
        return vec2<T, S>(v) /= s;
    }

    template<class T, class S>
    inline vec2 <T, S> operator/(const vec2 <T, S> &v1, const vec2 <T, S> &v2) {
        return vec2<T, S>(v1) /= v2;
    }

}