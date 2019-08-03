/* [2017,10,10,13,52] */
/* CfgWorlds >> Tanoa >> Names >> savaka01 */
 
areaPosition[]={7118.87, 4173.6}; // Position x, y
areaRadiusA=175.21; // radius A of the location
areaRadiusB=163.36; // radius B of the location
areaAngle=0; // Rotation of the location
demography=CIV; // Demography
 
accessPoints[] = // Types: 0 - generic; 1 - on road; 2 - water; 3 - in forest
// [Type, [posX, posY], [radiusA, radiusB, angle]]
{
	{LOCATION_AREA_ACCESSPOINT_WATER, {6625.49, 3859.43}, 60.89},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {6680.89, 4257.31}, 95.43},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {6784.35, 3999.02}, 56.08},
	{LOCATION_AREA_ACCESSPOINT, {6795.17, 4338.76}, 117.21},
	{LOCATION_AREA_ACCESSPOINT_WATER, {7005.14, 4496.18}, 161.69},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {7116.53, 4440.71}, 184.78}
};
 
landmarks[] = 
{
};
 
class Areas
{
	vehicles[] = // Types: 0 - truck or cars; 1 - Cars only; 2 - trucks only; 20 - air; 21 - planes; 22 - helicopters
	// [Type, [posX, posY], [radiusA, radiusB, angle]]
	{
		{LOCATION_AREA_VEHICLE_TRUCK, {7034.02, 4127.81}, {1.8, 3.5, 258.47}},
		{LOCATION_AREA_VEHICLE_CAR, {7062.65, 4131.1}, {1.5, 2.5, 55.11}},
		{LOCATION_AREA_VEHICLE_CAR, {7086.11, 4234.97}, {1.5, 2.5, 116.46}},
		{LOCATION_AREA_VEHICLE_CAR, {7165.9, 4236.3}, {1.5, 2.5, 284.86}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
		{LOCATION_AREA_FLATMARKET, {7074.01, 4226.94}, {3.90843, 5.74275, 336.07, 5}},
		{LOCATION_AREA_FLATGARDEN, {7068.32, 4252.48}, {4.26974, 3.30021, 252.74, 5}},
		{LOCATION_AREA_FLATGARDEN, {7100.97, 4222.54}, {4.93094, 3.45433, 191.24, 5}}
	};
	 
};
