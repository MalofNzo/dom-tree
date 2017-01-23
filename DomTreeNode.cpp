//
// Created by 江涛 on 2017/1/23.
//

#include "DomTreeNode.h"

DomTreeNode::DomTreeNode() {}

DomTreeNode::DomTreeNode(const string &nodename, const string &nodetext, const vector<string> &attributes,
                         const vector<DomTreeNode> &childNodes) : nodename(nodename), nodetext(nodetext),
                                                                  attributes(attributes), childNodes(childNodes) {}

const string &DomTreeNode::getNodename() const {
    return nodename;
}

void DomTreeNode::setNodename(const string &nodename) {
    DomTreeNode::nodename = nodename;
}

const string &DomTreeNode::getNodetext() const {
    return nodetext;
}

void DomTreeNode::setNodetext(const string &nodetext) {
    DomTreeNode::nodetext = nodetext;
}

const vector<string> &DomTreeNode::getAttributes() const {
    return attributes;
}

void DomTreeNode::setAttributes(const vector<string> &attributes) {
    DomTreeNode::attributes = attributes;
}

const vector<DomTreeNode> &DomTreeNode::getChildNodes() const {
    return childNodes;
}

void DomTreeNode::setChildNodes(const vector<DomTreeNode> &childNodes) {
    DomTreeNode::childNodes = childNodes;
}
