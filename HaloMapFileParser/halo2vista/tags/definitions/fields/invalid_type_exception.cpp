#include "invalid_type_exception.h"

invalid_type_exception::invalid_type_exception(std::string field_name, std::string invalid_type)
{
	this->field_name = field_name;
	this->invalid_type = invalid_type;
};

const char* invalid_type_exception::what() const throw()
{
	std::string message = ("invalid type " + invalid_type + " used on field " + field_name);
	return message.c_str();
};