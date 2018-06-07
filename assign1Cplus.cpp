#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
using namespace std;
const int N=40;

void sum(int*p, int n, vector <int> &d){
	int i;
	*p = 0;
	for(i = 0; i < n; ++i)
	*p = *p + d[i];
}

int main(int argc, char** argv) {
    int i;
    int accum = 0;
    vector <int> data; 
    for(i = 0; i < N; ++i)
        data.push_back(i);
    sum(&accum, N, data);      
    std::cout << "sum is " << accum <<  "." << std::endl;
    return 0;
}

