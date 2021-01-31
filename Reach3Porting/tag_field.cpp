#include "pch.h"
#include "tag_field.h"

tag_field::tag_field(e_field_type type, int offset, int absolute_offset)
{
	m_field_type = type;
	m_offset = offset;
	m_absolute_offset = absolute_offset;
}