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
#include <cmath>
#include <assert.h>

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
    HashNode<Type> * get(long index);
    bool contains(HashNode<Type> * value);
    
};

template<class Type>
HashTable<Type> :: Hashtable()
{
    capacity = 101;
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
    long nextPrime = (this->capacity * 2) + 1;
    while(!isPrime(nextPrime))
    {
        nextPrime += 2;
    }
    
    return nextPrime;
}

template <class Type>
bool Hashtable<Type> :: isPrime(long current)
{
    if(candidateNumber <= 1)
    {
        return false;
    }
    else if(current == 2 || current == 3)
    {
        return true;
    }
    else if(current % next == 0)
    {
        return false;
    }
    else
    {
        for (int next = 3; next <= sqrt(current) +1; next += 2)
        {
            if(current % next == 0)
            {
                return false;
            }
        }
        return true;
}

template<class Type>
void Hashtable<Type> :: resize()
{
    long updatedCapacity = nextPrime();
    HashNode<Type> ** tempStorage = new HashNode<Type> * [updatedCapacity];
    
    std :: fill_n(tempStorage, updatedCapacity, nullptr);
    
    long oldCapacity = this->capacity;
    this>capcity - updatedCapcity;
    
    for(long index = 0; index < oldCapacity; index++)
    {
        if(hashTableStorage[index] != nullptr)
        {
             HashNode<Type> * temp = internalStorage[index];
            long position = findPosition(temp);
            if(tempStorage[position] == nullptr)
            {
                tempStorage[position] = temp;
            }
            else
            {
                long updatedPosition = handleCollision(temp, position);
                if(updatedPosition != -1)
                {
                    tempStorage[updatedPosition] = temp;
                }
            }
        }
    }
}

template <class Type>
void Hashtable<Type> :: insert(Type value)
{
    this->size++;
    if(((this->size *1.000) / this->capacity) > this->loadFactor)
    {
        resize();
    }
    
    HashNode<Type * temp = new HashNode<Type>(value);
    long index = findPosition(temp);
    
    if(tempStorage[position] == nullptr)
    {
        tempStorage[position] = temp;
    }
    else
    {
        long updatedPosition = handleCollision(temp, index);
        if(updatedPosition != -1)
        {
            tempStorage[updatedPosition] = temp;
        }
    }
}

template<class Type>
long Hashtable<Type> :: findPosition(HashNode<Type> * insert)
{
    long insertPosition = insert->getKey() % this->capacity;
    return insertPosition;
}

template<class Type>
long Hashtable<Type> :: handleCollisioin(long currentPosition)
{
    long shift = 17;
    for ( long position = currentPosition + shift; position != currentPosition; position += shift)
    {
        if(position >= capacity)
        {
            position = position % capacity;
        }
        
        if(internalStorage[position] == nullptr)
        {
            return position;
        }
    }
    return -1;
}

template<class Type>
long Hashtable<Type> :: getSize()
{
    return this->size;
}

template<class Type>
HashNode<Type> * Hashtable<Type> :: get(long index)
{
    assert(index < capacity);
    return internalStorage[index];
}
    
template<class Type>
bool Hashtable<type> :: contains(HashNode<Type> *value)
{
    if(internalStorage[findPosition(value)]->getData() == value->getData())
    {
       return true;
    }
    
    long other = handleCollision(findPosition(value));
    if(internalStorage[other]->getData() == value->getData())
    {
        return true;
    }
    return false;
}
#endif /* Hashtable_h */
