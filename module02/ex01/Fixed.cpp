/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 15:27:29 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/01 17:39:25 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

	Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	_N = 0;
}

	Fixed::Fixed(int integer)
{
	std::cout << "Int constructor called" << std::endl;
	_N = integer * 256;
}

	Fixed::Fixed(float floating)
{
	std::cout << "Float constructor called" << std::endl;
	_N = roundf(floating * 256);
}

	Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

	Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=(Fixed const &src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_N = src.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	return _N;
}

void	Fixed::setRawBits(int const raw)
{
	_N = raw;
}

float	Fixed::toFloat(void) const
{
	float	res = (float)_N/256;

	return (res);
}

int	Fixed::toInt(void) const
{
	return (_N/256);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & src)
{
	o << src.toFloat();
	return o;
}
