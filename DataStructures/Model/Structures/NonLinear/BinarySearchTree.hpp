//
//  BinarySearchTree.hpp
//  DataStructures
//
//  Created by Morales, Brittney on 3/29/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include <iostream>
#include "Tree.hpp"
using namespace std:

template <class Type>
class BinarySearchTree : public Tree<Type>
{
protected:
    int calculateSize(BinarySearchTree<Type> * startNode);
    int calculateHeight(BinarySearchTree<Type> * startNode);
    bool isBalanced(BinarySearchTree<Type> * startNode);
    bool isComplete(BinarySearchTree<Type> * startNode, int index, int size);
    
    void inOrderTraversal(BinarySearchTree<Type> * inStart);
    void preOrderTraversal(BinarySearchTree<Type> * preStart);
    void postOrderTraversal(BinarySearchTree<Type> * postStart);
    
    BinarySearchTree<Type> * getRightMostChild(BinarySearchTree<Type> * current);
    BinarySearchTree<Type> * getLeftMostChild(BinarySearchTree<Type> * current);
    
    void removeNode(BinarySearchTree<Type> * removeMe);
    
public:
    BinarySearchTree(); // Constructor
    ~BinarySearchTree(); // Destructor
    
    BinarySearchTree<Type> * getRoot();
    void setRoot(BinarySearchTree<Type> * root);
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    void demoTraversalSteps(BinarySearchTree<Type> * node);
    
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    
    bool contains(Type value);
    void insert(Type itemToInsert);
    void remove(Type value);
    
    Type findMinimum();
    Type findMaximum();
};
template <class Type>
BinarySearchTree<Type> :: BinarySearchTree()
{
    this->root = nullptr;
}

template <class Type>
void BinarySearchTree<Type> :: insert(Type itemToInsert)
{
    BinarySearchTree<Type> * insertMe = new BinarySearchTree<Type>(itemToInsert);
    BinarySearchTree<Type> * previous = nullptr;
    BinarySearchTree<Type> * current = this->root;
    
    if(current == nullptr)
    {
        this->root = insertMe;
    }
    else
    {
        while(current != nullptr)
        {
            previous = current;
            if(itemToInsert < current->getData())
            {
                current= current->getLeftNode();
            }
            else if( itemToInsert > current->getData())
            {
                current = current-> current->getRightNode();
            }
            else //remove ccerr after verification of understanding
            {
                cerr<< "Item exist already - Exiting insert" << endl;
            }
        }
        
        if(previous->getData() > itemToInsert )
        {
            previous->setLeftNode(insertMe);
        }
        else
        {
            previous->setRightNode(insertMe);
        }
        insertMe->setRootNode(previous);
    }

}


#endif /* BinarySearchTree_hpp */
