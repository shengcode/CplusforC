#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
using namespace std;
const int N=100;

int binarySearch(unsigned int element, unsigned int startIndex, unsigned int endIndex,vector<unsigned int> &myarray){
	if(startIndex>endIndex) return -1;
	unsigned int middleIndex = (startIndex+endIndex)/2;	
	if (element>myarray[middleIndex]){
		return binarySearch(element,middleIndex, endIndex, myarray);
	}
	else if (element<myarray[middleIndex]){
		return binarySearch(element, 0, middleIndex, myarray);
	}
	else if(element==myarray[middleIndex]){
			return middleIndex;		
	}
}

int main (int argc, char**argv){
	vector <unsigned int> myarray;
	for(unsigned int i=0; i<N;i++){
		myarray.push_back(i);		
	}
	std::cout << "my vector is: ";
	for (unsigned int j=0; j<myarray.size();j++){
		std::cout << myarray[j] << " ";
	}
	cout<<endl;
	int elementIndex=binarySearch(4,0,myarray.size(), myarray);
	std::cout <<"the element index you want find is ";
	std::cout << elementIndex;
	std::cout<<endl;
	return 0;
}