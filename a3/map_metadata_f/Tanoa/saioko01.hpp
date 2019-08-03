/* [2017,10,10,13,52] */
/* CfgWorlds >> Tanoa >> Names >> saioko01 */
 
areaPosition[]={12378.2, 4522.66}; // Position x, y
areaRadiusA=72.21; // radius A of the location
areaRadiusB=94.42; // radius B of the location
areaAngle=0; // Rotation of the location
demography=CIV; // Demography
 
accessPoints[] = // Types: 0 - generic; 1 - on road; 2 - water; 3 - in forest
// [Type, [posX, posY], [radiusA, radiusB, angle]]
{
	{LOCATION_AREA_ACCESSPOINT_ROAD, {11872.7, 4365.57}, 62.11},
	{LOCATION_AREA_ACCESSPOINT, {12028.3, 4703.07}, 115.23},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {12039.8, 4328.72}, 64.96},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {12268.5, 4751.65}, 155.71},
	{LOCATION_AREA_ACCESSPOINT, {12279.4, 4154.14}, 17.94},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {12559.7, 4750.54}, 282.56},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {12575.4, 4568.75}, 255.43},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {12610.7, 4291.01}, 316.28}
};
 
landmarks[] = 
{
};
 
class Areas
{
	vehicles[] = // Types: 0 - truck or cars; 1 - Cars only; 2 - trucks only; 20 - air; 21 - planes; 22 - helicopters
	// [Type, [posX, posY], [radiusA, radiusB, angle]]
	{
		{LOCATION_AREA_VEHICLE_TRUCK, {12352.3, 4578.24}, {2.62469, 6.57298, 205.94}},
		{LOCATION_AREA_VEHICLE_TRUCK, {12380, 4596.59}, {2.62469, 6.57298, 239.79}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
	};
	 
};
