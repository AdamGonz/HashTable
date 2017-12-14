//============================================================================
// Name        : HashTable.cpp
// Author      : Adam Gonzalez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include "utilities.hpp"


using namespace std;

struct KeyPair{
	string key;
	string Data;
};

int hashSum(string temp , int arraySize){
	int size = sizeof(temp);
	int total = 0;
	char word[size];
	for(int i = 0; i < temp.length(); i++){
		word[i] = temp[i];
		total += int(word[i]);
	}

	return total % size;
}

int main() {
	int size = 1000;
	int counter = 0;
	int totalcount = 0;
	vector <KeyPair> anarray[size];
	KeyPair temp;
	for(int i = 0; i< 100;i++){
		int index = hashSum(temp.Data, size);
		temp.key = getRandomString(1,12);
		temp.Data = getRandomString(0,5);
		if(anarray[i].size() > 0){
			counter++;
		}
		anarray[index].push_back(temp);
		cout << "\nTotal For the Value At Position " << i << " Is: " << index;
	}
	for(int i = 0; i < size; i++){
		if(anarray[i].size() > 0){
			totalcount++;
		}
	}
	cout << counter << endl;
	cout << totalcount << endl;
	return 0;
}
