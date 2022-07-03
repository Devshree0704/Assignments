#pragma once
#include<iostream>
#include<string>

using namespace std;

class Vehicle
{
	protected:
		string type;
		string noplate;
	public:
		Vehicle(){}
		Vehicle(string t,string np)
		{
			type=t;
			noplate=np;
		}
		int gettype();
		string getnoplate();

};
