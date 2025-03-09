#include "Fixed.hpp"


Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(int n)
{
	std::cout << "Int constructor called\n";
	this->n = n << fractional_bit;
}

Fixed::Fixed(float f)
{
	std::cout << "Float constructor called\n";
	this->n = roundf(f * (1 << 8));
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

std::ostream &operator << (std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called\n";
	return this->n;
}

void		Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called\n";
	this->n = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)this->n / (float)(1 << fractional_bit);
}

int	Fixed::toInt(void) const
{
	return this->n >> fractional_bit;
}
