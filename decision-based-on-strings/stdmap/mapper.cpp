#include "mapper.h"

#include <string>
#include <map>

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
	typedef std::string (*FuncionPointer)();
	std::map<std::string, FuncionPointer> aSongSingerMapper;
	aSongSingerMapper.insert(std::make_pair("Touch Too Much", &getBonScott));
	aSongSingerMapper.insert(std::make_pair("Hells Bells", &getBrian));
	aSongSingerMapper.insert(std::make_pair("Whole Lotta Rosie", &getAxl));

	std::map<std::string, FuncionPointer>::const_iterator functionFinder = aSongSingerMapper.find(iString);

	if (functionFinder != aSongSingerMapper.end())
	{
		FuncionPointer functionPointer = functionFinder->second;
		return (*functionPointer)();
	}
	else
	{
		return getBonScott();
	}
}
