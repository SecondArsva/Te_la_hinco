#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell(std::string name, std::string effects)
{
    this->_name = name;
    this->_effetcs = effects;
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
    return (this->_effetcs);
}

void ASpell::launch(ATarget const &target)const
{
    target.getHitBySpell(*this);
}