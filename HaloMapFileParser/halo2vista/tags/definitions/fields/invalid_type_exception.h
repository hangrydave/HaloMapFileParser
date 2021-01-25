#pragma once

#include <exception>
#include <string>

class invalid_type_exception : public std::exception
{
private:
	std::string field_name;
	std::string invalid_type;
public:
	invalid_type_exception(std::string field_name, std::string invalid_type);
	const char* what() const throw();
};

