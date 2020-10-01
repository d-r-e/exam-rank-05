#ifndef WARLOCK_HPP
# define WARLOCK_HPP
# include <iostream>
class Warlock
{
private:
	std::string _name, _title;

	Warlock();
	Warlock(const Warlock &);
	Warlock & operator=(Warlock const &);
public:
	Warlock(std::string name, std::string title);
	~Warlock();
	void setTitle(std::string const &);
	std::string const &getName(void) const;
	std::string const &getTitle(void) const;
	void introduce(void) const;
};

#endif
