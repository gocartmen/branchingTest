#include "Class2.h"

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
