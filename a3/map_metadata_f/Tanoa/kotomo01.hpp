/* [2017,10,10,13,52] */
/* CfgWorlds >> Tanoa >> Names >> kotomo01 */
 
areaPosition[]={10744.1, 6377.92}; // Position x, y
areaRadiusA=300.41; // radius A of the location
areaRadiusB=321.03; // radius B of the location
areaAngle=0; // Rotation of the location
demography=CIV; // Demography
 
accessPoints[] = // Types: 0 - generic; 1 - on road; 2 - water; 3 - in forest
// [Type, [posX, posY], [radiusA, radiusB, angle]]
{
	{LOCATION_AREA_ACCESSPOINT_ROAD, {9923.3, 6530.59}, 92.32},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {10103.8, 6796.7}, 91.8},
	{LOCATION_AREA_ACCESSPOINT_WATER, {10135.2, 5981.9}, 74.45},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {10234.2, 7400.86}, 119.81},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {10793.5, 7130.26}, 174.47},
	{LOCATION_AREA_ACCESSPOINT_WATER, {11233.4, 5719.17}, 279.02},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {11258.2, 6264.67}, 279.68},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {11312.8, 5982.98}, 214.69},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {11321.1, 6639.52}, 252.55},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {11383.7, 5291.84}, 352.77},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {11521.3, 6297.63}, 208.64}
};
 
landmarks[] = 
{
};
 
class Areas
{
	vehicles[] = // Types: 0 - truck or cars; 1 - Cars only; 2 - trucks only; 20 - air; 21 - planes; 22 - helicopters
	// [Type, [posX, posY], [radiusA, radiusB, angle]]
	{
		{LOCATION_AREA_VEHICLE_CAR, {10490.6, 6257.01}, {1.5, 2.5, 98.74}},
		{LOCATION_AREA_VEHICLE_CAR, {10534.1, 6587.39}, {1.5, 2.5, 170.63}},
		{LOCATION_AREA_VEHICLE_CAR, {10612.7, 6638.35}, {1.5, 2.5, 257.87}},
		{LOCATION_AREA_VEHICLE_CAR, {10642, 6613.16}, {1.5, 2.5, 83.69}},
		{LOCATION_AREA_VEHICLE_CAR, {10632.9, 6634.36}, {1.5, 2.5, 233.06}},
		{LOCATION_AREA_VEHICLE_CAR, {10779.2, 6326.64}, {1.5, 2.5, 105.97}},
		{LOCATION_AREA_VEHICLE_CAR, {10807.3, 6328.3}, {1.5, 2.5, 339.63}},
		{LOCATION_AREA_VEHICLE_CAR, {10804.6, 6502.46}, {1.5, 2.5, 72.99}},
		{LOCATION_AREA_VEHICLE_CAR, {10823.8, 6487.89}, {1.5, 2.5, 157.45}},
		{LOCATION_AREA_VEHICLE_CAR, {10828.8, 6492.75}, {1.5, 2.5, 157.45}},
		{LOCATION_AREA_VEHICLE_CAR, {10806.5, 6525.85}, {1.5, 2.5, 167.03}},
		{LOCATION_AREA_VEHICLE_GARAGE, {10859, 6158.67}, {1.5, 2.5, 129.2}},
		{LOCATION_AREA_VEHICLE_CAR, {10835.7, 6470.13}, {1.5, 2.5, 96.2}},
		{LOCATION_AREA_VEHICLE_CAR, {10845.5, 6518.96}, {1.5, 2.5, 78.49}},
		{LOCATION_AREA_VEHICLE_GROUND, {10884.3, 6135.46}, {1.8, 3.5, 314.03}},
		{LOCATION_AREA_VEHICLE_CAR, {10868.5, 6278.29}, {1.5, 2.5, 10.4}},
		{LOCATION_AREA_VEHICLE_CAR, {10866.5, 6430.88}, {1.5, 2.5, 284.46}},
		{LOCATION_AREA_VEHICLE_CAR, {10916.1, 6195.71}, {1.5, 2.5, 4.87}},
		{LOCATION_AREA_VEHICLE_TRUCK, {10913.3, 6347.21}, {1.8, 3.5, 178.24}},
		{LOCATION_AREA_VEHICLE_CAR, {10912.6, 6365.13}, {1.5, 2.5, 176.17}},
		{LOCATION_AREA_VEHICLE_CAR, {10941.5, 6299.89}, {1.5, 2.5, 358.82}},
		{LOCATION_AREA_VEHICLE_CAR, {10943.1, 6371.25}, {1.5, 2.5, 67.5}},
		{LOCATION_AREA_VEHICLE_CAR, {10956.7, 6273.45}, {1.5, 2.5, 273.81}},
		{LOCATION_AREA_VEHICLE_CAR, {10956.3, 6282.82}, {1.5, 2.5, 268.21}},
		{LOCATION_AREA_VEHICLE_CAR, {10957.1, 6278.07}, {1.5, 2.5, 273.95}},
		{LOCATION_AREA_VEHICLE_CAR, {10979.6, 6322.34}, {1.5, 2.5, 83.72}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
		{LOCATION_AREA_FLATSTORAGE, {10808, 6513.49}, {3.64251, 1.80139, 77.88, 5}},
		{LOCATION_AREA_FLATGARDEN, {10854.2, 6261.38}, {5.19865, 5.35269, 303.15, 5}},
		{LOCATION_AREA_FLATGARDEN, {10947.1, 6238.92}, {5.19865, 5.35269, 189.87, 5}}
	};
	 
};
