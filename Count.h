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


template <typename E>
Count<E>::Count()
{
    count = 0;
}


template <typename E>
Count<E>::~Count()
{
    
}


template <typename E>
bool Count<E>::find(const E& it)
{
    
}


template <typename E>
void Count<E>::add(const E& it)
{
    
}


template <typename E>
int Count<E>::getCompares() const
{
    return 1;
}


template <typename E>
int Count<E>::size() const
{
    return 1;
}


template <typename E>
void Count<E>::printlist() const
{
    
}


template <typename E>
void Count<E>::printlist(int n) const
{
    
}


#endif /* Count_h */
