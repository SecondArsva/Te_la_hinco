#include "ATarget.hpp"

ATarget::ATarget(std::string type)
{
	this->type = type;
}

ATarget::~ATarget()
{

}

std::string const &ATarget::getType(void)const
{
	return (this->type);
}

void ATarget::getHitBySpell(const ASpell &spell)const
{
	std::cout << this->type << " has been "<< spell.getEffects() << "!" << std::endl;
}
