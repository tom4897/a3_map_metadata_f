/* [2017,10,10,13,52] */
/* CfgWorlds >> Tanoa >> Names >> sawmill01 */
 
areaPosition[]={11750.5, 6913.12}; // Position x, y
areaRadiusA=95.54; // radius A of the location
areaRadiusB=68.95; // radius B of the location
areaAngle=55.14; // Rotation of the location
demography=CIV; // Demography
 
accessPoints[] = // Types: 0 - generic; 1 - on road; 2 - water; 3 - in forest
// [Type, [posX, posY], [radiusA, radiusB, angle]]
{
	{LOCATION_AREA_ACCESSPOINT_FOREST, {11307.7, 6727.44}, 61.97},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {11319.7, 7241.91}, 125.54},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {11518.3, 7620.83}, 181.38},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {11583.7, 6391.04}, 29.08},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {11886, 7240.39}, 200.45},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {11999, 7130.81}, 221.98},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {12047.9, 6952.99}, 255.8},
	{LOCATION_AREA_ACCESSPOINT, {12390.6, 6676.03}, 291.56},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {12426.5, 6812.38}, 253.87}
};
 
landmarks[] = 
{
};
 
class Areas
{
	vehicles[] = // Types: 0 - truck or cars; 1 - Cars only; 2 - trucks only; 20 - air; 21 - planes; 22 - helicopters
	// [Type, [posX, posY], [radiusA, radiusB, angle]]
	{
		{LOCATION_AREA_VEHICLE_GARAGE, {11757, 6899.06}, {1.5, 2.5, 61.26}},
		{LOCATION_AREA_VEHICLE_GARAGE, {11758.2, 6895.17}, {1.5, 2.5, 55.4}},
		{LOCATION_AREA_VEHICLE_GROUND, {11756.5, 6916.51}, {1.8, 3.5, 61.19}},
		{LOCATION_AREA_VEHICLE_CAR, {11746.3, 6911.39}, {1.5, 2.5, 137.63}},
		{LOCATION_AREA_VEHICLE_TRUCK, {11731.4, 6940.93}, {1.8, 3.5, 148.26}},
		{LOCATION_AREA_VEHICLE_TRUCK, {11739.2, 6945.93}, {1.8, 3.5, 152.38}},
		{LOCATION_AREA_VEHICLE_TRUCK, {11780.7, 6863.87}, {1.8, 3.5, 185.44}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
		{LOCATION_AREA_FLATSTORAGE, {11711.9, 6965.8}, {7.024, 23.892, 322.33, 6}},
		{LOCATION_AREA_FLATSTORAGE, {11737.3, 6977.73}, {12.8192, 32.2555, 142.05, 5}},
		{LOCATION_AREA_FLATSTORAGE, {11763.8, 6885.38}, {7.98528, 3.73747, 239.8, 4}},
		{LOCATION_AREA_FLATSTORAGE, {11782.3, 6900.33}, {8.81057, 9.98633, 142.05, 5}},
		{LOCATION_AREA_FLATSTORAGE, {11803.4, 6880.62}, {5.0618, 3.0164, 199.12, 5}}
	};
	 
};
