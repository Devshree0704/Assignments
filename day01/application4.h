#pragma once
#include<iostream>
#include<string>
#include"application3.h"

using namespace std;

class Car:public Vehicle
{
	protected:
		string brand;
		string model;
	public:
		Car(){}
		Car(string t,string np,string b ,string m):Vehicle
		{
			brand=b;
			model=m;
		}
};
