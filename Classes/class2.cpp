#include "class2.h"

Class2::Class2()
{
}

string Class2::getDiv(float x, float y)
{
	if(y == 0){
		return "ERROR: NAN (Not A Number)";
	}else{
		result = x / y;
  		return to_string(result);
	}
}

int Class2::getMul(float x, float y)
{
	result = x * y;
	return result;
}
