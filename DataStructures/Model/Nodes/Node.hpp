//
//  Node.hpp
//  DataStructures
//
//  Created by Morales, Brittney on 2/6/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <iostream>
//#include
template <class Type>
class Node
{
protected:
    Type data;
public:
    Node();
    Node(Type data);
    void  setData(Type data);
    Type getData();
};

template < class Type>
Node<Type>:: Node()
{
    //Needed for default constructor complication
    //Since when we create a structure it does not have an item to store yet.
}

template <class Type>
Node<Type> :: Node(Type data)
{
    this->data = data;
}

template <class Type>
void Node<Type> :: setData(Type data)
{
    this->data = data;
}

template <class Type>
Type Node<Type> :: getData()
{
    return data;
}
#endif /* Node_hpp */
