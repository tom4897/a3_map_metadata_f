/* [2017,10,10,13,52] */
/* CfgWorlds >> Tanoa >> Names >> ferry02 */
 
areaPosition[]={4110.93, 5543.12}; // Position x, y
areaRadiusA=59.79; // radius A of the location
areaRadiusB=111.8; // radius B of the location
areaAngle=38.94; // Rotation of the location
demography=CIV; // Demography
 
accessPoints[] = // Types: 0 - generic; 1 - on road; 2 - water; 3 - in forest
// [Type, [posX, posY], [radiusA, radiusB, angle]]
{
	{LOCATION_AREA_ACCESSPOINT_WATER, {3671.13, 5312.56}, 63.77},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {3742.42, 5637.38}, 103.77},
	{LOCATION_AREA_ACCESSPOINT, {3802.88, 5977.62}, 144.76},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {4111.57, 5800.11}, 178.95},
	{LOCATION_AREA_ACCESSPOINT_WATER, {4344.08, 6040.72}, 199.95},
	{LOCATION_AREA_ACCESSPOINT, {4820.22, 5104.56}, 307.75},
	{LOCATION_AREA_ACCESSPOINT_WATER, {4889.33, 5481.66}, 272.32}
};
 
landmarks[] = 
{
};
 
class Areas
{
	vehicles[] = // Types: 0 - truck or cars; 1 - Cars only; 2 - trucks only; 20 - air; 21 - planes; 22 - helicopters
	// [Type, [posX, posY], [radiusA, radiusB, angle]]
	{
		{LOCATION_AREA_VEHICLE_TRUCK, {4116.26, 5583.45}, {1.8, 3.5, 228.13}},
		{LOCATION_AREA_VEHICLE_CAR, {4123.43, 5616.1}, {1.5, 2.5, 137.22}},
		{LOCATION_AREA_VEHICLE_GROUND, {4148.46, 5555.97}, {1.8, 3.5, 314.03}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
		{LOCATION_AREA_FLATSTORAGE, {4143.33, 5613.3}, {5.68946, 11.5147, 44.72, 5}}
	};
	 
};
