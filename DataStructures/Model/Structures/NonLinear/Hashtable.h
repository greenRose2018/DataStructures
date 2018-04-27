//
//  Hashtable.h
//  DataStructures
//
//  Created by Morales, Brittney on 4/27/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Hashtable_h
#define Hashtable_h

#include "../Nodes/HashNode.hpp"

template <class Type>
class Hashtable
{
private:
    HashNode<Type> * internalStorage;
    int size;
public:
    Hashtable();
    ~Hashtable();
};

template<class Type>
HashTable<Type> :: Hashtable()
{
    internalStorage = new HashNode<Type>[101];
    size = 0;
}

template<class Type>
Hashtable<Type> :: ~Hashtable()
{
    delete [] internalStorage;
}
#endif /* Hashtable_h */
