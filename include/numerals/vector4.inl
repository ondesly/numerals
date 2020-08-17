//
// Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 28.06.2020.
//

namespace cc {

    // -- Implicit basic constructors --

    template<class T>
    inline vector4<T>::vector4() : x(), y(), w(), h() {
    }

    template<class T>
    inline vector4<T>::vector4(const vector4 &v) : x(v.x), y(v.y), w(v.w), h(v.h) {
    }

    // -- Explicit basic constructors --

    template<class T>
    inline vector4<T>::vector4(T s) : x(s), y(s), w(s), h(s) {
    }

    template<class T>
    inline vector4<T>::vector4(T x, T y, T w, T h) : x(x), y(y), w(w), h(h) {
    }

    // -- Destructor --

    template<class T>
    inline vector4<T>::~vector4() {
    }

    // -- Copy assignment --

    template<class T>
    inline vector4 <T> &vector4<T>::operator=(const vector4 &v) {
        x = v.x;
        y = v.y;
        w = v.w;
        h = v.h;

        return *this;
    }

    // -- Component accesses --

    template<class T>
    inline T &vector4<T>::operator[](size_t i) {
        switch (i) {
            case 0:
            default:
                return x;
            case 1:
                return y;
            case 2:
                return w;
            case 3:
                return h;
        }
    }

    template<class T>
    inline const T &vector4<T>::operator[](size_t i) const {
        switch (i) {
            case 0:
            default:
                return x;
            case 1:
                return y;
            case 2:
                return w;
            case 3:
                return h;
        }
    }

    // -- Unary arithmetic operators --

    template<class T>
    inline vector4 <T> &vector4<T>::operator+=(const vector4 <T> &v) {
        return *this = vector4(x + v.x, y + v.y, w + v.w, h + v.h);
    }

    template<class T>
    inline vector4 <T> &vector4<T>::operator+=(T s) {
        return *this = vector4(x + s, y + s, w + s, h + s);
    }

    template<class T>
    inline vector4 <T> &vector4<T>::operator-=(const vector4 <T> &v) {
        return *this = vector4(x - v.x, y - v.y, w - v.w, h - v.h);
    }

    template<class T>
    inline vector4 <T> &vector4<T>::operator-=(T s) {
        return *this = vector4(x - s, y - s, w - s, h - s);
    }

    template<class T>
    inline vector4 <T> &vector4<T>::operator*=(const vector4 <T> &v) {
        return *this = vector4(x * v.x, y * v.y, w * v.w, h * v.h);
    }

    template<class T>
    inline vector4 <T> &vector4<T>::operator*=(T s) {
        return *this = vector4(x * s, y * s, w * s, h * s);
    }

    template<class T>
    inline vector4 <T> &vector4<T>::operator/=(const vector4 <T> &v) {
        return *this = vector4(x / v.x, y / v.y, w / v.w, h / v.h);
    }

    template<class T>
    inline vector4 <T> &vector4<T>::operator/=(T s) {
        return *this = vector4(x / s, y / s, w / s, h / s);
    }

    // -- Binary operators --

    template<class T>
    inline bool operator==(const vector4 <T> &v1, const vector4 <T> &v2) {
        return v1.x == v2.x && v1.y == v2.y && v1.w == v2.w && v1.h == v2.h;
    }

    template<class T>
    inline bool operator!=(const vector4 <T> &v1, const vector4 <T> &v2) {
        return !(v1 == v2);
    }

    template<class T>
    inline vector4 <T> operator+(const vector4 <T> &v1, const vector4 <T> &v2) {
        return vector4<T>(v1) += v2;
    }

    template<class T>
    inline vector4 <T> operator+(const vector4 <T> &v, T s) {
        return vector4<T>(v) += s;
    }

    template<class T>
    inline vector4 <T> operator-(const vector4 <T> &v1, const vector4 <T> &v2) {
        return vector4<T>(v1) -= v2;
    }

    template<class T>
    inline vector4 <T> operator-(const vector4 <T> &v, T s) {
        return vector4<T>(v) -= s;
    }

    template<class T>
    inline vector4 <T> operator*(const vector4 <T> &v1, const vector4 <T> &v2) {
        return vector4<T>(v1) *= v2;
    }

    template<class T>
    inline vector4 <T> operator*(const vector4 <T> &v, T s) {
        return vector4<T>(v) *= s;
    }

    template<class T>
    inline vector4 <T> operator/(T s, const vector4 <T> &v) {
        return {s / v.x, s / v.y, s / v.w, s / v.h};
    }

    template<class T>
    inline vector4 <T> operator/(const vector4 <T> &v, T s) {
        return vector4<T>(v) /= s;
    }

    template<class T>
    inline vector4 <T> operator/(const vector4 <T> &v1, const vector4 <T> &v2) {
        return vector4<T>(v1) /= v2;
    }

}