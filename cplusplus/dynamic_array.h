//
//  dynamic_array.h
//  cplusplus
//
//  Created by GUNHEE YOON on 2022/07/26.
//

#ifndef dynamic_array_h
#define dynamic_array_h

#include <string>
#include <algorithm>
#include <iostream>
// #include <sstream>

template <typename T>
class dynamic_array
{
private:
    T* data;
    size_t n;
    
public:
    dynamic_array(int n);
    dynamic_array(const dynamic_array<T>& other);
    T& operator[](int index);
    const T& operator[](int index) const;
    T& at(int index);
    size_t size() const;
    ~dynamic_array();
    
    T* begin();
    const T* begin() const;
    T* end();
    const T* end() const;
    
    friend dynamic_array<T> operator+(const dynamic_array<T>& arr1, dynamic_array<T>& arr2) {
        dynamic_array<T> result(arr1.size() + arr2.size());
        std::copy(arr1.begin(), arr1.end(), result.begin());
        std::copy(arr2.begin(), arr2.end(), result.begin() + arr1.size());
        
        return result;
    }
    
    std::string to_string(const std::string& sep = ", ");
};

#endif /* dynamic_array_h */
