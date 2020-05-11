#ifndef MEMORY_MANAGEMENT_H
#define MEMORY_MANAGEMENT_H
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
extern int notSize;
extern vector<vector<string>>memory;

vector<vector<string>> painting();

void initializeMemory(std::string size);

std::vector<std::vector<std::string>> setHoles(const std::vector<std::vector<std::string>>& x);

std::vector<std::vector<std::string>> deleteProcess(std::string name);

vector<vector<string>> BestFit(vector<vector<string>>& memory,vector<vector<string>>& segment_table);

vector<vector<string>> FirstFit(vector<vector<string>>& memory,vector<vector<string>>& SegmentTeble);







#endif // MEMORY_MANAGEMENT_H