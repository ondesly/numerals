//
// Created by Dmitrii Torkhov <dmitriitorkhov@gmail.com> on 28.06.2020.
//

namespace cc {

    // -- Implicit basic constructors --

    template<class T, class S>
    inline vector2<T, S>::vector2() : x(), y() {
    }

    template<class T, class S>
    inline vector2<T, S>::vector2(const vector2 &v) : x(v.x), y(v.y) {
    }

    // -- Explicit basic constructors --

    template<class T, class S>
    inline vector2<T, S>::vector2(T s) : x(s), y(s) {
    }

    template<class T, class S>
    inline vector2<T, S>::vector2(T x, T y) : x(x), y(y) {
    }

    // -- Destructor --

    template<class T, class S>
    inline vector2<T, S>::~vector2() {
    }

    // -- Copy assignment --

    template<class T, class S>
    inline vector2 <T, S> &vector2<T, S>::operator=(const vector2 &v) {
        x = v.x;
        y = v.y;

        return *this;
    }

    // -- Component accesses --

    template<class T, class S>
    inline T &vector2<T, S>::operator[](size_t i) {
        switch (i) {
            case 0:
            default:
                return x;
            case 1:
                return y;
        }
    }

    template<class T, class S>
    inline const T &vector2<T, S>::operator[](size_t i) const {
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
    inline vector2 <T, S> &vector2<T, S>::operator+=(const vector2 <T, S> &v) {
        return *this = vector2(x + v.x, y + v.y);
    }

    template<class T, class S>
    inline vector2 <T, S> &vector2<T, S>::operator+=(S s) {
        return *this = vector2(x + s, y + s);
    }

    template<class T, class S>
    inline vector2 <T, S> &vector2<T, S>::operator-=(const vector2 <T, S> &v) {
        return *this = vector2(x - v.x, y - v.y);
    }

    template<class T, class S>
    inline vector2 <T, S> &vector2<T, S>::operator-=(S s) {
        return *this = vector2(x - s, y - s);
    }

    template<class T, class S>
    inline vector2 <T, S> &vector2<T, S>::operator*=(const vector2 <T, S> &v) {
        return *this = vector2(x * v.x, y * v.y);
    }

    template<class T, class S>
    inline vector2 <T, S> &vector2<T, S>::operator*=(S s) {
        return *this = vector2(x * s, y * s);
    }

    template<class T, class S>
    inline vector2 <T, S> &vector2<T, S>::operator/=(const vector2 <T, S> &v) {
        return *this = vector2(x / v.x, y / v.y);
    }

    template<class T, class S>
    inline vector2 <T, S> &vector2<T, S>::operator/=(S s) {
        return *this = vector2(x / s, y / s);
    }

    // -- Binary operators --

    template<class T, class S>
    inline bool operator==(const vector2 <T, S> &v1, const vector2 <T, S> &v2) {
        return v1.x == v2.x && v1.y == v2.y;
    }

    template<class T, class S>
    inline bool operator!=(const vector2 <T, S> &v1, const vector2 <T, S> &v2) {
        return !(v1 == v2);
    }

    template<class T, class S>
    inline vector2 <T, S> operator+(const vector2 <T, S> &v1, const vector2 <T, S> &v2) {
        return vector2<T, S>(v1) += v2;
    }

    template<class T, class S>
    inline vector2 <T, S> operator+(const vector2 <T, S> &v, S s) {
        return vector2<T, S>(v) += s;
    }

    template<class T, class S>
    inline vector2 <T, S> operator-(const vector2 <T, S> &v1, const vector2 <T, S> &v2) {
        return vector2<T, S>(v1) -= v2;
    }

    template<class T, class S>
    inline vector2 <T, S> operator-(const vector2 <T, S> &v, S s) {
        return vector2<T, S>(v) -= s;
    }

    template<class T, class S>
    inline vector2 <T, S> operator*(const vector2 <T, S> &v1, const vector2 <T, S> &v2) {
        return vector2<T, S>(v1) *= v2;
    }

    template<class T, class S>
    inline vector2 <T, S> operator*(const vector2 <T, S> &v, S s) {
        return vector2<T, S>(v) *= s;
    }

    template<class T, class S>
    inline vector2 <T, S> operator/(S s, const vector2 <T, S> &v) {
        return {s / v.x, s / v.y};
    }

    template<class T, class S>
    inline vector2 <T, S> operator/(const vector2 <T, S> &v, S s) {
        return vector2<T, S>(v) /= s;
    }

    template<class T, class S>
    inline vector2 <T, S> operator/(const vector2 <T, S> &v1, const vector2 <T, S> &v2) {
        return vector2<T, S>(v1) /= v2;
    }

}