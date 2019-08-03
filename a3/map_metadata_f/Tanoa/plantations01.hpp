/* [2017,10,10,13,52] */
/* CfgWorlds >> Tanoa >> Names >> plantations01 */
 
areaPosition[]={11085.1, 7908.01}; // Position x, y
areaRadiusA=247.76; // radius A of the location
areaRadiusB=118.04; // radius B of the location
areaAngle=0; // Rotation of the location
demography=CIV; // Demography
 
accessPoints[] = // Types: 0 - generic; 1 - on road; 2 - water; 3 - in forest
// [Type, [posX, posY], [radiusA, radiusB, angle]]
{
	{LOCATION_AREA_ACCESSPOINT, {10574.4, 8020.86}, 104.67},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {10610.2, 8287.12}, 130.76},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {10683.2, 7685.36}, 56.84},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {10964, 7585.94}, 351.83},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {11012.6, 8211.54}, 161.67},
	{LOCATION_AREA_ACCESSPOINT, {11097, 7390.51}, 352.84},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {11163.7, 7492.81}, 357.26},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {11319.2, 7694.17}, 349.83},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {11322.2, 8276.92}, 208.63},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {11525.2, 7705.99}, 9.63},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {11597.7, 8027.21}, 261.75},
	{LOCATION_AREA_ACCESSPOINT, {11633.1, 8342.82}, 218.76}
};
 
landmarks[] = 
{
};
 
class Areas
{
	vehicles[] = // Types: 0 - truck or cars; 1 - Cars only; 2 - trucks only; 20 - air; 21 - planes; 22 - helicopters
	// [Type, [posX, posY], [radiusA, radiusB, angle]]
	{
		{LOCATION_AREA_VEHICLE_TRUCK, {10903.3, 7864.85}, {1.8, 3.5, 298.62}},
		{LOCATION_AREA_VEHICLE_TRUCK, {10929.1, 7846.79}, {1.8, 3.5, 202.01}},
		{LOCATION_AREA_VEHICLE_CAR, {10987.4, 7929.73}, {1.5, 2.5, 306.06}},
		{LOCATION_AREA_VEHICLE_GROUND, {11082.5, 7936.79}, {1.8, 3.5, 213.32}},
		{LOCATION_AREA_VEHICLE_GROUND, {11092.2, 7991.59}, {1.8, 3.5, 274.4}},
		{LOCATION_AREA_VEHICLE_GARAGE, {11263.2, 7876.85}, {1.5, 2.5, 26.2}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
		{LOCATION_AREA_FLATSTORAGE, {10944.1, 7840.78}, {11.4771, 7.36118, 185.03, 5}},
		{LOCATION_AREA_FLATSTORAGE, {10946.2, 7874.84}, {12.2342, 11.2375, 4.11, 5}},
		{LOCATION_AREA_FLATSTORAGE, {11293.9, 7893.75}, {10.8832, 8.1659, 109.65, 5}}
	};
	 
};
