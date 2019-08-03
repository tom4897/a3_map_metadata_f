/* [2017,10,10,14,00] */
/* CfgWorlds >> Stratis >> Names >> farm2 */
 
areaPosition[]={4503.49, 6802.2}; // Position x, y
areaRadiusA=35.73; // radius A of the location
areaRadiusB=41.87; // radius B of the location
areaAngle=0; // Rotation of the location
demography=CIV; // Demography
 
accessPoints[] = // Types: 0 - generic; 1 - on road; 2 - water; 3 - in forest
// [Type, [posX, posY], [radiusA, radiusB, angle]]
{
};
 
landmarks[] = 
{
};
 
class Areas
{
	vehicles[] = // Types: 0 - truck or cars; 1 - Cars only; 2 - trucks only; 20 - air; 21 - planes; 22 - helicopters
	// [Type, [posX, posY], [radiusA, radiusB, angle]]
	{
		{LOCATION_AREA_VEHICLE_GROUND, {4496.09, 6776.19}, {1.65357, 3.28061, 17.84}},
		{LOCATION_AREA_VEHICLE_CAR, {4495.18, 6797.11}, {1.5, 2.5, 336.15}},
		{LOCATION_AREA_VEHICLE_GROUND, {4507.97, 6793.74}, {1.65357, 3.28061, 85.46}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
	};
	 
};
