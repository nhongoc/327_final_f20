/*
 * DrinkOrder.cpp
 *
 *  Created on: Apr 25, 2020
 *      Author: keith
 */

#include "../includes/DrinkOrder.h"
#include "../includes/Water.h"
#include "../includes/Coffee.h"

//TODO use customerName and CustomerDrink to initialize
//corresponding member variables, initialize p_drink to null
DrinkOrder::DrinkOrder(std::string customerName, Drinktype customerDrink) :
		customerName(customerName), customerDrink(customerDrink), p_drink(
				nullptr) {

}

//TODO cleanup
DrinkOrder::~DrinkOrder() {
	if (p_drink) {
		delete p_drink;
	}
}

//TODO compare by customerName
bool DrinkOrder::operator<(const DrinkOrder &rs) {
	return customerName < rs.customerName;
}

//TODO returns the name and the Drinktype associated with this order
//if p_drink is null returns customerName+" gets nothing"
//otherwise it returns name +" gets " + the whatami() function of the object that p_drink points to
std::string DrinkOrder::announceNameAndDrink() {
	if (p_drink == NULL) {
		return customerName + std::string(" gets nothing");
	}
	return customerName + std::string(" gets ") + p_drink->whatami();
}

//TODO allocates a new drink based on customerDrink,
//use p_drink to point to it.  if customerDrink==NONE then set p_drink to null
//DO NOT USE ANY IF STATEMENTS IN THIS FUNCTION
void DrinkOrder::makeOrder() {
	switch (customerDrink) {
	case NONE:
		p_drink = nullptr;
		break;
	case COFFEE:
		p_drink = new Coffee();
		break;
	case WATER:
		p_drink = new Water();
		break;
	}
}
