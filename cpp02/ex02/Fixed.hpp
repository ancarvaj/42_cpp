#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	int			n;
	static const int fractional_bit = 8;
	
	public:
		Fixed();
		Fixed(const int);
		Fixed(const float);
		Fixed(Fixed const&);
		Fixed &operator=(Fixed const&);
		
		bool	operator<(Fixed const&) const;
		bool	operator>(Fixed const&) const;
		bool	operator<=(Fixed const&) const;
		bool	operator>=(Fixed const&) const;

		bool	operator==(Fixed const&) const;
		bool	operator!=(Fixed const&) const;
		
		Fixed	&operator++();
		Fixed	operator++(int);
		
		Fixed	&operator--();
		Fixed	operator--(int);
		
		Fixed	operator+(Fixed const &) const;
		Fixed	operator-(Fixed const &) const;
		
		Fixed	operator*(Fixed const &) const;
		Fixed	operator/(Fixed const &) const;
		~Fixed();
		
		int			getRawBits(void) const;
		void		setRawBits(int const);
		float		toFloat(void) const;
		int			toInt(void) const;

		static const Fixed		&min(Fixed const&, Fixed const&);
		static const Fixed		&min(Fixed&, Fixed&);
		
		static const Fixed		&max(Fixed const&, Fixed const&);
		static const Fixed		&max(Fixed&, Fixed&);
};




std::ostream &operator << (std::ostream& os, const Fixed& fixed);

#endif
