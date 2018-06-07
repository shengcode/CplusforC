#include <iostream>
#include <cstdlib> //from c library
#include <ctime>
using namespace std;
const int sides=6;
inline int r_sides(){return (rand()%sides+1);}
//inline keyword is a compiler directive, I don't want function call, it's costy

int main(void){
	const int n_dice=2;
	srand(clock());
	cout<< "\nEnter number of tirals:";
	//std::cout, ::scope resolution operator
	int trials;
	cin >> trials;
	int* outcomes = new int [n_dice*sides+1];
	
	
}