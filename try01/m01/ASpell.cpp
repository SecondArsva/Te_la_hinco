#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects)
{
	this->name = name;
	this->effects = effects;
}

ASpell::~ASpell()
{

}

std::string const &ASpell::getName(void)const
{
	return (this->name);
}

std::string const &ASpell::getEffects(void)const
{
	return (this->effects);
}

void ASpell::lauch(const ATarget &target)const
{
	target.getHitBySpell(*this);
}
