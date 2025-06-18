#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell(std::string name, std::string effects)
{
	this->_name = name;
	this->_effects = effects;
}
ASpell::~ASpell()
{
	
}
std::string ASpell::getName()const
{
	return (this->_name);
}
std::string ASpell::getEffects()const
{
	return (this->_effects);
}
void ASpell::launch(ATarget const &target)const
{
	target.getHitBySpell(*this);
}
