#pragma once

#include <string>
#include <memory>
#include <vector>
#include "invalid_type_exception.h"
#include "tag_def_garbo.h"

namespace tag_definitions
{
	class tag_field
	{
	private:
		union u_data
		{
			char c;
			short s;
			long l;
			float f;
		} data;
		int _size = 0;
		char* bytes;
		std::vector<std::shared_ptr<tag_field>> _children;
		e_field_type _type;
		std::string _name;
	public:
		tag_field(e_field_type type, std::string name, int size);
		tag_field(e_field_type type, std::string name, int size, const std::vector<std::shared_ptr<tag_field>>& children);
		int size();
		e_field_type type();
		const std::string& name();
		void set_value(char value);
		void set_value(short value);
		void set_value(long value);
		void set_value(float value);
		char get_char();
		short get_short();
		long get_long();
		float get_float();
		std::vector<std::shared_ptr<tag_field>> get_children();
		std::shared_ptr<tag_field> operator[](const std::string& name);
	};

	std::shared_ptr<tag_definitions::tag_field> padding(int size);
	std::shared_ptr<tag_definitions::tag_field> undefined_tag(std::string name, int size);
	std::shared_ptr<tag_definitions::tag_field> WAWAWEEWAH(std::string name, int size);
	std::shared_ptr<tag_definitions::tag_field> byte_tag(std::string name);
	std::shared_ptr<tag_definitions::tag_field> short_tag(std::string name);
	std::shared_ptr<tag_definitions::tag_field> long_tag(std::string name);
	std::shared_ptr<tag_definitions::tag_field> float_tag(std::string name);
	std::shared_ptr<tag_definitions::tag_field> block_tag(std::string name, std::vector<std::shared_ptr<tag_field>> children);
	std::shared_ptr<tag_definitions::tag_field> tagref_tag(std::string name);
	std::shared_ptr<tag_definitions::tag_field> dataref_tag(std::string name);
	std::shared_ptr<tag_definitions::tag_field> point2d_tag(std::string name);
	std::shared_ptr<tag_definitions::tag_field> point16_tag(std::string name);
	std::shared_ptr<tag_definitions::tag_field> string_tag(std::string name);
	std::shared_ptr<tag_definitions::tag_field> long_string_tag(std::string name);
};