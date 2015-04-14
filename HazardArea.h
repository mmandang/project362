/*
 * HazardArea.h
 *
 *  Created on: Apr 8, 2015
 *      Author: jordan
 */

#ifndef HAZARDAREA_H_
#define HAZARDAREA_H_

#include "HazardAreas.h"

enum hazardType {PHYSICAL = 0, BIOLOGICAL = 1, CHEMICAL = 2};

class HazardArea {
public:
	HazardArea();
	virtual ~HazardArea();
	HazardArea(int id, float theRadius, int theType, string info, float lat, float longi);
	void setHazardArea(int id, float theRadius, int theType, string info, float lat, float longi);
	int getHazardAreaId();
	float getRadius();
	hazardType getType();
	Position getPosition();
	void displayHazard();
private:
	int hazardAreaId;
	float radius;
	hazardType type;
	string hazardInfo;
	Position thePosition;

};



#endif /* HAZARDAREA_H_ */
