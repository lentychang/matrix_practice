#include<iostream>
#include<vector>
#include<initializer_list>
#include<tuple>

template<typename T>
class Matrix{
    std::vector<T> elems;
    std::vector<unsigned int> shp;
    public:
    Matrix(std::initializer_list<T> lst): elems(lst), shp{lst.size()}{};
    // init all elements with given value
    Matrix(unsigned int N, T val): elems{std::vector<T>(N,val)}, shp{N}{};
    std::vector<unsigned int> shape(){ return shp;};
    const std::vector<T>& get_elems() {return elems;};
};
