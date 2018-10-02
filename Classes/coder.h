#ifndef Coder_H
#define Coder_H

#include <iostream>
#include <string>

using namespace std;

class Coder
{
	string result = "";
public:
  	Coder();
  	string encode(string text);
	string decode(string text);
};

#endif
