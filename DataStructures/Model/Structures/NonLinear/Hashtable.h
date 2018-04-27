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
    HashNode<Type> ** internalStorage;
    long size;
    long capacity;
    double loadFactor;
    
    long getNextPrime();
    bool isPrime(long current);
    void resize();
    long findPosition(HashNode<Type>* insertedNode);
    long handleCollision(HashNode<Type>* insertedNode, long index);
public:
    Hashtable();
    ~Hashtable();
    void insert(Type data);
    long getSize();
    
};

template<class Type>
HashTable<Type> :: Hashtable()
{
    capacity =101;
    internalStorage = new HashNode<Type>*[101];
    size = 0;
    loadFactor = .80;
}

template<class Type>
Hashtable<Type> :: ~Hashtable()
{
    delete [] internalStorage;
}

template<class Type>
long Hashtable<Type> :: getNextPrime()
{
    return -1;
}

template <class Type>
bool Hashtable<Type> :: isPrime(long current)
{
    
    return false;
}

template<class Type>
void Hashtable<Type> :: resize()
{
    
}

template <class Type>
void Hashtable<Type> :: insert(Type value)
{
    
}

template<class Type>
long Hashtable<Type> :: findPosition(HashNode<Type> * insert)
{
    
}

template<class Type>
long Hashtable<Type> :: handleCollisioin(HashNode<Type> * current, long index)
{
    return -1;
}

template<class Type>
long Hashtable<Type> :: getSize()
{
    return -1;
}

#endif /* Hashtable_h */
