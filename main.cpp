#include <iostream>
#include"list.h"
int main() {
    list list;
    int vlen=list.VertexNum;
    list.create();
    list.print();
    list.DFSTraverse();
    //list.BFS();
    list.kruskal();
    return 0;
}