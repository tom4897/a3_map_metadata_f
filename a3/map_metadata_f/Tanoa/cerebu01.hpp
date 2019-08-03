/* [2017,10,10,13,52] */
/* CfgWorlds >> Tanoa >> Names >> cerebu01 */
 
areaPosition[]={2166.36, 4574.45}; // Position x, y
areaRadiusA=110.41; // radius A of the location
areaRadiusB=132.98; // radius B of the location
areaAngle=0; // Rotation of the location
demography=CIV; // Demography
 
accessPoints[] = // Types: 0 - generic; 1 - on road; 2 - water; 3 - in forest
// [Type, [posX, posY], [radiusA, radiusB, angle]]
{
	{LOCATION_AREA_ACCESSPOINT_WATER, {1676.94, 4469.4}, 73.15},
	{LOCATION_AREA_ACCESSPOINT, {1757.58, 4447.87}, 68.33},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {1974.88, 4326.81}, 41.61},
	{LOCATION_AREA_ACCESSPOINT, {2043.63, 4263.5}, 25.46},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {2300.83, 4143.29}, 335.61},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {2400.25, 4403.2}, 316.74},
	{LOCATION_AREA_ACCESSPOINT_WATER, {2444.81, 4213.52}, 335.12}
};
 
landmarks[] = 
{
};
 
class Areas
{
	vehicles[] = // Types: 0 - truck or cars; 1 - Cars only; 2 - trucks only; 20 - air; 21 - planes; 22 - helicopters
	// [Type, [posX, posY], [radiusA, radiusB, angle]]
	{
		{LOCATION_AREA_VEHICLE_CAR, {2182.98, 4635.49}, {1.5, 2.5, 214.52}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
	};
	 
};
