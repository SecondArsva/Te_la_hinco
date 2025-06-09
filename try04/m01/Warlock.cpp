#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title)
{
	this->_name = name;
	this->_title = title;
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << this->_name << ": My job here is done!" << std::endl;
}

std::string Warlock::getName()const
{
	return (this->_name);
}

std::string Warlock::getTitle()const
{
	return (this->_title);
}

void Warlock::setTitle(std::string const &title)
{
	this->_title = title;
}

void Warlock::introduce()const
{
	std::cout <<
	this->_name << ": I am "
	<< this->_name <<
	", "<<this->_title<<"!"
	<< std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
	if (spell != nullptr)
	{
		std::map<std::string, ASpell *>::iterator it = this->_spellBook.find(spell->getName());
		if (it == this->_spellBook.end())
			this->_spellBook[spell->getName()] = spell->clone();
	}
}

void Warlock::forgetSpell(std::string spellName)
{
	std::map<std::string, ASpell *>::iterator it = this->_spellBook.find(spellName);
	if (it != _spellBook.end())
	{
		delete it->second;
		_spellBook.erase(it);
	}
}

void Warlock::launchSpell(std::string spellName, ATarget const &target)
{
	std::map<std::string, ASpell *>::iterator it = this->_spellBook.find(spellName);
	if (it != _spellBook.end())
		it->second->lauch(target);
}