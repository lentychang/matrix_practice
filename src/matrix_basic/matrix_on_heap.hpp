#include<iostream>
#include<vector>
#include<initializer_list>

template<typename T>
class Matrix{
    std::vector<T> elems;
    public:
    Matrix(std::initializer_list<T> lst): elems(lst){};
    const std::vector<T>& get_elems() {return elems;};
};

// int main(){
    
// }