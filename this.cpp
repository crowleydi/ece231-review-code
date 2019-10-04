#include <iostream>

class Foo
{
	protected:
	int number;

	public:

	Foo* whatIsThis()
	{
		return this;
	}

	int setNumber(int value)
	{
		number = value;
	}

	int setNumberAgain(int value)
	{
		this->number = value;
	}

	int getNumber()
	{
		return number;
	}
};

class Barf : public Foo
{
	public:
	void hahaha(int val)
	{
		this->number = val;
	}
};

int main()
{
	Foo a;
	Barf b;

	std::cout << "a=" << a.whatIsThis() << std::endl;
	std::cout << "&a=" << &a << std::endl;
	std::cout << "b=" << b.whatIsThis() << std::endl;
	std::cout << "&b=" << &b << std::endl;

	b.setNumber(5);
	b.setNumberAgain(6);
	std::cout << "b.getNumber()=" << b.getNumber() << std::endl;

	// b is a Barf class. but we are assigning it to a Foo pointer.
	// is that ok? why? why not?
	Foo * ptr = b.whatIsThis();
	b.hahaha(8);
	std::cout << "ptr->getNumber()=" << ptr->getNumber() << std::endl;
	// below line doesn't compile. why not?
	// std::cout << "ptr->number=" << ptr->number << std::endl;

	return 0;
}
