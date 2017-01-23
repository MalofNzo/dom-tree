#include "DomTreeNode.h"
#include <fstream>
#include <regex>


int main() {
    vector<string> strv;
    vector<DomTreeNode *> dtnv;
    DomTreeNode* test = new DomTreeNode("root","root text",strv,dtnv);
    delete test;
    return 0;
}