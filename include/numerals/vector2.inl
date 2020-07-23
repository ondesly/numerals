//
// Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 28.06.2020.
//

namespace cc {

    // -- Explicit basic constructors --

    template<class T>
    inline vector2<T>::vector2(T s) : x(s), y(s) {
    }

    template<class T>
    inline vector2<T>::vector2(T x, T y) : x(x), y(y) {
    }

    // -- Unary arithmetic operators --

    template<class T>
    inline vector2 <T> &vector2<T>::operator+=(const vector2 <T> &v) {
        return *this = vector2(x + v.x, y + v.y);
    }

    template<class T>
    inline vector2 <T> &vector2<T>::operator+=(T s) {
        return *this = vector2(x + s, y + s);
    }

    template<class T>
    inline vector2 <T> &vector2<T>::operator-=(const vector2 <T> &v) {
        return *this = vector2(x - v.x, y - v.y);
    }

    template<class T>
    inline vector2 <T> &vector2<T>::operator-=(T s) {
        return *this = vector2(x - s, y - s);
    }

    template<class T>
    inline vector2 <T> &vector2<T>::operator*=(const vector2 <T> &v) {
        return *this = vector2(x * v.x, y * v.y);
    }

    template<class T>
    inline vector2 <T> &vector2<T>::operator*=(T s) {
        return *this = vector2(x * s, y * s);
    }

    template<class T>
    inline vector2 <T> &vector2<T>::operator/=(const vector2 <T> &v) {
        return *this = vector2(x / v.x, y / v.y);
    }

    template<class T>
    inline vector2 <T> &vector2<T>::operator/=(T s) {
        return *this = vector2(x / s, y / s);
    }

    // -- Binary operators --

    template<class T>
    inline bool operator==(const vector2 <T> &v1, const vector2 <T> &v2) {
        return v1.x == v2.x && v1.y == v2.y;
    }

    template<class T>
    inline bool operator!=(const vector2 <T> &v1, const vector2 <T> &v2) {
        return !(v1 == v2);
    }

    template<class T>
    inline vector2 <T> operator+(const vector2 <T> &v1, const vector2 <T> &v2) {
        return vector2<T>(v1) += v2;
    }

    template<class T>
    inline vector2 <T> operator+(const vector2 <T> &v, T s) {
        return vector2<T>(v) += s;
    }

    template<class T>
    inline vector2 <T> operator-(const vector2 <T> &v1, const vector2 <T> &v2) {
        return vector2<T>(v1) -= v2;
    }

    template<class T>
    inline vector2 <T> operator-(const vector2 <T> &v, T s) {
        return vector2<T>(v) -= s;
    }

    template<class T>
    inline vector2 <T> operator*(const vector2 <T> &v1, const vector2 <T> &v2) {
        return vector2<T>(v1) *= v2;
    }

    template<class T>
    inline vector2 <T> operator*(const vector2 <T> &v, T s) {
        return vector2<T>(v) *= s;
    }

    template<class T>
    inline vector2 <T> operator/(T s, const vector2 <T> &v) {
        return {s / v.x, s / v.y};
    }

    template<class T>
    inline vector2 <T> operator/(const vector2 <T> &v, T s) {
        return vector2<T>(v) /= s;
    }

    template<class T>
    inline vector2 <T> operator/(const vector2 <T> &v1, const vector2 <T> &v2) {
        return vector2<T>(v1) /= v2;
    }

}