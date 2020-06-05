#pragma once
#include <string>
using namespace std;

class polygon
{
public:
	polygon();
	~polygon();
	virtual string getType() = 0;

private:

};