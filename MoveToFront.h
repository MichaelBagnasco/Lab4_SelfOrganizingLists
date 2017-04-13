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
#include "llist.h"

template <typename E>
class MoveToFront: public SelfOrderedListADT<E>{
    //LList<E> list;
    static int compares;
    
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


template<typename E>
MoveToFront<E>::MoveToFront()
{
    
}


template<typename E>
MoveToFront<E>::~MoveToFront()
{
    
}


template <typename E>
bool MoveToFront<E>::find(const E& it)
{
    /*list.movetostart();
     for (int i = 0; i < list.length(); i++) {
     if (list.getValue() == it)
     return true;
     else
     return false;
     }*/
}

template <typename E>
void MoveToFront<E>::add(const E& it)
{
    //list.insert(it);
}


template <typename E>
int MoveToFront<E>::getCompares() const
{
    return compares;
}


template <typename E>
int MoveToFront<E>::size() const
{
    //list.length();
    return 1;
}


template <typename E>
void MoveToFront<E>::printlist() const
{
    
}


template <typename E>
void MoveToFront<E>::printlist(int n) const
{
    
}


#endif /* MoveToFront_h */
