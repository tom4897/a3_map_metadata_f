/* [2017,10,10,13,52] */
/* CfgWorlds >> Tanoa >> Names >> ferry03 */
 
areaPosition[]={2259.87, 8606.96}; // Position x, y
areaRadiusA=76.89; // radius A of the location
areaRadiusB=79.72; // radius B of the location
areaAngle=0; // Rotation of the location
demography=CIV; // Demography
 
accessPoints[] = // Types: 0 - generic; 1 - on road; 2 - water; 3 - in forest
// [Type, [posX, posY], [radiusA, radiusB, angle]]
{
	{LOCATION_AREA_ACCESSPOINT_WATER, {1922.38, 8880.22}, 131.72},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {2026.99, 8456.54}, 57.7},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {2049.78, 8321.8}, 49.86},
	{LOCATION_AREA_ACCESSPOINT_WATER, {2139.58, 8946.01}, 165.58},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {2169.09, 8416.2}, 34.67},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {2297.79, 8398.38}, 349.88},
	{LOCATION_AREA_ACCESSPOINT_WATER, {2520.9, 8580.72}, 281.32}
};
 
landmarks[] = 
{
};
 
class Areas
{
	vehicles[] = // Types: 0 - truck or cars; 1 - Cars only; 2 - trucks only; 20 - air; 21 - planes; 22 - helicopters
	// [Type, [posX, posY], [radiusA, radiusB, angle]]
	{
		{LOCATION_AREA_VEHICLE_TRUCK, {2262.89, 8604.85}, {2.62469, 6.57298, 180.11}},
		{LOCATION_AREA_VEHICLE_GROUND, {2250.16, 8583.83}, {1.911, 3.695, 41.63}},
		{LOCATION_AREA_VEHICLE_GROUND, {2283.16, 8603.02}, {1.911, 3.695, 273.76}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
		{LOCATION_AREA_FLATSTORAGE, {2273.01, 8591.56}, {3.48046, 4.89015, 92.42, 5}}
	};
	 
};
