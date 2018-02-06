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


#endif /* Node_hpp */
