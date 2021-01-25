#include "tag_field.h"

using namespace tag_definitions;

tag_field::tag_field(e_field_type _type, std::string name, int size)
{
	this->_type = _type;
	this->_name = name;
	this->_size = size;
}

tag_field::tag_field(e_field_type type, std::string name, int size, const std::vector<std::shared_ptr<tag_field>>& children)
{
	_type = type;
	_name = name;
	_size = size;
	_children = children;

	int count = _children.size();
	for (int i = 0; i < count; i++)
	{
		std::shared_ptr<tag_field> field = _children[i];
		_size += field->size();
	}
}
int tag_field::size()
{
	return _size;
}

e_field_type tag_field::type()
{
	return _type;
}

const std::string& tag_field::name()
{
	return _name;
}

void tag_field::set_value(char value)
{
	if (_type != e_field_type::f_byte)
		throw invalid_type_exception(_name, "char");

	data.c = value;
}

void tag_field::set_value(short value)
{
	if (_type != e_field_type::f_short)
		throw invalid_type_exception(_name, "short");

	data.s = value;
}

void tag_field::set_value(long value)
{
	if (_type != e_field_type::f_long)
		throw invalid_type_exception(_name, "long");

	data.l = value;
}

void tag_field::set_value(float value)
{
	if (_type != e_field_type::f_float)
		throw invalid_type_exception(_name, "float");

	data.f = value;
}

char tag_field::get_char()
{
	if (_type != e_field_type::f_byte)
		throw invalid_type_exception(_name, "char");

	return data.c;
}

short tag_field::get_short()
{
	if (_type != e_field_type::f_short)
		throw invalid_type_exception(_name, "short");

	return data.s;
}

long tag_field::get_long()
{
	if (_type != e_field_type::f_long)
		throw invalid_type_exception(_name, "long");

	return data.l;
}

float tag_field::get_float()
{
	if (_type != e_field_type::f_float)
		throw invalid_type_exception(_name, "float");

	return data.f;
}

std::vector<std::shared_ptr<tag_field>> tag_field::get_children()
{
	if (_type != e_field_type::f_tag_block)
		throw invalid_type_exception(_name, "tag_field*");

	return _children;
}

std::shared_ptr<tag_field> tag_field::operator[](const std::string& name)
{
	for (std::shared_ptr<tag_field> field : _children)
	{
		if (field->name().compare(name) == 0)
			return field;
	}
	return nullptr;
}
std::shared_ptr<tag_field> tag_definitions::padding(int size)
{
	return std::make_shared<tag_field>(e_field_type::f_undefined, "padding", size);
}

std::shared_ptr<tag_field> tag_definitions::undefined_tag(std::string name, int size)
{
	return std::make_shared<tag_field>(e_field_type::f_undefined, name, size);
}

std::shared_ptr<tag_field> tag_definitions::WAWAWEEWAH(std::string name, int size)
{
	return undefined_tag(name, size);
}

std::shared_ptr<tag_field> tag_definitions::byte_tag(std::string name)
{
	return std::make_shared<tag_field>(e_field_type::f_byte, name, 1);
}

std::shared_ptr<tag_field> tag_definitions::short_tag(std::string name)
{
	return std::make_shared<tag_field>(e_field_type::f_short, name, 2);
}

std::shared_ptr<tag_field> tag_definitions::long_tag(std::string name)
{
	return std::make_shared<tag_field>(e_field_type::f_long, name, 4);
}

std::shared_ptr<tag_field> tag_definitions::float_tag(std::string name)
{
	return std::make_shared<tag_field>(e_field_type::f_float, name, 4);
}

std::shared_ptr<tag_field> tag_definitions::block_tag(std::string name, std::vector<std::shared_ptr<tag_field>> children)
{
	return std::make_shared<tag_field>(e_field_type::f_tag_block, name, 8, children);
}

std::shared_ptr<tag_field> tag_definitions::tagref_tag(std::string name)
{
	return std::make_shared<tag_field>(e_field_type::f_tag_ref, name, 0x10);
}

std::shared_ptr<tag_field> tag_definitions::dataref_tag(std::string name)
{
	return std::make_shared<tag_field>(e_field_type::f_data_ref, name, 0x14);
}

std::shared_ptr<tag_field> tag_definitions::point2d_tag(std::string name)
{
	return std::make_shared<tag_field>(e_field_type::f_point2d, name, 4);
}

std::shared_ptr<tag_field> tag_definitions::point16_tag(std::string name)
{
	return std::make_shared<tag_field>(e_field_type::f_point16, name, 4);
}

std::shared_ptr<tag_field> tag_definitions::string_tag(std::string name)
{
	return std::make_shared<tag_field>(e_field_type::f_string, name, 32);
}

std::shared_ptr<tag_field> tag_definitions::long_string_tag(std::string name)
{
	return std::make_shared<tag_field>(e_field_type::f_long_string, name, 256);
}
