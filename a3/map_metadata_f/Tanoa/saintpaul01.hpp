/* [2017,10,10,13,52] */
/* CfgWorlds >> Tanoa >> Names >> saintpaul01 */
 
areaPosition[]={7939.3, 13489.1}; // Position x, y
areaRadiusA=288.19; // radius A of the location
areaRadiusB=272.31; // radius B of the location
areaAngle=43.47; // Rotation of the location
demography=location; // Demography
 
accessPoints[] = // Types: 0 - generic; 1 - on road; 2 - water; 3 - in forest
// [Type, [posX, posY], [radiusA, radiusB, angle]]
{
	{LOCATION_AREA_ACCESSPOINT_ROAD, {7551.06, 13529.1}, 54.62},
	{LOCATION_AREA_ACCESSPOINT, {7595.92, 13438.3}, 72.88},
	{LOCATION_AREA_ACCESSPOINT_WATER, {7609.13, 13675.5}, 118.07},
	{LOCATION_AREA_ACCESSPOINT_WATER, {7727.22, 13796.2}, 154.61},
	{LOCATION_AREA_ACCESSPOINT, {7761.11, 13189.2}, 24.61},
	{LOCATION_AREA_ACCESSPOINT, {7873.16, 13202.4}, 9.5},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {8008.79, 13176.5}, 6.36},
	{LOCATION_AREA_ACCESSPOINT_WATER, {8120.01, 13894.4}, 198.06},
	{LOCATION_AREA_ACCESSPOINT, {8165.95, 13200}, 321.99},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {8296.55, 13599.6}, 359.43},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {8351.95, 13677.6}, 259.06}
};
 
landmarks[] = 
{
};
 
class Areas
{
	vehicles[] = // Types: 0 - truck or cars; 1 - Cars only; 2 - trucks only; 20 - air; 21 - planes; 22 - helicopters
	// [Type, [posX, posY], [radiusA, radiusB, angle]]
	{
		{LOCATION_AREA_VEHICLE_CAR, {7815.9, 13503.7}, {2.05998, 4.3072, 143.82}},
		{LOCATION_AREA_VEHICLE_CAR, {7856.57, 13520.4}, {1.816, 3.40322, 169.29}},
		{LOCATION_AREA_VEHICLE_CAR, {7912.55, 13493.7}, {2.365, 4.422, 159.02}},
		{LOCATION_AREA_VEHICLE_CAR, {7913.76, 13503.4}, {2.365, 4.422, 127.78}},
		{LOCATION_AREA_VEHICLE_GROUND, {7955.82, 13579.2}, {2.365, 4.422, 4.86}},
		{LOCATION_AREA_VEHICLE_GROUND, {7958.73, 13560.5}, {1.816, 2.901, 177.91}},
		{LOCATION_AREA_VEHICLE_GROUND, {7997.98, 13449.2}, {2.365, 4.422, 228.49}},
		{LOCATION_AREA_VEHICLE_GROUND, {8045.39, 13435.9}, {2.365, 4.422, 155.66}},
		{LOCATION_AREA_VEHICLE_TRUCK, {8097.03, 13383.6}, {2.365, 4.422, 187.5}},
		{LOCATION_AREA_VEHICLE_CAR, {8108.33, 13384.1}, {2.365, 4.422, 158.29}},
		{LOCATION_AREA_VEHICLE_GROUND, {8110.64, 13392.5}, {2.365, 4.422, 97.3}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
	};
	 
};
