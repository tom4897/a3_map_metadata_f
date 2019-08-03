/* [2017,10,10,13,52] */
/* CfgWorlds >> Tanoa >> Names >> nani01 */
 
areaPosition[]={1919.4, 10681.5}; // Position x, y
areaRadiusA=50; // radius A of the location
areaRadiusB=79.15; // radius B of the location
areaAngle=0; // Rotation of the location
demography=CIV; // Demography
 
accessPoints[] = // Types: 0 - generic; 1 - on road; 2 - water; 3 - in forest
// [Type, [posX, posY], [radiusA, radiusB, angle]]
{
	{LOCATION_AREA_ACCESSPOINT_FOREST, {1924.12, 10479.6}, 2.62},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {1954.63, 10964.2}, 189.3},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {2021.47, 10472.4}, 336.84},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {2104.62, 10584.6}, 280.55},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {2142.54, 10963.8}, 216.28},
	{LOCATION_AREA_ACCESSPOINT, {2208.16, 10872.8}, 235.18}
};
 
landmarks[] = 
{
};
 
class Areas
{
	vehicles[] = // Types: 0 - truck or cars; 1 - Cars only; 2 - trucks only; 20 - air; 21 - planes; 22 - helicopters
	// [Type, [posX, posY], [radiusA, radiusB, angle]]
	{
		{LOCATION_AREA_VEHICLE_GROUND, {1903.04, 10633.1}, {1.911, 3.695, 248.95}},
		{LOCATION_AREA_VEHICLE_TRUCK, {1900.31, 10658.9}, {2.62469, 6.57298, 192.73}},
		{LOCATION_AREA_VEHICLE_CAR, {1910.59, 10673}, {1.57798, 3.05621, 264.54}},
		{LOCATION_AREA_VEHICLE_CAR, {1931.64, 10704.4}, {1.57798, 3.05621, 52.24}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
	};
	 
};
