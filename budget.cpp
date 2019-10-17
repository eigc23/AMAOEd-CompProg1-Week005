//
//  budget.cpp
//  budget
//
//  Created by Isabelle on 10/17/19.
//  Copyright © 2019 Isabelle. All rights reserved.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    // daily budget
    float budget;
    std::cout <<"Enter your daily budget\n";
    std::cin >> budget;
    std::cout <<"The product of your budget is " << budget * budget << "\n";
    return 0;
}
