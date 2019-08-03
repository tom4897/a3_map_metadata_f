#include "\A3\basicDefines_A3.hpp"
#include "cfgPatches.hpp"

class CfgNonAIVehicles
{
	class EmptyDetector;
	/*---------------------------------------------------------------------------
		Access points
	---------------------------------------------------------------------------*/
	class EmptyDetectorLocation_area_accesspoint: EmptyDetector
	{
		displayName = "Map Metadata, access point";
		class AttributeValues
		{
			size3[] = {0,0,0};
			text="LocationClass_accessPoint";
		};
	};
	class EmptyDetectorLocation_area_accesspoint_forest: EmptyDetector
	{
		displayName = "Map Metadata, access point, forest";
		class AttributeValues
		{
			size3[] = {0,0,0};
			text="LocationClass_accessPoint_forest";
		};
	};

	/*---------------------------------------------------------------------------
		Vehicles
	---------------------------------------------------------------------------*/
	class EmptyDetectorLocation_area_vehicle_unk: EmptyDetector
	{
		displayName = "Map Metadata, vehicle, debug";
		class AttributeValues
		{
			size3[]		= {1.8,3.5,2};
			text		= "LOCATION_AREA_VEHICLE_UNK";
			IsRectangle	= 1;
		};
	};
	class EmptyDetectorLocation_area_vehicle_ground: EmptyDetector
	{
		displayName = "Map Metadata, vehicle, ground";
		class AttributeValues
		{
			size3[]		= {1.8,3.5,2};
			text		= "LOCATION_AREA_VEHICLE_GROUND";
			IsRectangle	= 1;
		};
	};
	class EmptyDetectorLocation_area_vehicle_car: EmptyDetector
	{
		displayName = "Map Metadata, vehicle, car";
		class AttributeValues
		{
			size3[]		= {1.5,2.5,2};
			text		= "LOCATION_AREA_VEHICLE_CAR";
			IsRectangle	= 1;
		};
	};
	class EmptyDetectorLocation_area_vehicle_truck: EmptyDetector
	{
		displayName = "Map Metadata, vehicle, truck";
		class AttributeValues
		{
			size3[]		= {1.8,3.5,2};
			text		= "LOCATION_AREA_VEHICLE_TRUCK";
			IsRectangle	= 1;
		};
	};
	class EmptyDetectorLocation_area_vehicle_garage: EmptyDetector
	{
		displayName = "Map Metadata, vehicle, garage";
		class AttributeValues
		{
			size3[]		= {1.5,2.5,2};
			text		= "LOCATION_AREA_VEHICLE_GARAGE";
			IsRectangle	= 1;
		};
	};
	class EmptyDetectorLocation_area_vehicle_aircraft: EmptyDetector
	{
		displayName = "Map Metadata, vehicle, aircraft";
		class AttributeValues
		{
			size3[]		= {8,8,4.7};
			text		= "LOCATION_AREA_VEHICLE_AIRCRAFT";
			IsRectangle	= 1;
		};
	};
	class EmptyDetectorLocation_area_vehicle_airplane: EmptyDetector
	{
		displayName = "Map Metadata, vehicle, airplane";
		class AttributeValues
		{
			size3[]		= {10,10,4.8};
			text		= "LOCATION_AREA_VEHICLE_AIRPLANE";
			IsRectangle	= 1;
		};
	};
	class EmptyDetectorLocation_area_vehicle_helicopter: EmptyDetector
	{
		displayName = "Map Metadata, vehicle, helicopter";
		class AttributeValues
		{
			size3[]		= {8,8,4.7};
			text		= "LOCATION_AREA_VEHICLE_HELICOPTER";
			IsRectangle	= 1;
		};
	};
	class EmptyDetectorLocation_area_vehicle_boat: EmptyDetector
	{
		displayName = "Map Metadata, vehicle, boat";
		class AttributeValues
		{
			size3[]		= {10,9,7};
			text		= "LOCATION_AREA_VEHICLE_BOAT";
			IsRectangle	= 1;
		};
	};

	/*---------------------------------------------------------------------------
		Flat areas
	---------------------------------------------------------------------------*/
	class EmptyDetectorLocation_area_flat: EmptyDetector
	{
		displayName = "Map Metadata, flat";
		class AttributeValues
		{
			size3[]		= {2,2,1.5};
			text		= "LOCATION_AREA_FLAT";
			IsRectangle	= 1;
		};
	};
	class EmptyDetectorLocation_area_flatindus: EmptyDetector
	{
		displayName = "Map Metadata, flat, indus";
		class AttributeValues
		{
			size3[]		= {2,2,1.5};
			text		= "LOCATION_AREA_FLATINDUS";
			IsRectangle	= 1;
		};
	};
	class EmptyDetectorLocation_area_flatmil: EmptyDetector
	{
		displayName = "Map Metadata, flat, mil";
		class AttributeValues
		{
			size3[]		= {2,2,1.5};
			text		= "LOCATION_AREA_FLATMIL";
			IsRectangle	= 1;
		};
	};
	class EmptyDetectorLocation_area_flatstorage: EmptyDetector
	{
		displayName = "Map Metadata, flat, storage";
		class AttributeValues
		{
			size3[]		= {2,2,1.5};
			text		= "LOCATION_AREA_FLATSTORAGE";
			IsRectangle	= 1;
		};
	};
	class EmptyDetectorLocation_area_flatstorageciv: EmptyDetector
	{
		displayName = "Map Metadata, flat, storage civ";
		class AttributeValues
		{
			size3[]		= {2,2,1.5};
			text		= "LOCATION_AREA_FLATSTORAGECIV";
			IsRectangle	= 1;
		};
	};
	class EmptyDetectorLocation_area_flatstorageindus: EmptyDetector
	{
		displayName = "Map Metadata, flat, storage indus";
		class AttributeValues
		{
			size3[]		= {2,2,1.5};
			text		= "LOCATION_AREA_FLATSTORAGEINDUS";
			IsRectangle	= 1;
		};
	};
	class EmptyDetectorLocation_area_flatstorageindusocc: EmptyDetector
	{
		displayName = "Map Metadata, flat, storage indus occ";
		class AttributeValues
		{
			size3[]		= {2,2,1.5};
			text		= "LOCATION_AREA_FLATSTORAGEINDUSOCC";
			IsRectangle	= 1;
		};
	};
	class EmptyDetectorLocation_area_flatstoragemil: EmptyDetector
	{
		displayName = "Map Metadata, flat, storage mil";
		class AttributeValues
		{
			size3[]		= {2,2,1.5};
			text		= "LOCATION_AREA_FLATSTORAGEMIL";
			IsRectangle	= 1;
		};
	};
	class EmptyDetectorLocation_area_flatstoragefarm: EmptyDetector
	{
		displayName = "Map Metadata, flat, storage farm";
		class AttributeValues
		{
			size3[]		= {2,2,1.5};
			text		= "LOCATION_AREA_FLATSTORAGEFARM";
			IsRectangle	= 1;
		};
	};
	class EmptyDetectorLocation_area_flatstorageconst: EmptyDetector
	{
		displayName = "Map Metadata, flat, storage const";
		class AttributeValues
		{
			size3[]		= {2,2,1.5};
			text		= "LOCATION_AREA_FLATSTORAGECONST";
			IsRectangle	= 1;
		};
	};
	class EmptyDetectorLocation_area_flatgarden: EmptyDetector
	{
		displayName = "Map Metadata, flat, garden";
		class AttributeValues
		{
			size3[]		= {2,2,1.5};
			text		= "LOCATION_AREA_FLATGARDEN";
			IsRectangle	= 1;
		};
	};
	class EmptyDetectorLocation_area_flatmarket: EmptyDetector
	{
		displayName = "Map Metadata, flat, market";
		class AttributeValues
		{
			size3[]		= {2,2,1.5};
			text		= "LOCATION_AREA_FLATMARKET";
			IsRectangle	= 1;
		};
	};
	class EmptyDetectorLocation_area_flatroadblock: EmptyDetector
	{
		displayName = "Map Metadata, flat, road block";
		class AttributeValues
		{
			size3[]		= {7,6,5};
			text		= "LOCATION_AREA_FLATROADBLOCK";
			IsRectangle	= 1;
		};
	};
	class EmptyDetectorLocation_area_flatcheckpoints: EmptyDetector
	{
		displayName = "Map Metadata, flat, checkpoint";
		class AttributeValues
		{
			size3[]		= {7,6,5};
			text		= "LOCATION_AREA_FLATCHECKPOINTS";
			IsRectangle	= 1;
		};
	};
};