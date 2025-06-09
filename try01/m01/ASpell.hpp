#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include <string>

# include "ATarget.hpp"

class ASpell
{
	private:
		std::string name;
		std::string effects;
	public:
		ASpell(std::string name, std::string effects);
		virtual ~ASpell();

		std::string const &getName(void)const;
		std::string const &getEffects(void)const;
		virtual ASpell *clone()const = 0;
		void lauch(const ATarget &target)const;
};

#endif