#include <iostream>
#include "in_class_lab_eight.h"
using namespace std;
#include <vector>
#include <fstream>
#include <sstream>

vector<vector<int>> read_graphs(const string name) {
    ifstream input_file(name);

    if (input_file.is_open() == 0) {
        exit(EXIT_FAILURE);
    }

    int nums;
    input_file >> nums;
    
    vector<vector<int>> graphs(nums);

    string next_line;
    getline(input_file, next_line);

    for (int i = 0; i < nums; i++) {
        getline(input_file, next_line);
        istringstream lines(next_line);
        int temp;
        vector<int> new_vect;
        while(lines >> temp) {
            new_vect.push_back(temp);
        }
        graphs[i] = new_vect;
    }
    return graphs;
}


void print_graphs(vector<vector<int>>graphs) {
    int counter = 1;
    for (auto i : graphs) {
        cout << "graph " << counter << ": ";
        for (auto  j : i) {
            cout << " " << j << " ";
        }
        cout <<endl;
        counter++;
        }
}
