/* [2017,10,10,13,52] */
/* CfgWorlds >> Tanoa >> Names >> ipota01 */
 
areaPosition[]={12289.4, 13955.2}; // Position x, y
areaRadiusA=72.1; // radius A of the location
areaRadiusB=66.75; // radius B of the location
areaAngle=0; // Rotation of the location
demography=CIV; // Demography
 
accessPoints[] = // Types: 0 - generic; 1 - on road; 2 - water; 3 - in forest
// [Type, [posX, posY], [radiusA, radiusB, angle]]
{
	{LOCATION_AREA_ACCESSPOINT_WATER, {11439, 13991.6}, 93.14},
	{LOCATION_AREA_ACCESSPOINT_WATER, {11652.8, 13552.5}, 58.59},
	{LOCATION_AREA_ACCESSPOINT, {11974.9, 14230.7}, 129.22},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {12239.4, 14282.6}, 119.53},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {12272.5, 14294.1}, 237.63},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {12417.1, 14136.7}, 215.63},
	{LOCATION_AREA_ACCESSPOINT_WATER, {12502.2, 13474.5}, 337.71},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {12744.8, 13952.1}, 271.94}
};
 
landmarks[] = 
{
};
 
class Areas
{
	vehicles[] = // Types: 0 - truck or cars; 1 - Cars only; 2 - trucks only; 20 - air; 21 - planes; 22 - helicopters
	// [Type, [posX, posY], [radiusA, radiusB, angle]]
	{
		{LOCATION_AREA_VEHICLE_TRUCK, {12258.1, 13944.8}, {2.62469, 6.57298, 64.06}},
		{LOCATION_AREA_VEHICLE_CAR, {12267.3, 13974.6}, {1.57798, 3.05621, 183.32}},
		{LOCATION_AREA_VEHICLE_GARAGE, {12306.1, 13965.9}, {1.911, 3.695, 88.06}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
		{LOCATION_AREA_FLATSTORAGE, {12309, 13983.5}, {3.54128, 7.53915, 88.8, 5}}
	};
	 
};
