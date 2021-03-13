# vectors
Math vectors lib with arithmetic operations for 2, 3 and 4 elements

## Example
Beside the example below, you may want to check test files in the tests directory.

### vec2

```cpp
oo::vec2<float> f1{2.F, 3.F};
oo::vec2<float> f2{5.F};

auto a = f1 + f2;
auto s = f1 - f2;
auto m = f1 * f2;
auto d = f1 / f2;
```

### vec3

```cpp
oo::vec3<float> f1{2.F, 3.F, 4.F};
oo::vec3<float> f2{5.F};

auto a = f1 + f2;
auto s = f1 - f2;
auto m = f1 * f2;
auto d = f1 / f2;
```

### vec4

```cpp
oo::vec4<float> f1{2.F, 3.F, 4.F, 5.F};
oo::vec4<float> f2{5.F};

auto a = f1 + f2;
auto s = f1 - f2;
auto m = f1 * f2;
auto d = f1 / f2;
```

## Requirements
This library requires a C++17 compiler and standard library.
