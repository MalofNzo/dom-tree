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
public:
    DomTreeNode();

    DomTreeNode(const string &nodename, const string &nodetext, const vector<string> &attributes,
                const vector<DomTreeNode> &childNodes);

    const string &getNodename() const;

    void setNodename(const string &nodename);

    const string &getNodetext() const;

    void setNodetext(const string &nodetext);

    const vector<string> &getAttributes() const;

    void setAttributes(const vector<string> &attributes);

    const vector<DomTreeNode> &getChildNodes() const;

    void setChildNodes(const vector<DomTreeNode> &childNodes);

private:
    string nodename;
    string nodetext;
    vector<string> attributes;
    vector<DomTreeNode> childNodes;
};


#endif //DOM_TREE_DOMTREENODE_H
