/* [2017,10,10,13,52] */
/* CfgWorlds >> Tanoa >> Names >> lafoa01 */
 
areaPosition[]={8968.35, 4741}; // Position x, y
areaRadiusA=138.02; // radius A of the location
areaRadiusB=93.16; // radius B of the location
areaAngle=329.58; // Rotation of the location
demography=CIV; // Demography
 
accessPoints[] = // Types: 0 - generic; 1 - on road; 2 - water; 3 - in forest
// [Type, [posX, posY], [radiusA, radiusB, angle]]
{
	{LOCATION_AREA_ACCESSPOINT_WATER, {8344.27, 4654.57}, 81.73},
	{LOCATION_AREA_ACCESSPOINT_WATER, {8626.6, 5163.87}, 143.51},
	{LOCATION_AREA_ACCESSPOINT, {8650.44, 4602.81}, 47.52},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {8795.65, 4516.4}, 37.43},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {8946.24, 4460.34}, 3.8},
	{LOCATION_AREA_ACCESSPOINT_WATER, {9133.14, 5205.39}, 200.44},
	{LOCATION_AREA_ACCESSPOINT, {9167.02, 4525.49}, 317.03},
	{LOCATION_AREA_ACCESSPOINT, {9230.53, 4660.92}, 339.07},
	{LOCATION_AREA_ACCESSPOINT_WATER, {9613.8, 4727.81}, 272.89}
};
 
landmarks[] = 
{
};
 
class Areas
{
	vehicles[] = // Types: 0 - truck or cars; 1 - Cars only; 2 - trucks only; 20 - air; 21 - planes; 22 - helicopters
	// [Type, [posX, posY], [radiusA, radiusB, angle]]
	{
		{LOCATION_AREA_VEHICLE_TRUCK, {8936.99, 4719.27}, {2, 5.5, 36.12}},
		{LOCATION_AREA_VEHICLE_CAR, {8929.62, 4754.2}, {1.57798, 3.05621, 168.67}},
		{LOCATION_AREA_VEHICLE_CAR, {8962.63, 4755.77}, {1.57798, 3.05621, 310.27}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
		{LOCATION_AREA_FLATMARKET, {8900.82, 4689.17}, {10.9136, 3.07135, 314.92, 5}},
		{LOCATION_AREA_FLATGARDEN, {8992.59, 4741.09}, {5.99781, 5.35269, 135.88, 5}}
	};
	 
};
