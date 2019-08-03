/* [2017,10,10,13,52] */
/* CfgWorlds >> Tanoa >> Names >> lumberyard01 */
 
areaPosition[]={5567.66, 11945.4}; // Position x, y
areaRadiusA=208.64; // radius A of the location
areaRadiusB=156.51; // radius B of the location
areaAngle=17.06; // Rotation of the location
demography=location; // Demography
 
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
		{LOCATION_AREA_VEHICLE_CAR, {5454.9, 11888.5}, {3.3, 4.36, 183.54}},
		{LOCATION_AREA_VEHICLE_TRUCK, {5470.3, 11896.2}, {3.3, 6.41863, 122.75}},
		{LOCATION_AREA_VEHICLE_CAR, {5492.8, 11995.2}, {1.105, 3.019, 218.9}},
		{LOCATION_AREA_VEHICLE_TRUCK, {5522.38, 11948.7}, {3.3, 6.41863, 314.74}},
		{LOCATION_AREA_VEHICLE_GROUND, {5539.96, 11984.1}, {3.3, 6.419, 72.06}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
	};
	 
};
