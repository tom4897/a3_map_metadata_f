/* [2017,10,10,13,52] */
/* CfgWorlds >> Tanoa >> Names >> tavu01 */
 
areaPosition[]={1013.98, 7665.85}; // Position x, y
areaRadiusA=251.25; // radius A of the location
areaRadiusB=209.15; // radius B of the location
areaAngle=0; // Rotation of the location
demography=CIV; // Demography
 
accessPoints[] = // Types: 0 - generic; 1 - on road; 2 - water; 3 - in forest
// [Type, [posX, posY], [radiusA, radiusB, angle]]
{
	{LOCATION_AREA_ACCESSPOINT_WATER, {565.619, 8038.01}, 130.26},
	{LOCATION_AREA_ACCESSPOINT_WATER, {742.035, 7308.88}, 28.67},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {1211.96, 7962.46}, 222.65},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {1332.31, 7557.21}, 243.82},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {1459.41, 7306.24}, 322.79},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {1451.16, 7753.63}, 260.26}
};
 
landmarks[] = 
{
};
 
class Areas
{
	vehicles[] = // Types: 0 - truck or cars; 1 - Cars only; 2 - trucks only; 20 - air; 21 - planes; 22 - helicopters
	// [Type, [posX, posY], [radiusA, radiusB, angle]]
	{
		{LOCATION_AREA_VEHICLE_CAR, {845.122, 7660.54}, {1.57798, 3.05621, 223.25}},
		{LOCATION_AREA_VEHICLE_CAR, {853.335, 7671.95}, {1.5, 2.5, 302.93}},
		{LOCATION_AREA_VEHICLE_CAR, {923.893, 7636.64}, {1.5, 2.5, 131.77}},
		{LOCATION_AREA_VEHICLE_CAR, {917.389, 7738.08}, {1.57798, 3.05621, 36.95}},
		{LOCATION_AREA_VEHICLE_CAR, {943.642, 7666.4}, {1.5, 2.5, 35.21}},
		{LOCATION_AREA_VEHICLE_CAR, {943.976, 7687.48}, {1.5, 2.5, 220.39}},
		{LOCATION_AREA_VEHICLE_CAR, {964.879, 7689.45}, {1.5, 2.5, 81.31}},
		{LOCATION_AREA_VEHICLE_CAR, {1013.16, 7727.69}, {1.5, 2.5, 222.23}},
		{LOCATION_AREA_VEHICLE_CAR, {1039.36, 7794.21}, {1.5, 2.5, 359.3}},
		{LOCATION_AREA_VEHICLE_CAR, {1128.21, 7721.12}, {1.5, 2.5, 105.71}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
	};
	 
};
