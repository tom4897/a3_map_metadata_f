/* [2017,10,10,13,52] */
/* CfgWorlds >> Tanoa >> Names >> forbbidenvillage01 */
 
areaPosition[]={1798.08, 13287.7}; // Position x, y
areaRadiusA=93.24; // radius A of the location
areaRadiusB=87.63; // radius B of the location
areaAngle=48.82; // Rotation of the location
demography=CIV; // Demography
 
accessPoints[] = // Types: 0 - generic; 1 - on road; 2 - water; 3 - in forest
// [Type, [posX, posY], [radiusA, radiusB, angle]]
{
	{LOCATION_AREA_ACCESSPOINT_WATER, {1364.76, 13430.8}, 109.22},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {1642.89, 13084.7}, 40.98},
	{LOCATION_AREA_ACCESSPOINT, {1687.76, 12889.2}, 334.18},
	{LOCATION_AREA_ACCESSPOINT_WATER, {1731.77, 13763}, 171.33},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {2087.46, 13504.3}, 230.43}
};
 
landmarks[] = 
{
};
 
class Areas
{
	vehicles[] = // Types: 0 - truck or cars; 1 - Cars only; 2 - trucks only; 20 - air; 21 - planes; 22 - helicopters
	// [Type, [posX, posY], [radiusA, radiusB, angle]]
	{
		{LOCATION_AREA_VEHICLE_CAR, {1778.81, 13257.1}, {1.57798, 3.05621, 231.39}},
		{LOCATION_AREA_VEHICLE_TRUCK, {1802.44, 13274}, {2.62469, 6.57298, 220.53}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
	};
	 
};
