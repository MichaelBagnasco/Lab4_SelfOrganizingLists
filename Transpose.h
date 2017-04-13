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
#include "llist.h"

template <typename E>
class Transpose: public SelfOrderedListADT<E>{
    
    
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


template<typename E>
Transpose<E>::Transpose()
{
    
}


template<typename E>
Transpose<E>::~Transpose()
{
    
}


template<typename E>
bool Transpose<E>::find(const E& it)
{
    
}


template<typename E>
void Transpose<E>::add(const E& it)
{
    
}


template<typename E>
int Transpose<E>::getCompares() const
{
    return 1;
}


template<typename E>
int Transpose<E>::size() const
{
    return 1;
}


template<typename E>
void Transpose<E>::printlist() const
{
    
}


template<typename E>
void Transpose<E>::printlist(int n) const
{
    
}

#endif /* Transpose_h */
