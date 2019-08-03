/* [2017,10,10,14,02] */
/* CfgWorlds >> Altis >> Names >> orino */
 
areaPosition[]={10505.9, 17363.7}; // Position x, y
areaRadiusA=176.05; // radius A of the location
areaRadiusB=287.09; // radius B of the location
areaAngle=29.36; // Rotation of the location
demography=CIV; // Demography
 
accessPoints[] = // Types: 0 - generic; 1 - on road; 2 - water; 3 - in forest
// [Type, [posX, posY], [radiusA, radiusB, angle]]
{
	{LOCATION_AREA_ACCESSPOINT, {9607.6, 16917.4}, 63.6},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {10076.3, 16659.1}, 27.26},
	{LOCATION_AREA_ACCESSPOINT, {10095.8, 17805.6}, 134.22},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {10309.1, 17967.1}, 155},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {10495.1, 16672}, 251.21},
	{LOCATION_AREA_ACCESSPOINT, {10699.2, 16988.6}, 307.72},
	{LOCATION_AREA_ACCESSPOINT, {10831, 17329.3}, 256.91}
};
 
landmarks[] = 
{
};
 
class Areas
{
	vehicles[] = // Types: 0 - truck or cars; 1 - Cars only; 2 - trucks only; 20 - air; 21 - planes; 22 - helicopters
	// [Type, [posX, posY], [radiusA, radiusB, angle]]
	{
		{LOCATION_AREA_VEHICLE_CAR, {10438.8, 17213.3}, {1.66406, 3.24902, 114.86}},
		{LOCATION_AREA_VEHICLE_GARAGE, {10413.9, 17225.3}, {1.5, 2.5, 119.74}},
		{LOCATION_AREA_VEHICLE_TRUCK, {10427.5, 17231.4}, {1.8, 4.577, 211.43}},
		{LOCATION_AREA_VEHICLE_TRUCK, {10476.7, 17376.2}, {1.8, 4.577, 122.35}},
		{LOCATION_AREA_VEHICLE_GARAGE, {10582.1, 17455.5}, {1.5, 2.5, 87.95}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
		{LOCATION_AREA_FLATSTORAGE, {10424.8, 17200.3}, {2.78716, 5.77445, 209.24, 5}}
	};
	 
};
