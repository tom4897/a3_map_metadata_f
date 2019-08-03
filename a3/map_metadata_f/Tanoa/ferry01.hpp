/* [2017,10,10,13,52] */
/* CfgWorlds >> Tanoa >> Names >> ferry01 */
 
areaPosition[]={4609.91, 5239.02}; // Position x, y
areaRadiusA=105.64; // radius A of the location
areaRadiusB=110.88; // radius B of the location
areaAngle=21.54; // Rotation of the location
demography=CIV; // Demography
 
accessPoints[] = // Types: 0 - generic; 1 - on road; 2 - water; 3 - in forest
// [Type, [posX, posY], [radiusA, radiusB, angle]]
{
	{LOCATION_AREA_ACCESSPOINT_ROAD, {3992.65, 5737.03}, 131.5},
	{LOCATION_AREA_ACCESSPOINT_WATER, {4516.45, 4792.14}, 2.61},
	{LOCATION_AREA_ACCESSPOINT, {4631.64, 4911.26}, 353.75},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {4877.27, 5293.49}, 260.38},
	{LOCATION_AREA_ACCESSPOINT_WATER, {4863.08, 5493.37}, 235.14},
	{LOCATION_AREA_ACCESSPOINT, {4906.77, 5210.8}, 276},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {5146.92, 4931.67}, 295.36}
};
 
landmarks[] = 
{
};
 
class Areas
{
	vehicles[] = // Types: 0 - truck or cars; 1 - Cars only; 2 - trucks only; 20 - air; 21 - planes; 22 - helicopters
	// [Type, [posX, posY], [radiusA, radiusB, angle]]
	{
		{LOCATION_AREA_VEHICLE_CAR, {4570.34, 5208.53}, {1.5, 2.5, 214.52}},
		{LOCATION_AREA_VEHICLE_TRUCK, {4582.31, 5220.13}, {1.8, 3.5, 212.43}},
		{LOCATION_AREA_VEHICLE_CAR, {4604.46, 5202.68}, {1.5, 2.5, 117.7}},
		{LOCATION_AREA_VEHICLE_GROUND, {4600.24, 5231.54}, {1.8, 3.5, 123.35}},
		{LOCATION_AREA_VEHICLE_TRUCK, {4600.18, 5282.62}, {1.8, 3.5, 300.94}},
		{LOCATION_AREA_VEHICLE_CAR, {4618.15, 5280.44}, {1.5, 2.5, 254.21}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
		{LOCATION_AREA_FLATSTORAGE, {4604.9, 5298.09}, {8.68055, 4.23243, 105.84, 5}}
	};
	 
};
