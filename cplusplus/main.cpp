//
//  main.cpp
//  cplusplus
//
//  Created by GUNHEE YOON on 2022/05/24.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    for(int i = 0; i < 10; i++) {
        std::cout << i;
    }
    std::cout << std::endl;
    
    for(int i = 0; i < 10; ++i) {
        std::cout << i;
    }
    std::cout << std::endl;
    return 0;
}
