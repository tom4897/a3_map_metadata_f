/* [2017,10,10,13,52] */
/* CfgWorlds >> Tanoa >> Names >> nandai01 */
 
areaPosition[]={14198.2, 8983.45}; // Position x, y
areaRadiusA=220.37; // radius A of the location
areaRadiusB=434.78; // radius B of the location
areaAngle=313.31; // Rotation of the location
demography=CIV; // Demography
 
accessPoints[] = // Types: 0 - generic; 1 - on road; 2 - water; 3 - in forest
// [Type, [posX, posY], [radiusA, radiusB, angle]]
{
	{LOCATION_AREA_ACCESSPOINT_ROAD, {13337.5, 9569.07}, 164.03},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {13759.7, 8784.53}, 67.08},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {13778.8, 9726.41}, 157.38},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {13926.3, 8526.69}, 49.07},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {13967.5, 8420.12}, 61.56},
	{LOCATION_AREA_ACCESSPOINT_WATER, {14223.3, 8272.21}, 16},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {14433.7, 9475.82}, 205.1},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {14544, 9423.45}, 188.22},
	{LOCATION_AREA_ACCESSPOINT_WATER, {14691.7, 8298.97}, 340.67},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {14679.8, 9431.16}, 215.5},
	{LOCATION_AREA_ACCESSPOINT_WATER, {15047.2, 9102.32}, 251.12},
	{LOCATION_AREA_ACCESSPOINT_WATER, {15093.6, 8739.38}, 285.23}
};
 
landmarks[] = 
{
};
 
class Areas
{
	vehicles[] = // Types: 0 - truck or cars; 1 - Cars only; 2 - trucks only; 20 - air; 21 - planes; 22 - helicopters
	// [Type, [posX, posY], [radiusA, radiusB, angle]]
	{
		{LOCATION_AREA_VEHICLE_CAR, {14324.4, 8928}, {1.5, 2.5, 53.33}},
		{LOCATION_AREA_VEHICLE_CAR, {14353.4, 8664.62}, {1.5, 2.5, 145.77}},
		{LOCATION_AREA_VEHICLE_CAR, {14358.3, 8666.59}, {1.5, 2.5, 332.09}},
		{LOCATION_AREA_VEHICLE_CAR, {14369.7, 8679.7}, {1.5, 2.5, 184.37}},
		{LOCATION_AREA_VEHICLE_TRUCK, {14354.4, 8720.52}, {1.8, 3.5, 189.33}},
		{LOCATION_AREA_VEHICLE_GARAGE, {14349, 8739.85}, {1.5, 2.5, 93.51}},
		{LOCATION_AREA_VEHICLE_CAR, {14362.4, 8741.24}, {1.5, 2.5, 177.21}},
		{LOCATION_AREA_VEHICLE_CAR, {14362.4, 8747.83}, {1.5, 2.5, 182.58}},
		{LOCATION_AREA_VEHICLE_CAR, {14366.7, 8741.42}, {1.5, 2.5, 182.58}},
		{LOCATION_AREA_VEHICLE_CAR, {14392.3, 8799.55}, {1.5, 2.5, 90.58}},
		{LOCATION_AREA_VEHICLE_GROUND, {14373, 8879.37}, {1.8, 3.5, 352.44}},
		{LOCATION_AREA_VEHICLE_CAR, {14378.7, 8909.3}, {1.5, 2.5, 37.19}},
		{LOCATION_AREA_VEHICLE_CAR, {14402.4, 8876.83}, {1.5, 2.5, 214.52}},
		{LOCATION_AREA_VEHICLE_CAR, {14423.2, 8909.89}, {1.5, 2.5, 48.1}},
		{LOCATION_AREA_VEHICLE_CAR, {14464.9, 8901.5}, {1.5, 2.5, 90.7}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
	};
	 
};
