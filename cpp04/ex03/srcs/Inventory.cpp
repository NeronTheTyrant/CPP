/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Inventory.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:51:34 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/11 19:42:53 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inventory.hpp"
#include <iostream>

Inventory::Inventory (void)
	: _itemNb(0) {
	std::cout << "Inventory: Default Constructor" << std::endl;
	this->_stock[0] = NULL;
	this->_stock[1] = NULL;
	this->_stock[2] = NULL;
	this->_stock[3] = NULL;
}

Inventory::Inventory(Inventory const & copy) {
	std::cout << "Inventory: Copy Constructor" << std::endl;
	this->_stock[0] = NULL;
	this->_stock[1] = NULL;
	this->_stock[2] = NULL;
	this->_stock[3] = NULL;
	*this = copy;
}

Inventory::~Inventory (void) {
	std::cout << "Inventory: Destructor" << std::endl;
	this->_clearStock();
}

Inventory &	Inventory::operator= (Inventory const & rhs) {
	std::cout << "Inventory: Assign Operator" << std::endl;
	this->_clearStock();
	this->_itemNb = rhs._itemNb;
	this->_copyStock(rhs);

	return *this;
}

int	Inventory::add (AMateria * m) {
	if (this->_itemNb == 4)
		return (0);
	for (int i = 0; i < 3; i++)
	{
		if (this->_stock[i] == NULL)
		{
			this->_stock[i] = m;
			this->_itemNb += 1;
			return (1);
		}
	}
	std::cout << "exCUSE ME?? Huh????" << std::endl;
	return (0);
}

int	Inventory::remove (int idx) {
	if (this->_checkValidItem(idx) == 0)
		return (0);
	else
	{
		this->_stock[idx] = NULL;
		this->_itemNb -= 1;
		return (1);
	}
}

AMateria * Inventory::getMateria (int idx) const {
	if (this->_checkValidItem(idx) == 0)
		return (NULL);
	else
		return this->_stock[idx];
}

AMateria *	Inventory::getMateria (std::string const & type) const {
	for (int i = 0; i < 3; i++)
	{
		if (this->_stock[i] != NULL)
		{
			if (this->_stock[i]->getType().compare(type) == 0)
				return (this->_stock[i]);
		}
	}
	ERRMSG(INV_ERR, "type not recognised");
	return (NULL);
}

void	Inventory::_clearStock (void) {
	for (int i = 0; i < 3; i++)
	{
		if (this->_stock[i] != NULL)
		{
			delete this->_stock[i];
			this->_stock[i] = NULL;
		}
		this->_itemNb = 0;
	}
}

void	Inventory::_copyStock (Inventory const & copy) {
	for (int i = 0; i < 3; i++)
	{
		if (copy._stock[i] != NULL)
			this->_stock[i] = copy._stock[i]->clone();
	}
}

int	Inventory::_checkValidItem (int idx) const {
	if (this->_itemNb == 0)
	{
		ERRMSG(INV_ERR, NOITEMS);
		return (0);
	}
	if (idx < 0 || idx > 3)
	{
		ERRMSG(INV_ERR, BADIDX);
		return (0);
	}
	if (this->_stock[idx] == NULL)
	{
		ERRMSG(INV_ERR, EMPTY);
		return (0);
	}
	return (1);
}
