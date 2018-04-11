//
//  BinaryTreeTester.cpp
//  DataStructures
//
//  Created by Morales, Brittney on 3/27/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "BinaryTreeTester.hpp"

void BinaryTreeTester:: testNodes()
{
    cout << "is it working?" << endl;
}

void BinaryTreeTester:: doTreeStuff()
{
    testTree.insert(3);
    testTree.insert(4);
    testTree.insert(-3);
    testTree.insert(2);
    testTree.insert(9);
    testTree.insert(-398980);
    testTree.insert(-38924839);
    testTree.insert(928342);
    testTree.insert(56);
    testTree.insert(55);
    testTree.insert(-344288349);
    testTree.insert(984);
    testTree.insert(6546);
    testTree.insert(31355);
    testTree.insert(40);
    testTree.insert(-30);
    testTree.insert(23);
    testTree.insert(954);
    
//    cout<< "preorder" << endl;
//    testTree.preOrderTraversal();
//
//    cout << "inorder" << endl;
//    testTree.inOrderTraversal();
//
//    cout << "postorder"<< endl;
//    testTree.postOrderTraversal();
    
    cout << "Height" << endl;
    cout << testTree.getHeight() << endl;
    
    cout << "is it Balanced" << endl;
    cout << testTree.isBalanced() << endl;
    
    cout << "is it completed" << endl;
    cout << testTree.isComplete() << endl;
    
    
}
