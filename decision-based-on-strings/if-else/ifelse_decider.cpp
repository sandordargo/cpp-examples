#include "ifelse_decider.h"

#include <string>

std::string getBonScott()
{
	return "Bon Scott";
}

std::string getBrian()
{
	return "Brian Johnson";
}


std::string getAxl()
{
	return "Axl Rose";
}

std::string getVocalist(const std::string& iString)
{
	if (iString == "Touch Too Much") { return getBonScott();}
	else if (iString == "hellsBells") { return getBrian();}
	else if (iString == "Whole Lotta Rosie") { return getAxl();}
	else {return getBonScott();}
}

