# Difference between `decltype` and `auto`
+ `decltype` return the type, but does not give the assignment of the value
+ `auto` will ignore the top-level const and reference, while `decltype` does not

# Same Type Example
```c++
int i = 10;

auto a = i; // a is int
decltype(i) b; // b is int
```

# Different Type Example
```c++
int k = 10, &m = k;

auto a = m; // a is int
decltype(m) b; // b is int&
```

```c++
const int j = 10;

auto a = j;  // a is int
decltype(j) b; // b is const int
```