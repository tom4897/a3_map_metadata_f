/* [2017,10,10,14,00] */
/* CfgWorlds >> Stratis >> Names >> girna */
 
areaPosition[]={2024.75, 2730.94}; // Position x, y
areaRadiusA=177.16; // radius A of the location
areaRadiusB=111.34; // radius B of the location
areaAngle=350.1; // Rotation of the location
demography=CIV; // Demography
 
accessPoints[] = // Types: 0 - generic; 1 - on road; 2 - water; 3 - in forest
// [Type, [posX, posY], [radiusA, radiusB, angle]]
{
	{LOCATION_AREA_ACCESSPOINT_WATER, {1801.77, 3022.43}, 147.16},
	{LOCATION_AREA_ACCESSPOINT_WATER, {1819.95, 3056.86}, 149.88},
	{LOCATION_AREA_ACCESSPOINT_WATER, {1871.09, 2364.15}, 25.77},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {1967.36, 2425.52}, 339.63},
	{LOCATION_AREA_ACCESSPOINT, {1956.47, 2988.05}, 173.2},
	{LOCATION_AREA_ACCESSPOINT, {2061.64, 2440.64}, 353.17},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {2061.02, 2964.19}, 197.93},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {2203.69, 2960.95}, 219.29},
	{LOCATION_AREA_ACCESSPOINT, {2267.99, 2422.43}, 317.46},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {2252.05, 2681.93}, 289.83},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {2328.54, 2718.22}, 274.68},
	{LOCATION_AREA_ACCESSPOINT, {2324.83, 2823.19}, 268.23}
};
 
landmarks[] = 
{
};
 
class Areas
{
	vehicles[] = // Types: 0 - truck or cars; 1 - Cars only; 2 - trucks only; 20 - air; 21 - planes; 22 - helicopters
	// [Type, [posX, posY], [radiusA, radiusB, angle]]
	{
		{LOCATION_AREA_VEHICLE_GROUND, {1887.24, 2747.05}, {1.65357, 3.28061, 78.87}},
		{LOCATION_AREA_VEHICLE_CAR, {2008.31, 2705.15}, {1.5, 2.5, 298.58}},
		{LOCATION_AREA_VEHICLE_CAR, {1999.97, 2711.55}, {1.5, 2.5, 298.11}},
		{LOCATION_AREA_VEHICLE_GROUND, {2017.11, 2657.89}, {1.65357, 3.28061, 249.26}},
		{LOCATION_AREA_VEHICLE_GROUND, {2034.97, 2728.47}, {1.65357, 3.28061, 218.79}},
		{LOCATION_AREA_VEHICLE_GROUND, {2032.61, 2774.5}, {1.65357, 3.28061, 70.59}},
		{LOCATION_AREA_VEHICLE_CAR, {2058.71, 2689.76}, {1.5, 2.5, 138.66}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
	};
	 
};
