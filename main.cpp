#include "DomTreeNode.h"
#include <fstream>
#include <regex>

string readhtml(string filename);
int main() {
    cout<<readhtml("input.htm");
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