#include "Fixed.hpp"

Fixed::~Fixed(){}

Fixed::Fixed(int n)
{
	this->n = n << fractional_bit;
}

Fixed::Fixed(float f)
{
	this->n = roundf(f * (1 << 8));
}

Fixed::Fixed()
{
	this->n = 0;
}

Fixed::Fixed(Fixed const &copy)
{
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
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
	return this->n;
}

void		Fixed::setRawBits(int const raw)
{
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

bool Fixed::operator<(Fixed const &f) const
{
	return this->getRawBits() < f.getRawBits();
}

bool Fixed::operator>(Fixed const &f) const
{

	return this->getRawBits() > f.getRawBits();
}

bool Fixed::operator<=(Fixed const &f) const
{
	return this->getRawBits() <= f.getRawBits();
}

bool Fixed::operator>=(Fixed const &f) const
{
	return this->getRawBits() >= f.getRawBits();
}

bool Fixed::operator==(Fixed const &f) const
{
	return this->getRawBits() == f.getRawBits();
}

bool Fixed::operator!=(Fixed const &f) const
{
	return this->getRawBits() != f.getRawBits();
}

Fixed	Fixed::operator+(Fixed const &f) const
{
	Fixed _new;
	_new.setRawBits(this->getRawBits() + f.getRawBits());
	return _new;
}

Fixed	Fixed::operator-(Fixed const &f) const
{
	Fixed _new;
	_new.setRawBits(this->getRawBits() - f.getRawBits());
	return _new;
}

Fixed	Fixed::operator*(Fixed const &f) const
{
	Fixed _new;
	_new.setRawBits((this->getRawBits() * f.getRawBits()) >> this->fractional_bit);
	return _new;
}

Fixed	Fixed::operator/(Fixed const &f) const
{
	Fixed _new;
	_new.setRawBits((this->getRawBits() / f.getRawBits()) << this->fractional_bit);
	return _new;
}

Fixed	&Fixed::operator++()
{
	++this->n; return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed old = *this; operator++();
	return old;
}


Fixed	&Fixed::operator--()
{
	--this->n;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed old = *this;
	operator--();
	return old;
}

const Fixed	&Fixed::min(Fixed const &f1, Fixed const &f2)
{
	if (f1 < f2)
		return f1;
	return f2;
}

const Fixed	&Fixed::min(Fixed &f1, Fixed &f2)
{
	return min((const Fixed&)f1, (const Fixed&)f2);
}

const Fixed	&Fixed::max(Fixed const &f1, Fixed const &f2)
{
	if (f1 > f2)
		return f1;
	return f2;
}

const Fixed	&Fixed::max(Fixed &f1, Fixed &f2)
{
	return max((const Fixed&)f1, (const Fixed&)f2);
}
