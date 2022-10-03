#ifndef WORD_H
#define WORD_H

#include <cstdlib>
#include <string>
#include <map>
#include <set>

typedef std::map<std::string, int> MapStrInt;

class Word {
private:
	std::string str;
	static MapStrInt wordObjectCounts;
	static MapStrInt wordCount;
public:

	Word(std::string str);
	Word(const Word& other);
	std::string getWord() const;
	size_t getCount() const;

	bool operator< (const Word& other) const;
	Word& operator= (const Word& other);

	~Word();

	
};


#endif // !WORD_H
