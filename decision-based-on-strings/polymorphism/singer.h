#include <string>

class Singer {
 public:
	virtual ~Singer();
	virtual std::string getSinger();
};


class AxlRose : public Singer {
 public:
	~AxlRose();
	virtual std::string getSinger();
};

class BonScott : public Singer {
 public:
	~BonScott();
	virtual std::string getSinger();
};

class BrianJohnson : public Singer {
 public:
	~BrianJohnson();
	virtual std::string getSinger();
};

Singer& getSingerObject(const std::string& iString);

std::string getVocalist(const std::string& iString);
