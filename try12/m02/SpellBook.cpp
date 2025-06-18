#include "SpellBook.hpp"

SpellBook::SpellBook()
{

}
SpellBook::~SpellBook()
{
	for (std::map<std::string, ASpell *>::iterator it = _map.begin(); it != _map.end(); it++)
		delete it->second;
	_map.clear();
}
void SpellBook::learnSpell(ASpell *spell)
{
	if (spell)
	{
		std::map<std::string, ASpell *>::iterator it = _map.find(spell->getName());
		if (it == _map.end())
			_map[spell->getName()] = spell->clone();
	}
}
void SpellBook::forgetSpell(std::string const &spellName)
{
	std::map<std::string, ASpell *>::iterator it = _map.find(spellName);
	if (it != _map.end())
	{
		delete it->second;
		_map.erase(spellName);
	}
}
ASpell* SpellBook::createSpell(std::string const &spellName)
{
	std::map<std::string, ASpell *>::iterator it = _map.find(spellName);
	if (it != _map.end())
		return (_map[spellName]->clone());
	return (NULL);
}
