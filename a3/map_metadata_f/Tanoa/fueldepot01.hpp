/* [2017,10,10,13,52] */
/* CfgWorlds >> Tanoa >> Names >> fueldepot01 */
 
areaPosition[]={2295.3, 6308.27}; // Position x, y
areaRadiusA=94.03; // radius A of the location
areaRadiusB=83.02; // radius B of the location
areaAngle=0; // Rotation of the location
demography=CIV; // Demography
 
accessPoints[] = // Types: 0 - generic; 1 - on road; 2 - water; 3 - in forest
// [Type, [posX, posY], [radiusA, radiusB, angle]]
{
	{LOCATION_AREA_ACCESSPOINT_ROAD, {1882.81, 6293.56}, 68.88},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {1920.49, 6406.35}, 139.39},
	{LOCATION_AREA_ACCESSPOINT, {1974.79, 6496.15}, 118.51},
	{LOCATION_AREA_ACCESSPOINT, {1980.53, 6148.45}, 58.43},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {2094.27, 6067.72}, 309.12},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {2162.02, 6085.04}, 27.05},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {2313.78, 6077.57}, 354.33},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {2422.43, 6596.14}, 208.65},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {2450.93, 6108.53}, 314.9},
	{LOCATION_AREA_ACCESSPOINT, {2455.68, 6732.53}, 212.06},
	{LOCATION_AREA_ACCESSPOINT, {2639.44, 6429.09}, 253.01},
	{LOCATION_AREA_ACCESSPOINT, {2612.39, 6697.65}, 222.33},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {2693.27, 6597.09}, 223.01}
};
 
landmarks[] = 
{
};
 
class Areas
{
	vehicles[] = // Types: 0 - truck or cars; 1 - Cars only; 2 - trucks only; 20 - air; 21 - planes; 22 - helicopters
	// [Type, [posX, posY], [radiusA, radiusB, angle]]
	{
		{LOCATION_AREA_VEHICLE_TRUCK, {2303.82, 6308.28}, {2.62469, 6.57298, 17.64}},
		{LOCATION_AREA_VEHICLE_GROUND, {2291.11, 6343.59}, {1.911, 3.695, 211.11}},
		{LOCATION_AREA_VEHICLE_TRUCK, {2311.77, 6324.56}, {2.62469, 6.57298, 295.85}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
		{LOCATION_AREA_FLATSTORAGE, {2277.66, 6352.19}, {11.2906, 2.78364, 25.24, 5}}
	};
	 
};
