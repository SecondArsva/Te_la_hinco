#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>
# include <map>

# include "ASpell.hpp"
# include "ATarget.hpp"

class Warlock
{
	private:
		std::string _name;
		std::string _title;
		std::map<std::string, ASpell *> _spellBook;
	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock();
		std::string const &getName()const;
		std::string const &getTitle()const;
		void setTitle(std::string const &title);
		void introduce() const;

		void learnSpell(ASpell *spell);
		void forgetSpell(std::string spellName);
		void launchSpell(std::string spellName, ATarget &target);
};

#endif