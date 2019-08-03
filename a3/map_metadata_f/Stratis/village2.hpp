/* [2017,10,10,14,00] */
/* CfgWorlds >> Stratis >> Names >> village2 */
 
areaPosition[]={3075.62, 2142.15}; // Position x, y
areaRadiusA=73.52; // radius A of the location
areaRadiusB=69.88; // radius B of the location
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
		{LOCATION_AREA_VEHICLE_GROUND, {3069.83, 2134.61}, {1.65357, 3.28061, 207.54}},
		{LOCATION_AREA_VEHICLE_GROUND, {3050.14, 2136.93}, {1.65357, 3.28061, 336.14}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
	};
	 
};
