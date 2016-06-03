#include "singer.h"

Singer::~Singer() {}
std::string Singer::getSinger() { return "Default singer";}

AxlRose::~AxlRose() {}
std::string AxlRose::getSinger() { return "Axl Rose";}

BonScott::~BonScott() {}
std::string BonScott::getSinger() { return "Bon Scott";}

BrianJohnson::~BrianJohnson() {}
std::string BrianJohnson::getSinger() { return "Brian Johnson";}


Singer& getSingerObject(const std::string& iString)
{
	if (iString == "Touch Too Much") { return *(new BonScott());}
	else if (iString == "Hells Bells") { return *(new BrianJohnson());}
	else if (iString == "Whole Lotta Rosie") { return *(new AxlRose());}
	else {return *(new Singer());}
}

std::string getVocalist(const std::string& iString)
{
	return getSingerObject(iString).getSinger();
}
