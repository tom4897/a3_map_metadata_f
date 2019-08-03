/* [2017,10,10,13,52] */
/* CfgWorlds >> Tanoa >> Names >> lailai01 */
 
areaPosition[]={3645.14, 2112.05}; // Position x, y
areaRadiusA=124.73; // radius A of the location
areaRadiusB=147.91; // radius B of the location
areaAngle=0; // Rotation of the location
demography=CIV; // Demography
 
accessPoints[] = // Types: 0 - generic; 1 - on road; 2 - water; 3 - in forest
// [Type, [posX, posY], [radiusA, radiusB, angle]]
{
	{LOCATION_AREA_ACCESSPOINT_ROAD, {3107.34, 2105.21}, 121.58},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {3281.53, 2058.32}, 78.46},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {3615.76, 2711.46}, 166.25},
	{LOCATION_AREA_ACCESSPOINT, {3815.49, 2612.92}, 204.74},
	{LOCATION_AREA_ACCESSPOINT, {3935.11, 1954.23}, 305.07},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {4018.26, 2047.03}, 270.85},
	{LOCATION_AREA_ACCESSPOINT, {4018.69, 2304.23}, 241.31}
};
 
landmarks[] = 
{
};
 
class Areas
{
	vehicles[] = // Types: 0 - truck or cars; 1 - Cars only; 2 - trucks only; 20 - air; 21 - planes; 22 - helicopters
	// [Type, [posX, posY], [radiusA, radiusB, angle]]
	{
		{LOCATION_AREA_VEHICLE_CAR, {3591.74, 2184.66}, {1.5, 2.5, 97.36}},
		{LOCATION_AREA_VEHICLE_GROUND, {3579.48, 2201.57}, {1.8, 3.5, 328.16}},
		{LOCATION_AREA_VEHICLE_CAR, {3616.79, 2133.33}, {1.5, 2.5, 185.7}},
		{LOCATION_AREA_VEHICLE_CAR, {3611.99, 2133.7}, {1.5, 2.5, 12.97}},
		{LOCATION_AREA_VEHICLE_CAR, {3669.84, 2142.96}, {1.5, 2.5, 260.85}},
		{LOCATION_AREA_VEHICLE_CAR, {3703.03, 2054.75}, {1.5, 2.5, 172.38}},
		{LOCATION_AREA_VEHICLE_TRUCK, {3698.98, 2168.14}, {1.8, 3.5, 341.6}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
	};
	 
};
