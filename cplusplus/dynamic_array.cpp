//
//  dynamic_array.cpp
//  cplusplus
//
//  Created by GUNHEE YOON on 2022/07/26.
//

#include "dynamic_array.h"
#include <sstream>

template <typename T>
dynamic_array<T>::dynamic_array(int n) {
    this->n = n;
    data = new T[n];
}

template <typename T>
dynamic_array<T>::dynamic_array(const dynamic_array<T>& other) {
    n = other.n;
    data = new T[n];
    
    for (int i = 0; i < n; i++) {
        data[i] = other[i];
    }
}

template <typename T>
T& dynamic_array<T>::operator[](int index) {
    return data[index];
}

template <typename T>
const T& dynamic_array<T>::operator[](int index) const {
    return data[index];
}

template <typename T>
T& dynamic_array<T>::at(int index) {
    if (index < n) {
        return data[index];
    }
    throw "index out of range";
}

template <typename T>
size_t dynamic_array<T>::size() const {
    return n;
}

template <typename T>
dynamic_array<T>::~dynamic_array() {
    delete[] data;
}

template <typename T>
T* dynamic_array<T>::begin() {
    return data;
}

template <typename T>
const T* dynamic_array<T>::begin() const {
    return data;
}

template <typename T>
T* dynamic_array<T>::end() {
    return data + n;
}

template <typename T>
const T* dynamic_array<T>::end() const {
    return data + n;
}

template <typename T>
std::string dynamic_array<T>::to_string(const std::string& sep) {
    if (n == 0) {
        return "";
    }
    
    std::ostringstream os;
    os << data[0];
    
    for (int i = 1; i < n; i++) {
        os << sep << data[i];
    }
    
    return os.str();
}
