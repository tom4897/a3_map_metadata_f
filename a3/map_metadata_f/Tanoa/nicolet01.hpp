/* [2017,10,10,13,52] */
/* CfgWorlds >> Tanoa >> Names >> nicolet01 */
 
areaPosition[]={6047.3, 12730.4}; // Position x, y
areaRadiusA=623.39; // radius A of the location
areaRadiusB=272.18; // radius B of the location
areaAngle=155.52; // Rotation of the location
demography=location; // Demography
 
accessPoints[] = // Types: 0 - generic; 1 - on road; 2 - water; 3 - in forest
// [Type, [posX, posY], [radiusA, radiusB, angle]]
{
	{LOCATION_AREA_ACCESSPOINT_WATER, {5305.44, 12826.1}, 129.52},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {5529.47, 12208.3}, 353.85},
	{LOCATION_AREA_ACCESSPOINT_WATER, {5527.43, 13034.9}, 146.64},
	{LOCATION_AREA_ACCESSPOINT, {5919.34, 12173.3}, 338.39},
	{LOCATION_AREA_ACCESSPOINT_WATER, {5946.3, 13288.6}, 148.92},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {6147.87, 12162.5}, 0.04},
	{LOCATION_AREA_ACCESSPOINT_WATER, {6283.25, 13369.2}, 180.29},
	{LOCATION_AREA_ACCESSPOINT, {6390.83, 12346.4}, 357.17},
	{LOCATION_AREA_ACCESSPOINT_WATER, {6470.04, 13710.4}, 139.32},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {6583.22, 12964.1}, 31.38},
	{LOCATION_AREA_ACCESSPOINT_WATER, {6629.04, 13792}, 151.59},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {6733.67, 12445.4}, 328.64},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {6794.87, 13249.3}, 226.49},
	{LOCATION_AREA_ACCESSPOINT, {6932.56, 12905.7}, 258.85},
	{LOCATION_AREA_ACCESSPOINT, {6984.96, 12659.5}, 289.33},
	{LOCATION_AREA_ACCESSPOINT_WATER, {7093.97, 13838.3}, 200.64},
	{LOCATION_AREA_ACCESSPOINT, {7202.03, 12897}, 326.23},
	{LOCATION_AREA_ACCESSPOINT, {7220.78, 13203.9}, 307.39},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {7389.14, 13459.7}, 246.98}
};
 
landmarks[] = 
{
};
 
class Areas
{
	vehicles[] = // Types: 0 - truck or cars; 1 - Cars only; 2 - trucks only; 20 - air; 21 - planes; 22 - helicopters
	// [Type, [posX, posY], [radiusA, radiusB, angle]]
	{
		{LOCATION_AREA_VEHICLE_TRUCK, {5915.56, 12478.9}, {3.3, 6.419, 302.09}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
	};
	 
};
