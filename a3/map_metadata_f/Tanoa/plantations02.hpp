/* [2017,10,10,13,52] */
/* CfgWorlds >> Tanoa >> Names >> plantations02 */
 
areaPosition[]={12615.4, 7819.28}; // Position x, y
areaRadiusA=160.17; // radius A of the location
areaRadiusB=153.52; // radius B of the location
areaAngle=0; // Rotation of the location
demography=CIV; // Demography
 
accessPoints[] = // Types: 0 - generic; 1 - on road; 2 - water; 3 - in forest
// [Type, [posX, posY], [radiusA, radiusB, angle]]
{
	{LOCATION_AREA_ACCESSPOINT_FOREST, {12140.3, 7756.45}, 83.26},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {12210.6, 8123.82}, 147.51},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {12266.6, 7580.9}, 55.85},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {12401.5, 7488.08}, 30.38},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {12777, 7485.79}, 293.14},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {12856.2, 8097.57}, 264.36},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {12891.1, 8173.17}, 219.28},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {13073.6, 8047.03}, 241.54},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {13095, 7567.54}, 297.14},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {13194.1, 7830.22}, 269.53}
};
 
landmarks[] = 
{
};
 
class Areas
{
	vehicles[] = // Types: 0 - truck or cars; 1 - Cars only; 2 - trucks only; 20 - air; 21 - planes; 22 - helicopters
	// [Type, [posX, posY], [radiusA, radiusB, angle]]
	{
		{LOCATION_AREA_VEHICLE_TRUCK, {12501.8, 7822}, {2.5579, 6.57298, 87.41}},
		{LOCATION_AREA_VEHICLE_GARAGE, {12494.3, 7852.16}, {1.911, 3.695, 90.54}},
		{LOCATION_AREA_VEHICLE_CAR, {12505.2, 7836.87}, {1.578, 2.5, 157.66}},
		{LOCATION_AREA_VEHICLE_TRUCK, {12519.4, 7848.97}, {2.5579, 6.57298, 181.14}},
		{LOCATION_AREA_VEHICLE_TRUCK, {12620, 7909.12}, {2.5579, 6.57298, 181.7}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
		{LOCATION_AREA_FLATSTORAGE, {12495.9, 7861.01}, {5.49036, 8.2852, 269.3, 5}}
	};
	 
};
