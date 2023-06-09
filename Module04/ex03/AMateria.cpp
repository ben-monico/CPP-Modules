/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 01:57:14 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/11 16:27:47 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// Constructors
AMateria::AMateria() : _type("materia")
{
	std::cout << "\e[0;33mDefault Constructor called of AMateria\e[0m" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "\e[0;33mParameter Constructor called of AMateria\e[0m" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of AMateria\e[0m" << std::endl;
}

// Destructor
AMateria::~AMateria()
{
	std::cout << "\e[0;31mDestructor called of AMateria\e[0m" << std::endl;
}

// Operators
AMateria & AMateria::operator=(const AMateria &assign)
{
	(void) assign; 
	return *this;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* " << this->_type << " does something abstract to " \
	<< target.getName() << " *" << std::endl;
}

std::string const & AMateria::getType() const {	return this->_type; }
