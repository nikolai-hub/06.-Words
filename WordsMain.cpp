#include "Word.h"

MapStrInt Word::wordObjectCounts = MapStrInt();
MapStrInt Word::wordCount = MapStrInt();

Word::Word(std::string str) : str(str) {
	wordObjectCounts[str]++;
	wordCount[str]++;
}

Word::Word(const Word& other) {
	str = other.str;
	wordObjectCounts[str]++;
}

std::string Word::getWord() const {
	return str;
}

size_t Word::getCount() const {
	return wordCount[str];
}

bool Word::operator< (const Word& other) const {
	return str < other.str;
}

Word& Word::operator= (const Word& other) {
	if (this != &other)
	{
		str = other.str;
		wordObjectCounts[this->str]++;
	}
	return *this;
}

Word::~Word() {
	int remaining = --(wordObjectCounts[str]);
	if (remaining == 0)
	{
		wordCount[str] = 0;
	}
}