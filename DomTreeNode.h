//
// Created by 江涛 on 2017/1/23.
//
#include <iostream>
#include <string>
#include <vector>
#ifndef DOM_TREE_DOMTREENODE_H
#define DOM_TREE_DOMTREENODE_H

using namespace std;

class DomTreeNode {
private:
    string nodename;
    string nodetext;
    vector<string> attributes;
    vector<DomTreeNode> childNodes;
};


#endif //DOM_TREE_DOMTREENODE_H
