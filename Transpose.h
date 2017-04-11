//
//  Transpose.h
//  Lab4_SelfOrganizingLists
//
//  Created by Michael Bagnasco on 4/11/17.
//

#ifndef Transpose_h
#define Transpose_h

#include <stdio.h>
#include "SelfOrderedListADT.h"
//#include "llist.h"

template <typename E>
class Transpose{
    
    
public:
    Transpose();
    ~Transpose();
    bool find(const E& it);
    void add(const E& it);
    int getCompares() const;
    int size() const;
    void printlist() const;
    void printlist(int n) const;
};


#endif /* Transpose_h */
