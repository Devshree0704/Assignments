#include<iostream>
#include<string>
#include"application3.h"
#include"application4.h"

using namespace std;


string Vehicle::gettype(){return type;}
string Vehicle::getnoplate(){return notype;}

int Car::display()

{	
	cout<<"\nCar Type:-"<<name<<endl;
	cout<<"Car Number:-"<<noplate<<endl;
	cout<<"Car Brand:-"<<brand<<endl;
	cout<<"Car Model:-"<<model<<endl;

	return 0;
}
