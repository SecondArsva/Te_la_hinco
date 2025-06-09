#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include <string>
# include "ASpell.hpp"

class ATarget
{
	private:
		std::string type;
	public:
		ATarget(std::string type);
		virtual ~ATarget();

		std::string const &getType(void)const;
		virtual ATarget *clone()const = 0;
		void getHitBySpell(const ASpell &spell)const;
};

#endif