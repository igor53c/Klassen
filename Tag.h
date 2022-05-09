#pragma once
#include <iostream>

using namespace std;

class Tag
{
public:
	Tag();

	Tag(int);

	int getTag() const;

	void setTag(int);

	static int getDefaultTag();
	static void setDefaultTag(int);

private:
	int tag;

	static int DEFAULT_TAG;

	static bool checkTag(int);

};

