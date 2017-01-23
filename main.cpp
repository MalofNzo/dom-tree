#include "DomTreeNode.h"
#include <fstream>
#include <regex>

string readhtml(string filename);
DomTreeNode* makeDomTree(string raw);
int main() {
    string rawhtml = readhtml("input.htm");
    //cout<<rawhtml<<endl;
    makeDomTree(rawhtml);
    return 0;
}
string readhtml(string filename){
    string output = "";
    char buffer[512];
    ifstream in;
    in.open(filename);
    if(!in.is_open()){
        cout<<"open file error."<<endl;
        exit(0);
    }
    while (!in.eof()){
        in>>buffer;
        output += buffer;
    }
    in.close();
    return output;
}
DomTreeNode* makeDomTree(string raw){
    string ftag("<\\w*>");
    string stag("</+\\w*>");
    return nullptr;
}