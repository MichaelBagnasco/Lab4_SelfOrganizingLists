//
//  MoveToFront.h
//  Lab4_SelfOrganizingLists
//
//  Created by Michael Bagnasco on 4/11/17.
//

#ifndef MoveToFront_h
#define MoveToFront_h

#include <stdio.h>
#include "SelfOrderedListADT.h"
//#include "llist.h"

template <typename E>
class MoveToFront: public SelfOrderedListADT<E>{
    
    
public:
    MoveToFront();
    ~MoveToFront();
    bool find(const E& it);
    void add(const E& it);
    int getCompares() const;
    int size() const;
    void printlist() const;
    void printlist(int n) const;
};

#endif /* MoveToFront_h */
