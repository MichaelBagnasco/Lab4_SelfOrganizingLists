//
//  Count.h
//  Lab4_SelfOrganizingLists
//
//  Created by Michael Bagnasco on 4/11/17.
//

#ifndef Count_h
#define Count_h

#include <stdio.h>
#include "SelfOrderedListADT.h"
#include "llist.h"

template <typename E>
class Count: public SelfOrderedListADT<E>{
    int count;
    
public:
    Count();
    ~Count();
    bool find(const E& it);
    void add(const E& it);
    int getCompares() const;
    int size() const;
    void printlist() const;
    void printlist(int n) const;
};



#endif /* Count_h */
