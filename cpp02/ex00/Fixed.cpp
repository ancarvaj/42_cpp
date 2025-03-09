#include "Fixed.hpp"

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->n = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called\n";
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "copy assigment operator called\n";
	if (this != &fixed)
		this->n = fixed.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return this->n;
}

void		Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->n = raw;
}
