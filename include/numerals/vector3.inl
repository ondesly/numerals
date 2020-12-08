//
//  vector3.inl
//  numerals
//
//  Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 08.12.2020.
//  Copyright © 2020 Dmitrii Torkhov. All rights reserved.
//

namespace cc {

    // -- Implicit basic constructors --

    template<class T>
    inline vector3<T>::vector3() : x(), y(), z() {
    }

    template<class T>
    inline vector3<T>::vector3(const vector3 &v) : x(v.x), y(v.y), z(v.z) {
    }

    // -- Explicit basic constructors --

    template<class T>
    inline vector3<T>::vector3(T s) : x(s), y(s), z(s) {
    }

    template<class T>
    inline vector3<T>::vector3(T x, T y, T z) : x(x), y(y), z(z) {
    }

    // -- Destructor --

    template<class T>
    inline vector3<T>::~vector3() {
    }

    // -- Copy assignment --

    template<class T>
    inline vector3 <T> &vector3<T>::operator=(const vector3 &v) {
        x = v.x;
        y = v.y;
        z = v.z;

        return *this;
    }

    // -- Comparison --

    template<class T>
    bool vector3<T>::equals(const vector3 &v) const {
        return (std::abs(x - v.x) < std::numeric_limits<T>::epsilon())
                && (std::abs(y - v.y) < std::numeric_limits<T>::epsilon())
                && (std::abs(z - v.z) < std::numeric_limits<T>::epsilon());
    }

    // -- Component accesses --

    template<class T>
    inline T &vector3<T>::operator[](size_t i) {
        switch (i) {
            case 0:
            default:
                return x;
            case 1:
                return y;
            case 2:
                return z;
        }
    }

    template<class T>
    inline const T &vector3<T>::operator[](size_t i) const {
        switch (i) {
            case 0:
            default:
                return x;
            case 1:
                return y;
            case 2:
                return z;
        }
    }

    // -- Unary arithmetic operators --

    template<class T>
    inline vector3 <T> &vector3<T>::operator+=(const vector3 <T> &v) {
        return *this = vector3(x + v.x, y + v.y, z + v.z);
    }

    template<class T>
    inline vector3 <T> &vector3<T>::operator+=(T s) {
        return *this = vector3(x + s, y + s, z + s);
    }

    template<class T>
    inline vector3 <T> &vector3<T>::operator-() {
        return *this = vector3(-x, -y, -z);
    }

    template<class T>
    inline vector3 <T> vector3<T>::operator-() const {
        return vector3(-x, -y, -z);
    }

    template<class T>
    inline vector3 <T> &vector3<T>::operator-=(const vector3 <T> &v) {
        return *this = vector3(x - v.x, y - v.y, z - v.z);
    }

    template<class T>
    inline vector3 <T> &vector3<T>::operator-=(T s) {
        return *this = vector3(x - s, y - s, z - s);
    }

    template<class T>
    inline vector3 <T> &vector3<T>::operator*=(const vector3 <T> &v) {
        return *this = vector3(x * v.x, y * v.y, z * v.z);
    }

    template<class T>
    inline vector3 <T> &vector3<T>::operator*=(T s) {
        return *this = vector3(x * s, y * s, z * s);
    }

    template<class T>
    inline vector3 <T> &vector3<T>::operator/=(const vector3 <T> &v) {
        return *this = vector3(x / v.x, y / v.y, z / v.z);
    }

    template<class T>
    inline vector3 <T> &vector3<T>::operator/=(T s) {
        return *this = vector3(x / s, y / s, z / s);
    }

    // Static vector operations

    template<class T>
    void vector3<T>::cross(const vector3 <T> &v1, const vector3 <T> &v2, vector3 <T> *dst) {
        const auto x = (v1[1] * v2[2]) - (v1[2] * v2[1]);
        const auto y = (v1[2] * v2[0]) - (v1[0] * v2[2]);
        const auto z = (v1[0] * v2[1]) - (v1[1] * v2[0]);

        dst->x = x;
        dst->y = y;
        dst->z = z;
    }

    template<class T>
    void vector3<T>::subtract(const vector3 <T> &v1, const vector3 <T> &v2, vector3 <T> *dst) {
        dst->x = v1.x - v2.x;
        dst->y = v1.y - v2.y;
        dst->z = v1.z - v2.z;
    }

    template<class T>
    float vector3<T>::get_dot(const vector3 <T> &v1, const vector3 <T> &v2) {
        return (v1.x * v2.x + v1.y * v2.y + v1.z * v2.z);
    }

    // Vector operations

    template<class T>
    inline void vector3<T>::normalize() {
        float n = x * x + y * y + z * z;

        if (n == 1.F) {
            return;
        }

        n = std::sqrt(n);

        if (n < 2e-37f) {
            return;
        }

        n = 1.F / n;
        x *= n;
        y *= n;
        z *= n;
    }

    template<class T>
    inline float vector3<T>::get_dot(const vector3 &v) const {
        return (x * v.x + y * v.y + z * v.z);
    }

    template<class T>
    inline float vector3<T>::get_length() const {
        return std::sqrt(x * x + y * y + z * z);
    }

    template<class T>
    inline float vector3<T>::get_length_squared() const {
        return (x * x + y * y + z * z);
    }

    // -- Binary operators --

    template<class T>
    inline bool operator==(const vector3 <T> &v1, const vector3 <T> &v2) {
        return v1.x == v2.x && v1.y == v2.y && v1.z == v2.z;
    }

    template<class T>
    inline bool operator!=(const vector3 <T> &v1, const vector3 <T> &v2) {
        return !(v1 == v2);
    }

    template<class T>
    inline vector3 <T> operator+(const vector3 <T> &v1, const vector3 <T> &v2) {
        return vector3<T>(v1) += v2;
    }

    template<class T>
    inline vector3 <T> operator+(const vector3 <T> &v, T s) {
        return vector3<T>(v) += s;
    }

    template<class T>
    inline vector3 <T> operator-(const vector3 <T> &v1, const vector3 <T> &v2) {
        return vector3<T>(v1) -= v2;
    }

    template<class T>
    inline vector3 <T> operator-(const vector3 <T> &v, T s) {
        return vector3<T>(v) -= s;
    }

    template<class T>
    inline vector3 <T> operator*(T s, const vector3 <T> &v) {
        return vector3<T>(v) *= s;
    }

    template<class T>
    inline vector3 <T> operator*(const vector3 <T> &v1, const vector3 <T> &v2) {
        return vector3<T>(v1) *= v2;
    }

    template<class T>
    inline vector3 <T> operator*(const vector3 <T> &v, T s) {
        return vector3<T>(v) *= s;
    }

    template<class T>
    inline vector3 <T> operator/(T s, const vector3 <T> &v) {
        return {s / v.x, s / v.y, s / v.z};
    }

    template<class T>
    inline vector3 <T> operator/(const vector3 <T> &v, T s) {
        return vector3<T>(v) /= s;
    }

    template<class T>
    inline vector3 <T> operator/(const vector3 <T> &v1, const vector3 <T> &v2) {
        return vector3<T>(v1) /= v2;
    }

}