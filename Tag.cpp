#include "Tag.h"

int Tag::DEFAULT_TAG = 1;

Tag::Tag()
{
	tag = DEFAULT_TAG;
}

Tag::Tag(int value) : Tag()
{
	setTag(value);
}

int Tag::getTag() const
{
	return tag;
}

void Tag::setTag(int value)
{
	if (checkTag(value))
		tag = value;
	else
		cerr << "Error value!" << endl;
}

int Tag::getDefaultTag()
{
	return DEFAULT_TAG;
}

void Tag::setDefaultTag(int value)
{
	if (checkTag(value))
		DEFAULT_TAG = value;
	else
		cerr << "Error value!" << endl;
}

bool Tag::checkTag(int value)
{
	return value > 0 && value <= 31;
}
