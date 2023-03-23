#include <iostream>
#include <vector>
#include "in_class_lab_eight.h"
using namespace std;

int main() {
    vector<vector<int>>graphs = read_graphs("graph1.txt");
    print_graphs(graphs);
}