/* [2017,10,10,13,52] */
/* CfgWorlds >> Tanoa >> Names >> murarua01 */
 
areaPosition[]={13989.8, 8385.74}; // Position x, y
areaRadiusA=252.75; // radius A of the location
areaRadiusB=276.82; // radius B of the location
areaAngle=20.85; // Rotation of the location
demography=CIV; // Demography
 
accessPoints[] = // Types: 0 - generic; 1 - on road; 2 - water; 3 - in forest
// [Type, [posX, posY], [radiusA, radiusB, angle]]
{
	{LOCATION_AREA_ACCESSPOINT, {12884, 8592.55}, 100.85},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {13161.8, 8606.02}, 148.89},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {13198.8, 8276.29}, 81.36},
	{LOCATION_AREA_ACCESSPOINT, {13311.3, 9126}, 141.57},
	{LOCATION_AREA_ACCESSPOINT, {13571.6, 7886.09}, 83.78},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {13896.4, 8870.03}, 169.17},
	{LOCATION_AREA_ACCESSPOINT_WATER, {14008.2, 7653.41}, 9.63},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {14167.8, 9064.32}, 131.08},
	{LOCATION_AREA_ACCESSPOINT, {14382.7, 8798.5}, 170.67},
	{LOCATION_AREA_ACCESSPOINT_WATER, {14595, 8615.25}, 243.86}
};
 
landmarks[] = 
{
};
 
class Areas
{
	vehicles[] = // Types: 0 - truck or cars; 1 - Cars only; 2 - trucks only; 20 - air; 21 - planes; 22 - helicopters
	// [Type, [posX, posY], [radiusA, radiusB, angle]]
	{
		{LOCATION_AREA_VEHICLE_CAR, {13811.9, 8489.87}, {1.5, 2.5, 2.9}},
		{LOCATION_AREA_VEHICLE_CAR, {13914.9, 8288.99}, {1.5, 2.5, 359.84}},
		{LOCATION_AREA_VEHICLE_CAR, {13915.1, 8298.96}, {1.5, 2.5, 359.95}},
		{LOCATION_AREA_VEHICLE_TRUCK, {13914.5, 8323.57}, {1.8, 3.5, 278.79}},
		{LOCATION_AREA_VEHICLE_CAR, {13917.2, 8346.6}, {1.5, 2.5, 359.91}},
		{LOCATION_AREA_VEHICLE_CAR, {13933, 8258.45}, {1.5, 2.5, 59.35}},
		{LOCATION_AREA_VEHICLE_CAR, {13930.2, 8276.12}, {1.5, 2.5, 88.48}},
		{LOCATION_AREA_VEHICLE_CAR, {13964, 8184.66}, {1.5, 2.5, 11.19}},
		{LOCATION_AREA_VEHICLE_CAR, {13990.4, 8135.75}, {1.5, 2.5, 95.65}},
		{LOCATION_AREA_VEHICLE_CAR, {13998.5, 8338.98}, {1.5, 2.5, 311.43}},
		{LOCATION_AREA_VEHICLE_GARAGE, {13990.2, 8329.32}, {1.5, 2.5, 123.84}},
		{LOCATION_AREA_VEHICLE_GROUND, {14076.9, 8409.32}, {1.8, 3.5, 215.29}},
		{LOCATION_AREA_VEHICLE_CAR, {14219.9, 8478}, {1.5, 2.5, 268.69}},
		{LOCATION_AREA_VEHICLE_CAR, {14222.3, 8459.51}, {1.5, 2.5, 107.4}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
		{LOCATION_AREA_FLATMARKET, {14035.3, 8405.88}, {7.7884, 8.94277, 215.33, 5}}
	};
	 
};
