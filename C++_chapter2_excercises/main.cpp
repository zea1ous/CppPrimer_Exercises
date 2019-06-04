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
    
#pragma mark 2.3 - Compound Types
#pragma mark 2.3.1 References
    
    // 'rvalue reference'
    // when we use the term reference, we mean 'Ivalue reference'
    
    int ival = 1024;
    int &refVal = ival; // refVal refers to (is another name for) ival
    
    // int &refVal2; // error: a reference must be initialized
    // bind - связывать. Because there is no way to rebind a reference, references must be initialized.
    // A Reference Is an Alias - ссылка это псевдоним
    
    refVal = 2;
    
    // All objects have same value
    cout << ival << " 'ival'" << endl; // same memory reference
    cout << refVal << " 'refVal'" << endl; // same memory reference
    
    cout << &refVal << " refVal memory address" << endl; // 0x7ffeefbff49c
    cout << &ival << " ival memory address"  << endl; // 0x7ffeefbff49c
    
    int ii = refVal; // define new reference to refVal
    int &newVal = ii;
    
    cout << ii << " 'ii'" << endl;
    cout << &newVal << " newVal memory address" << endl; // 0x7ffeefbff48c
    cout << &ii << " ii memory address" << endl; // 0x7ffeefbff48c
    
    newVal = 56;
    
    cout << newVal << " = 'newVal' " << ii << " = 'ii'" << endl;
    cout << refVal << " = 'refVal " << ival << " = 'ival'" << endl;
    
#pragma mark Ex. 2.15
    
    /*(a)*/ int exival = 1.01; // cut fraction part, means exival = 1
    /*(b)   int &rval1 = 1.01; error */
    /*(c)*/ int &rval2 = ival;
    cout << rval2 << " rval2" << endl;
    cout << &rval2 << " memory address 'rval2'" << endl; // 0x7ffeefbff49c same as 'ival'
    /*(d)   int &rval3; requires an initializer */
    
#pragma mark Ex. 2.16
    int newI = 0;
    // &r1 = i; invalid
    double d = 0; // add fractional part .00
    // &r2 = d; // use undeclaried identifier
    
    /*(a) r2 = 3.14159; error */
    /*(b) r2 = r1; error */
    /*(c) newI = r2; error */
    /*(d) r1 = d; error */
    
#pragma mark Ex. 2.17
    int k;
    // &rk = k; error
    k = 5;
    // rk = 10; error
    
    return 0;
}
