#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class Warlock
{
	private:
		std::string name, title;

		Warlock();
		Warlock(const Warlock &rhs);
		Warlock & operator=(const Warlock &rhs);
	
	public:
		Warlock(std::string const &name, std::string const &title);
		virtual ~Warlock();

		std::string const &getTitle()const;
		std::string const &getName()const;
		void setTitle(std::string const &title);

		void introduce()const;
};

#endif
