#include "DomTreeNode.h"
#include <fstream>
#include <regex>


int main() {
    vector<int> test;
    for(int i = 0;i<10;i++){
        test.insert(test.end(),i);
    }
    vector<int>::iterator i;
    for(i = test.begin();i!=test.end();i++){
        cout<<*i<<" ";
    }
    return 0;
}