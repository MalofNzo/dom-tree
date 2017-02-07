#include "DomTreeNode.h"
#include "DynamicStack.h"
#include <fstream>
using namespace std;
string readhtml(string filename);
void makeDomTree(string raw,DomTreeNode* treeNode);
int main() {
    string rawhtml = readhtml("input.htm");
    DomTreeNode* rootNode = new DomTreeNode();
    makeDomTree(rawhtml,rootNode);
    delete rootNode;
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
void makeDomTree(string raw,DomTreeNode* treeNode){
    int htmlsize = raw.size();
    char ftag = '<';
    int i = 0;
    while(i<htmlsize){
        if(raw[i]=='<'){
            string test = "";
            while(raw[i]!='>'){
                if((raw[i]=='/')&&(raw[i+1]=='>')){
                    i++;
                    break; }
                test+=raw[i];
                i++;
            }
            test += raw[i];
            cout<<test<<endl;
        }
        i++;
    }
}

