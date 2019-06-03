//
//  main.cpp
//  C++_chapter2_excercises
//
//  Created by Alex Kolovatov on 03/06/2019.
//  Copyright © 2019 Alex Kolovatov. All rights reserved.
//

#include <iostream>

using namespace std;

#pragma mark - 2.2.3 - Identifiers
#pragma mark Ex. 2.12

// int double = 3.14; invalid 'can't declare int and double withot name'
int _; // valid
// int catch-22; // invalid 'catch'
// int 1_or_2 = 1; // invalid 'expected unqualified id'
double Double = 3.14; // valid

#pragma mark - 2.2.4 - Scope of a Name
#pragma mark Ex. 2.13

int i = 42;

int main(int argc, const char * argv[]) {
    
    int i = 100;
    int j = i;
    
    cout << "'j' equals " << j << endl;
    
#pragma mark Ex. 2.14
    
    // Question: If the foolowing program legal?
    // Answer: No. Invalid redefinition of 'i'
    // int i = 100
    
    int sum = 0;
    for (int i = 0; i != 10; ++i) {
        sum += i;
    }
    
    cout << "'i' equals " << i << " and 'sum' equals " << sum << endl;
    
    return 0;
}
