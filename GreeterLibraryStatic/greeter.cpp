#include "greeter.h"

namespace Greeter
{
	void Greeter::greet(std::string name) {
		std::cout << "Здравствуйте, " << name << "!" << std::endl;
	}
}