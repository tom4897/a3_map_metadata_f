/* [2017,10,10,13,49] */
/* CfgWorlds >> Malden >> Names >> malden_c_latrinite */
 
areaPosition[]={7312.15, 7896.81}; // Position x, y
areaRadiusA=708.19; // radius A of the location
areaRadiusB=389.29; // radius B of the location
areaAngle=26.6; // Rotation of the location
demography=CIV; // Demography
 
accessPoints[] = // Types: 0 - generic; 1 - on road; 2 - water; 3 - in forest
// [Type, [posX, posY], [radiusA, radiusB, angle]]
{
	{LOCATION_AREA_ACCESSPOINT_ROAD, {6208.45, 8572.35}, 96.02},
	{LOCATION_AREA_ACCESSPOINT, {6427.27, 8049.63}, 97.94},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {6522.53, 8408.31}, 131.55},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {6648.28, 7488.67}, 49.78},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {6935, 8624.6}, 155.82},
	{LOCATION_AREA_ACCESSPOINT, {7041.43, 8758.2}, 139.42},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {7053.76, 6564.78}, 356.63},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {7058.92, 7226.91}, 10.49},
	{LOCATION_AREA_ACCESSPOINT_ROAD, {7201.85, 8909.19}, 120.34},
	{LOCATION_AREA_ACCESSPOINT, {7374.37, 7059.82}, 355.12},
	{LOCATION_AREA_ACCESSPOINT, {7634.03, 7063.81}, 344.12},
	{LOCATION_AREA_ACCESSPOINT, {7739.03, 8329.51}, 230.14},
	{LOCATION_AREA_ACCESSPOINT, {8046.03, 8041.63}, 258.52},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {8086.34, 7342.94}, 304.09},
	{LOCATION_AREA_ACCESSPOINT_FOREST, {8101.96, 7814.31}, 275.31},
	{LOCATION_AREA_ACCESSPOINT, {8235.18, 7608}, 289.26},
	{LOCATION_AREA_ACCESSPOINT, {8334.53, 7812.75}, 178.98}
};
 
landmarks[] = 
{
};
 
class Areas
{
	vehicles[] = // Types: 0 - truck or cars; 1 - Cars only; 2 - trucks only; 20 - air; 21 - planes; 22 - helicopters
	// [Type, [posX, posY], [radiusA, radiusB, angle]]
	{
		{LOCATION_AREA_VEHICLE_CAR, {6992.52, 7900.1}, {1.5, 2.5, 111.61}},
		{LOCATION_AREA_VEHICLE_GROUND, {6988.33, 7985.91}, {1.8, 3.5, 205.37}},
		{LOCATION_AREA_VEHICLE_CAR, {7024.85, 7769.71}, {1.5, 2.5, 149.74}},
		{LOCATION_AREA_VEHICLE_CAR, {7021.45, 7767.93}, {1.5, 2.5, 156.09}},
		{LOCATION_AREA_VEHICLE_CAR, {7021.17, 7834.72}, {1.5, 2.5, 277.66}},
		{LOCATION_AREA_VEHICLE_CAR, {7019.83, 7880.94}, {1.5, 2.5, 197.78}},
		{LOCATION_AREA_VEHICLE_CAR, {7020.87, 8114.73}, {1.5, 2.5, 17.21}},
		{LOCATION_AREA_VEHICLE_CAR, {7035.04, 7774.83}, {1.5, 2.5, 156.47}},
		{LOCATION_AREA_VEHICLE_CAR, {7031.7, 7772.94}, {1.5, 2.5, 156.47}},
		{LOCATION_AREA_VEHICLE_GARAGE, {7047.64, 7822.8}, {1.5, 2.5, 69.55}},
		{LOCATION_AREA_VEHICLE_CAR, {7035.96, 7939.46}, {1.5, 2.5, 304.81}},
		{LOCATION_AREA_VEHICLE_GROUND, {7038.33, 8051.13}, {1.8, 3.5, 253.41}},
		{LOCATION_AREA_VEHICLE_CAR, {7067.76, 7897.05}, {1.5, 2.5, 184.06}},
		{LOCATION_AREA_VEHICLE_GARAGE, {7056.41, 8096.83}, {1.5, 2.5, 258.45}},
		{LOCATION_AREA_VEHICLE_GARAGE, {7054.77, 8102.79}, {1.5, 2.5, 258.45}},
		{LOCATION_AREA_VEHICLE_CAR, {7081.37, 7721.31}, {1.5, 2.5, 336.89}},
		{LOCATION_AREA_VEHICLE_CAR, {7098.91, 7730.38}, {1.5, 2.5, 245.46}},
		{LOCATION_AREA_VEHICLE_CAR, {7089.69, 7725.04}, {1.5, 2.5, 337.47}},
		{LOCATION_AREA_VEHICLE_GARAGE, {7109.96, 7860.79}, {1.5, 2.5, 32.09}},
		{LOCATION_AREA_VEHICLE_CAR, {7103.7, 7875.59}, {1.5, 2.5, 127.59}},
		{LOCATION_AREA_VEHICLE_GROUND, {7109.78, 8049.65}, {1.8, 3.5, 261.79}},
		{LOCATION_AREA_VEHICLE_CAR, {7143.9, 7853.59}, {1.5, 2.5, 79.67}},
		{LOCATION_AREA_VEHICLE_GROUND, {7129.06, 8050.69}, {1.8, 3.5, 341.71}},
		{LOCATION_AREA_VEHICLE_CAR, {7154.43, 7852.89}, {1.5, 2.5, 114.25}},
		{LOCATION_AREA_VEHICLE_CAR, {7172.83, 7962.42}, {1.5, 2.5, 190.17}},
		{LOCATION_AREA_VEHICLE_CAR, {7156.33, 7979.8}, {1.5, 2.5, 177.99}},
		{LOCATION_AREA_VEHICLE_CAR, {7185.28, 7712.55}, {1.5, 2.5, 83.31}},
		{LOCATION_AREA_VEHICLE_TRUCK, {7185.78, 7881.8}, {1.8, 3.5, 280.32}},
		{LOCATION_AREA_VEHICLE_CAR, {7203.56, 7725.46}, {1.5, 2.5, 134.88}},
		{LOCATION_AREA_VEHICLE_TRUCK, {7213.08, 7992.48}, {1.8, 3.5, 279.9}},
		{LOCATION_AREA_VEHICLE_GARAGE, {7215.27, 8000.28}, {1.5, 2.5, 105.92}},
		{LOCATION_AREA_VEHICLE_CAR, {7212.18, 8020.02}, {1.5, 2.5, 356.42}},
		{LOCATION_AREA_VEHICLE_GARAGE, {7206.84, 8037.37}, {1.5, 2.5, 117.25}},
		{LOCATION_AREA_VEHICLE_GARAGE, {7212.02, 8168.62}, {1.5, 2.5, 74.56}},
		{LOCATION_AREA_VEHICLE_CAR, {7228.47, 7772.12}, {1.5, 2.5, 240.01}},
		{LOCATION_AREA_VEHICLE_TRUCK, {7244.38, 7801.8}, {1.8, 3.5, 186.51}},
		{LOCATION_AREA_VEHICLE_CAR, {7230.54, 7802.9}, {1.5, 2.5, 154.67}},
		{LOCATION_AREA_VEHICLE_GARAGE, {7231.78, 7871.37}, {1.5, 2.5, 266.84}},
		{LOCATION_AREA_VEHICLE_CAR, {7234.79, 7861.28}, {1.5, 2.5, 101.82}},
		{LOCATION_AREA_VEHICLE_CAR, {7246.49, 7872.49}, {1.5, 2.5, 275.69}},
		{LOCATION_AREA_VEHICLE_CAR, {7233.82, 7967.76}, {1.5, 2.5, 275.44}},
		{LOCATION_AREA_VEHICLE_GROUND, {7245.98, 8008.28}, {1.8, 3.5, 176.86}},
		{LOCATION_AREA_VEHICLE_CAR, {7241.28, 8045.29}, {1.5, 2.5, 158.51}},
		{LOCATION_AREA_VEHICLE_GROUND, {7241.42, 8060.75}, {1.8, 3.5, 353.29}},
		{LOCATION_AREA_VEHICLE_CAR, {7247.21, 8098.51}, {1.5, 2.5, 289.82}},
		{LOCATION_AREA_VEHICLE_CAR, {7225.75, 8172}, {1.5, 2.5, 259.42}},
		{LOCATION_AREA_VEHICLE_GROUND, {7267.07, 7532.7}, {1.8, 3.5, 359.39}},
		{LOCATION_AREA_VEHICLE_CAR, {7273.37, 7901.58}, {1.5, 2.5, 358.6}},
		{LOCATION_AREA_VEHICLE_GROUND, {7257.12, 7976.43}, {1.8, 3.5, 271.85}},
		{LOCATION_AREA_VEHICLE_CAR, {7254.18, 8039.11}, {1.5, 2.5, 270.19}},
		{LOCATION_AREA_VEHICLE_GARAGE, {7255.74, 8046.23}, {1.5, 2.5, 84.09}},
		{LOCATION_AREA_VEHICLE_CAR, {7273.53, 8100.08}, {1.5, 2.5, 77.01}},
		{LOCATION_AREA_VEHICLE_CAR, {7271.59, 8129.64}, {1.5, 2.5, 54.65}},
		{LOCATION_AREA_VEHICLE_CAR, {7267.8, 8147.28}, {1.5, 2.5, 76.41}},
		{LOCATION_AREA_VEHICLE_CAR, {7288.76, 7809.54}, {1.5, 2.5, 242.73}},
		{LOCATION_AREA_VEHICLE_CAR, {7281.28, 7847.21}, {1.5, 2.5, 105.35}},
		{LOCATION_AREA_VEHICLE_CAR, {7283.92, 7853.59}, {1.5, 2.5, 111.45}},
		{LOCATION_AREA_VEHICLE_CAR, {7285.5, 7921.04}, {1.5, 2.5, 130.76}},
		{LOCATION_AREA_VEHICLE_CAR, {7279.63, 7990.21}, {1.5, 2.5, 141.33}},
		{LOCATION_AREA_VEHICLE_GARAGE, {7288.51, 8103.35}, {1.5, 2.5, 273.88}},
		{LOCATION_AREA_VEHICLE_TRUCK, {7290.93, 8157.04}, {1.8, 3.5, 5.48}},
		{LOCATION_AREA_VEHICLE_TRUCK, {7282.5, 8157.61}, {1.8, 3.5, 2.94}},
		{LOCATION_AREA_VEHICLE_GARAGE, {7312.68, 7814.57}, {1.5, 2.5, 251.91}},
		{LOCATION_AREA_VEHICLE_GARAGE, {7312.87, 7808.09}, {1.5, 2.5, 253.94}},
		{LOCATION_AREA_VEHICLE_CAR, {7302.5, 7899.6}, {1.5, 2.5, 101.62}},
		{LOCATION_AREA_VEHICLE_CAR, {7303.58, 7903.08}, {1.5, 2.5, 101.62}},
		{LOCATION_AREA_VEHICLE_CAR, {7304.31, 7906.75}, {1.5, 2.5, 101.62}},
		{LOCATION_AREA_VEHICLE_CAR, {7304.91, 7910.59}, {1.5, 2.5, 104.13}},
		{LOCATION_AREA_VEHICLE_CAR, {7322.1, 7943.53}, {1.5, 2.5, 185.07}},
		{LOCATION_AREA_VEHICLE_CAR, {7326.75, 7630.05}, {1.5, 2.5, 62.88}},
		{LOCATION_AREA_VEHICLE_CAR, {7327.75, 7824.56}, {1.5, 2.5, 205.38}},
		{LOCATION_AREA_VEHICLE_GARAGE, {7327.96, 8038.34}, {1.5, 2.5, 282.68}},
		{LOCATION_AREA_VEHICLE_CAR, {7366.77, 7866.61}, {1.5, 2.5, 200.67}},
		{LOCATION_AREA_VEHICLE_CAR, {7366.51, 7907.89}, {1.5, 2.5, 309.3}},
		{LOCATION_AREA_VEHICLE_CAR, {7362.3, 7948.11}, {1.5, 2.5, 1.23}},
		{LOCATION_AREA_VEHICLE_CAR, {7369.97, 7958.84}, {1.5, 2.5, 137.97}},
		{LOCATION_AREA_VEHICLE_GARAGE, {7364.06, 8033.42}, {1.5, 2.5, 179.5}},
		{LOCATION_AREA_VEHICLE_GARAGE, {7390.48, 7781.26}, {1.5, 2.5, 310.55}},
		{LOCATION_AREA_VEHICLE_GROUND, {7385.52, 7800.68}, {1.8, 3.5, 37.89}},
		{LOCATION_AREA_VEHICLE_GARAGE, {7376.56, 7828.92}, {1.5, 2.5, 127.01}},
		{LOCATION_AREA_VEHICLE_GROUND, {7378.23, 7840.57}, {1.8, 3.5, 314.03}},
		{LOCATION_AREA_VEHICLE_TRUCK, {7377.07, 7893.14}, {1.8, 3.5, 21.87}},
		{LOCATION_AREA_VEHICLE_GARAGE, {7380.65, 7918.77}, {1.5, 2.5, 212.05}},
		{LOCATION_AREA_VEHICLE_GARAGE, {7403.48, 7885.25}, {1.5, 2.5, 204.99}},
		{LOCATION_AREA_VEHICLE_GARAGE, {7417.44, 8021.09}, {1.5, 2.5, 214.64}},
		{LOCATION_AREA_VEHICLE_CAR, {7432.39, 7937.07}, {1.5, 2.5, 274.84}},
		{LOCATION_AREA_VEHICLE_CAR, {7426.71, 7932.45}, {1.5, 2.5, 141.33}},
		{LOCATION_AREA_VEHICLE_CAR, {7461.63, 7960.03}, {1.5, 2.5, 134.89}},
		{LOCATION_AREA_VEHICLE_GARAGE, {7488.53, 7961.3}, {1.5, 2.5, 223.41}},
		{LOCATION_AREA_VEHICLE_GROUND, {7503.24, 7705.7}, {1.8, 3.5, 234.6}},
		{LOCATION_AREA_VEHICLE_TRUCK, {7531.85, 7756.43}, {1.8, 3.5, 325.06}},
		{LOCATION_AREA_VEHICLE_CAR, {7542.59, 7830.22}, {1.5, 2.5, 57.41}},
		{LOCATION_AREA_VEHICLE_TRUCK, {7757.89, 7515.41}, {1.8, 3.5, 28.55}},
		{LOCATION_AREA_VEHICLE_TRUCK, {7780.83, 7562.11}, {1.8, 3.5, 210.51}}
	};
	 
	flat[] = // Types
	// [Type, [posX, posY], [radiusA, radiusB, angle, maxHeight]]
	{
		{LOCATION_AREA_FLATSTORAGE, {7142.22, 7965.71}, {2.514, 2.745, 314.61, 5}},
		{LOCATION_AREA_FLATSTORAGE, {7169.76, 7989.94}, {2.514, 2.745, 208.97, 5}},
		{LOCATION_AREA_FLATSTORAGE, {7210.75, 8104.11}, {2.514, 2.745, 61.55, 5}},
		{LOCATION_AREA_FLATMARKET, {7234.7, 7892.99}, {4.85709, 6.81973, 269.45, 5}},
		{LOCATION_AREA_FLATMARKET, {7240.2, 7929.58}, {7.15291, 19.6324, 270.7, 5}},
		{LOCATION_AREA_FLATSTORAGE, {7234.6, 8057.39}, {2.514, 2.745, 258.9, 5}},
		{LOCATION_AREA_FLATSTORAGE, {7232.78, 8065.09}, {2.514, 2.745, 258.9, 5}},
		{LOCATION_AREA_FLATSTORAGE, {7373.45, 8081.97}, {2.514, 2.745, 304.1, 5}},
		{LOCATION_AREA_FLATSTORAGE, {7376.66, 8087.02}, {2.514, 2.745, 299.64, 5}},
		{LOCATION_AREA_FLATSTORAGE, {7380.29, 8092.44}, {2.514, 2.745, 300.87, 5}},
		{LOCATION_AREA_FLATGARDEN, {7414.16, 7869.36}, {5.19865, 5.35269, 162.04, 5}},
		{LOCATION_AREA_FLATSTORAGE, {7446.17, 8113.14}, {2.514, 2.745, 95.05, 5}}
	};
	 
};
