/*
 * utilities.cpp
 *
 *  Created on: Apr 25, 2020
 *      Author: keith
 */
#include <iostream>
#include "../includes/utilities.h"
#include "../includes/DrinkOrder.h"

void takeOrders(std::vector<std::unique_ptr<DrinkOrder>> &myDrinkOrders) {
	//TODO add the following orders to the vector
	//	Will,WATER
	myDrinkOrders.push_back(
			std::unique_ptr<DrinkOrder>(
					new DrinkOrder(std::string("Will"), WATER)));
	//	Allen,COFFEE
	myDrinkOrders.push_back(
			std::unique_ptr<DrinkOrder>(
					new DrinkOrder(std::string("Allen"), COFFEE)));
	//	Barnes,WATER
	myDrinkOrders.push_back(
			std::unique_ptr<DrinkOrder>(
					new DrinkOrder(std::string("Barnes"), WATER)));
	//	Elly,COFFEE
	myDrinkOrders.push_back(
			std::unique_ptr<DrinkOrder>(
					new DrinkOrder(std::string("Elly"), COFFEE)));
	//	Constance,COFFEE
	myDrinkOrders.push_back(
			std::unique_ptr<DrinkOrder>(
					new DrinkOrder(std::string("Constance"), COFFEE)));
	//	Zane,WATER
	myDrinkOrders.push_back(
			std::unique_ptr<DrinkOrder>(
					new DrinkOrder(std::string("Zane"), WATER)));
	//  Liz, NONE
	myDrinkOrders.push_back(
			std::unique_ptr<DrinkOrder>(
					new DrinkOrder(std::string("Liz"), NONE)));
}
