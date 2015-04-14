/*
 * HazardAreas.cpp
 *
 *  Created on: Apr 8, 2015
 *      Author: jordan
 */

#include "HazardAreas.h"

HazardAreas::HazardAreas() {
	// TODO Auto-generated constructor stub
	totalHazard = 0;
}

HazardAreas::~HazardAreas() {
	// TODO Auto-generated destructor stub
}

void HazardAreas::displayAllHazard(){
	for(int i = 0; i < theAreas.size(); i++)
	{

	}
}

void HazardAreas::addOneToTotal() {
	totalHazard = totalHazard + 1;
}

void HazardAreas::minusOneToTotal() {
	totalHazard = totalHazard - 1;
}

Position::Position(float lat, float longi) {
	// TODO Auto-generated destructor stub
	lattitude = lat;
	longitude = longi;
}

void Position::setPosition(float lat, float longi) {
	lattitude = lat;
	longitude = longi;
}

float Position::getLat(){
	return lattitude;
}

float Position::getLong(){
	return longitude;
}
