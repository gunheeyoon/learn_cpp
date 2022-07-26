//
//  main.cpp
//  cplusplus
//
//  Created by GUNHEE YOON on 2022/05/24.
//

#include "dynamic_array.cpp"

struct Student
{
    std::string name;
    int standard;
};

std::ostream& operator<<(std::ostream& os, const Student& s) {
    return (os << "[" << s.name << ", " << s.standard << "]");
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int nStudents;
    std::cout << "How many students? ";
    std::cin >> nStudents;
    
    dynamic_array<Student> class1(nStudents);
    
    for (int i = 0; i < nStudents; i++) {
        std::string name;
        int standard;
        std::cout << i+1 << "th student name and id: ";
        std::cin >> name >> standard;
        class1[i] = Student{name, standard};
    }
    
    try {
        //class1[nStudents] = Student{"John", 8)};
        //class1.at(nStudents) = Student{"John", 8}; //exception
    }
    catch (...) {
        std::cout << "exception!" << std::endl;
    }
    
    auto class2 = class1;
    std::cout << "creating 2nd class from 1st one: " << class2.to_string() << std::endl;
    
    auto class3 = class1 + class2;
    std::cout << "creating 3rd class from 1st and 2nd: " << class3.to_string() << std::endl;
    
    return 0;
}
