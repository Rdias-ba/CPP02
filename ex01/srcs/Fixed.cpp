/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:17:05 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/05 05:03:49 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

//représentation binaire correspondante du nombre entier par convertion en virgule fixe
Fixed::Fixed(const int myInt) : rawBits(myInt * (1 << Fixed::fractional_bits))
{
	std::cout << "Int constructor called" << std::endl;
}

//représentation binaire correspondante du nombre flaotant par convertion en virgule fixe
Fixed::Fixed(const float myFloat) : rawBits(roundf(myFloat * (1 << Fixed::fractional_bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &base)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(base.getRawBits());
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits() member function called" << std::endl;
	return this->rawBits;
}

void Fixed::setRawBits(int const raw)
{
	this->rawBits = raw;
}

//convertit la valeur en virgule fixe en nombre entier
int Fixed::toInt(void) const
{
	return this->rawBits >> Fixed::fractional_bits;
}

// convertit la valeur en virgule fixe en nombre à virgule flottante
float Fixed::toFloat(void) const
{
	return (float)this->rawBits / (float)(1 << Fixed::fractional_bits);
}

std::ostream &operator<<(std::ostream &stream, const Fixed &nbr)
{
	stream << nbr.toFloat();
	return stream;
}