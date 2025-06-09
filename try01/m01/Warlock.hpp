#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>

class Warlock
{
	private:
		std::string name;
		std::string title;
	public:
		Warlock(std::string name, std::string title);
		~Warlock();

		std::string const &getName(void)const;
		std::string const &getTitle(void)const;
		void setTitle(std::string const &title);

		void introduce() const;
};

#endif