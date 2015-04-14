/*
 * HazardAreas.h
 *
 *  Created on: Apr 8, 2015
 *      Author: jordan
 */

#ifndef HAZARDAREAS_H_
#define HAZARDAREAS_H_

#include <iostream>
#include <string.h>
#include <deque>
using namespace std;

class HazardAreas {
public:
	HazardAreas();
	virtual ~HazardAreas();
	void addOneToTotal();
	void minusOneToTotal();
	void displayAllHazard();
private:
	int totalHazard;
	deque<HazardArea> theAreas;

};

class Position
{
public:
	Position(float lat, float longi);
	float getLat();
	float getLong();
	void setPosition(float lat, float longi);
private:
	float lattitude;
	float longitude;
};

#endif /* HAZARDAREAS_H_ */
