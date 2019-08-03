/* [2017,10,10,13,52] */
/* CfgWorlds >> Tanoa >> Names >> moddergat01 */
 
areaPosition[]={9469.04, 4074.62}; // Position x, y
areaRadiusA=269.32; // radius A of the location
areaRadiusB=251.25; // radius B of the location
areaAngle=340.1; // Rotation of the location
demography=CIV; // Demography
 
accessPoints[] = // Types: 0 - generic; 1 - on road; 2 - water; 3 - in forest
// [Type, [posX, posY], [radiusA, radiusB, angle]]
{
	{LOCATION_AREA_ACCESSPOINT_ROAD, {8871.47, 4008.98}, 63.08},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {9040.4, 3638.61}, 38.85},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {9066.16, 3798.18}, 56.49},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {9063.11, 4347.9}, 123.7},
	{LOCATION_AREA_ACCESSPOINT, {9100.04, 3917.74}, 67.05},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {9163.79, 4537.12}, 146.68},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {9207.41, 3416.07}, 61.91},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {9255.32, 4599.72}, 160.48},
	{LOCATION_AREA_ACCESSPOINT_WATER, {9382.48, 4681.39}, 173.92},
	{LOCATION_AREA_ACCESSPOINT_WATER, {9484.98, 4827.1}, 183.52},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {9577.61, 3540.16}, 357.98},
	{LOCATION_AREA_ACCESSPOINT_WATER, {9666.2, 4767.28}, 180},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {9838.62, 3712.71}, 314.31},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {9968.07, 4336.83}, 241.91},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {10038.2, 4292.9}, 239.55},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {10173.8, 3987.02}, 319.22}
};
 
landmarks[] = 
{
};
 
class Areas
{
	vehicles[] = // Types: 0 - truck or cars; 1 - Cars only; 2 - trucks only; 20 - air; 21 - planes; 22 - helicopters
	// [Type, [posX, posY], [radiusA, radiusB, angle]]
	{
		{LOCATION_AREA_VEHICLE_CAR, {9311.08, 3914.77}, {1.578, 3.056, 0.98}},
		{LOCATION_AREA_VEHICLE_GARAGE, {9318.39, 4013.18}, {1.911, 3.695, 90}},
		{LOCATION_AREA_VEHICLE_CAR, {9309.06, 4127.53}, {1.578, 3.056, 325.07}},
		{LOCATION_AREA_VEHICLE_CAR, {9338.62, 3973.71}, {1.578, 3.056, 247.1}},
		{LOCATION_AREA_VEHICLE_CAR, {9357.53, 4073.76}, {1.578, 3.056, 94.39}},
		{LOCATION_AREA_VEHICLE_CAR, {9332.31, 4072.59}, {1.578, 3.056, 225.28}},
		{LOCATION_AREA_VEHICLE_CAR, {9376.49, 4044.2}, {1.578, 3.056, 10.91}},
		{LOCATION_AREA_VEHICLE_CAR, {9371.06, 4088.28}, {1.578, 3.056, 136.09}},
		{LOCATION_AREA_VEHICLE_CAR, {9375.09, 4092.32}, {1.578, 3.056, 132.05}},
		{LOCATION_AREA_VEHICLE_CAR, {9377.55, 4095.85}, {1.578, 3.056, 134.34}},
		{LOCATION_AREA_VEHICLE_GARAGE, {9397.01, 3949.71}, {1.911, 3.695, 182.48}},
		{LOCATION_AREA_VEHICLE_CAR, {9408.8, 4015.75}, {1.578, 3.056, 184.06}},
		{LOCATION_AREA_VEHICLE_CAR, {9397.91, 4034.75}, {1.578, 3.056, 281.61}},
		{LOCATION_AREA_VEHICLE_CAR, {9406.17, 4178.22}, {1.578, 3.056, 330.16}},
		{LOCATION_AREA_VEHICLE_CAR, {9428.45, 3961.8}, {1.578, 3.056, 75.23}},
		{LOCATION_AREA_VEHICLE_CAR, {9420.17, 4028.31}, {1.578, 3.056, 290.51}},
		{LOCATION_AREA_VEHICLE_TRUCK, {9441.97, 4050.08}, {2, 6, 108.87}},
		{LOCATION_AREA_VEHICLE_TRUCK, {9445, 4062.05}, {2, 6, 190.3}},
		{LOCATION_AREA_VEHICLE_CAR, {9438.68, 4184.91}, {1.578, 3.056, 65.45}},
		{LOCATION_AREA_VEHICLE_CAR, {9476.33, 4030.44}, {1.578, 3.056, 11.51}},
		{LOCATION_AREA_VEHICLE_CAR, {9605.74, 4075.57}, {1.578, 3.056, 50.55}},
		{LOCATION_AREA_VEHICLE_CAR, {9639.52, 4074.9}, {1.578, 3.056, 326.97}},
		{LOCATION_AREA_VEHICLE_GARAGE, {9631.32, 4083.41}, {1.6, 2.5, 154.02}},
		{LOCATION_AREA_VEHICLE_CAR, {9687.07, 4106.12}, {1.578, 3.056, 329.73}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
		{LOCATION_AREA_FLATGARDEN, {9299.64, 4106.25}, {6.06981, 6.20812, 328.16, 5}},
		{LOCATION_AREA_FLATGARDEN, {9314.81, 4177.92}, {3.24287, 4.16148, 334.89, 5}},
		{LOCATION_AREA_FLATGARDEN, {9349.63, 4191.2}, {9.30262, 5.35269, 176.06, 5}},
		{LOCATION_AREA_FLATSTORAGE, {9418.17, 4005.1}, {4.38744, 9.01951, 192.6, 5}},
		{LOCATION_AREA_FLATMARKET, {9453.03, 4035}, {4.9057, 6.3816, 14.54, 5}}
	};
	 
};