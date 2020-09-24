#include <initializer_list>
#include <iostream>
#include <vector>

template<typename T>
class Matrix {
    std::vector<T> elems;

public:
    explicit Matrix(std::initializer_list<T> lst): elems(lst){};
    const std::vector<T>& get_elems() { return elems; }
};
