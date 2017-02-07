#include "DomTreeNode.h"
#include "DynamicStack.h"
#include <fstream>
using namespace std;
string readhtml(string filename);
void makeDomTree(string raw);
int main() {
//    string rawhtml = readhtml("input.htm");
//    makeDomTree(rawhtml);
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
void makeDomTree(string raw){
    int htmlsize = raw.size();
    char ftag = '<';
    for(int i = 0;i<10;i++){
        cout<<raw[i]<<(raw[i]==ftag)<<endl;
    }
    return nullptr;
}

