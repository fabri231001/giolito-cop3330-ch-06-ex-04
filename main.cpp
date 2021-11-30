/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Fabrizio Giolito
 */

#include <iostream>
#include "std_lib_facilities.h"

class Name_value{
	public:
	string name;
	int value;
};

void display(vector<Name_value> v);

int main() {
  
	vector<Name_value> v;
	int status = 0;
	string name;
	int value;

	while(status == 0){
		
		cout << "Enter your name and number that you wish to add. Enter NoName 0 to terminate (ex. John 18):\n";
		cin >> name >> value;

		if(name.compare("NoName") && value == 0)
			status = 1;

		for(int i = 0; i < v.size(); i++){
			if(v[i].name.compare(name) == 0){
				cout << "This name has already been added. Program terminated.\n";
				display(v);
				return 0;
			}
		}

		Name_value temp;
		temp.value = value;
		temp.name = name;

		v.push_back(temp);
		cout << "Name and value added.\n";
	}

	display(v);

	return 0;
	
} 

void display(vector<Name_value> v){

	cout << "Your list is:\n";

	for(int i = 0; i < v.size(); i++){
		cout << v[i].name << " " << v[i].value << "\n";
	}
}