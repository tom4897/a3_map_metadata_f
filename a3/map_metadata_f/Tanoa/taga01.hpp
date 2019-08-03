/* [2017,10,10,13,52] */
/* CfgWorlds >> Tanoa >> Names >> taga01 */
 
areaPosition[]={12323.3, 1788.19}; // Position x, y
areaRadiusA=106.59; // radius A of the location
areaRadiusB=141.35; // radius B of the location
areaAngle=0; // Rotation of the location
demography=CIV; // Demography
 
accessPoints[] = // Types: 0 - generic; 1 - on road; 2 - water; 3 - in forest
// [Type, [posX, posY], [radiusA, radiusB, angle]]
{
	{LOCATION_AREA_ACCESSPOINT_FOREST, {12071.5, 1944.8}, 112.17},
	{LOCATION_AREA_ACCESSPOINT, {12156.4, 1749.54}, 157.25},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {12289.4, 1609.37}, 8.45},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {12361.2, 2021.51}, 187.63},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {12454, 1716.38}, 309.21},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {12507.4, 1898.01}, 277.26}
};
 
landmarks[] = 
{
};
 
class Areas
{
	vehicles[] = // Types: 0 - truck or cars; 1 - Cars only; 2 - trucks only; 20 - air; 21 - planes; 22 - helicopters
	// [Type, [posX, posY], [radiusA, radiusB, angle]]
	{
		{LOCATION_AREA_VEHICLE_CAR, {12299, 1703.19}, {1.57798, 3.05621, 234.63}},
		{LOCATION_AREA_VEHICLE_GROUND, {12318.9, 1850.2}, {1.911, 3.695, 351.71}},
		{LOCATION_AREA_VEHICLE_GROUND, {12331.7, 1779.86}, {1.911, 3.695, 2.36}},
		{LOCATION_AREA_VEHICLE_TRUCK, {12332.9, 1812.88}, {2.6, 6, 245.82}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
	};
	 
};
