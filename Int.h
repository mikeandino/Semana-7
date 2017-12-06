#ifndef INT_H
#define INT_H

class Int{

public:
	Int(int);
	int value;
	int getValue();
	void setValue(int);
	int operator+(Int&);
	bool operator==(Int&);
	operator int();
	~Int();
};

#endif
