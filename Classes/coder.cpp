#include "coder.h"

Coder::Coder()
{
}

string Coder::encode(string text)
{
	for(int i=0;i<text.length();i++){
		result[i] = text[i] + 3;
	}

	return result;
}

string Coder::decode(string text)
{
	for(int i=0;i<text.length();i++){
		result[i] = text[i] - 3;
	}

	return result;
}
