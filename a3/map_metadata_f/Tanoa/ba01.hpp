/* [2017,10,10,13,52] */
/* CfgWorlds >> Tanoa >> Names >> ba01 */
 
areaPosition[]={14301.3, 11613.1}; // Position x, y
areaRadiusA=148.82; // radius A of the location
areaRadiusB=145.88; // radius B of the location
areaAngle=47.06; // Rotation of the location
demography=CIV; // Demography
 
accessPoints[] = // Types: 0 - generic; 1 - on road; 2 - water; 3 - in forest
// [Type, [posX, posY], [radiusA, radiusB, angle]]
{
	{LOCATION_AREA_ACCESSPOINT, {13963.2, 11593.7}, 88.86},
	{LOCATION_AREA_ACCESSPOINT, {13996.8, 11428.9}, 57.62},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {14063.9, 11934.1}, 93.74},
	{LOCATION_AREA_ACCESSPOINT, {14090.8, 11191.3}, 34.23},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {14165, 11890.2}, 162.58},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {14358.3, 11222.2}, 285.67},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {14389.6, 11264.4}, 341.86},
	{LOCATION_AREA_ACCESSPOINT, {14475.1, 11341.8}, 324.01}
};
 
landmarks[] = 
{
};
 
class Areas
{
	vehicles[] = // Types: 0 - truck or cars; 1 - Cars only; 2 - trucks only; 20 - air; 21 - planes; 22 - helicopters
	// [Type, [posX, posY], [radiusA, radiusB, angle]]
	{
		{LOCATION_AREA_VEHICLE_CAR, {14248.1, 11508.9}, {1.5, 2.5, 70.47}},
		{LOCATION_AREA_VEHICLE_TRUCK, {14260.3, 11509}, {1.8, 4.2, 133.77}},
		{LOCATION_AREA_VEHICLE_GROUND, {14264.6, 11512.9}, {1.8, 3.5, 134.96}},
		{LOCATION_AREA_VEHICLE_GROUND, {14251.2, 11531.3}, {1.8, 3.5, 131.75}},
		{LOCATION_AREA_VEHICLE_TRUCK, {14296.8, 11524.6}, {1.8, 4.2, 44.08}},
		{LOCATION_AREA_VEHICLE_CAR, {14280.7, 11538.6}, {1.5, 2.5, 55.6}},
		{LOCATION_AREA_VEHICLE_CAR, {14309.9, 11601.6}, {1.5, 2.5, 133.9}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
		{LOCATION_AREA_FLATMARKET, {14212.1, 11619.4}, {7.56787, 4.47268, 73.02, 5}}
	};
	 
};
