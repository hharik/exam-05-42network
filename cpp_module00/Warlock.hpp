#ifndef WARLOCK_HPP_
#define WARLOCK_HPP_

#include <iostream>
class Warlock 
{
	std::string name;
	std::string title;
	Warlock &operator = (const Warlock &pt);
	Warlock(const Warlock &);
	public:
	~Warlock();
	std::string  const &getName() const;
	void setTitle(const std::string &ot); 
	std::string  const &getTitle() const;
	Warlock(const std::string &na, const std::string &t);
	void introduce() const;
};

#endif