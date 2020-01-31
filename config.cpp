////////////////////////////////////////////////////////////////////
//DeRap: dcm\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Fri Jan 31 21:26:07 2020 : 'file' last modified on Sat Dec 28 18:19:59 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DonCarMod
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Vehicles_Wheeled"};
	};
};
class CfgMods
{
	class DonCarMod
	{
		dir = "ghunter";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "GhunterCamo";
		credits = "Groteskowy";
		author = "Groteskowy";
		authorID = "";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class WorldContainer_Base;
	class CarScript;
	class Clothing;
	class Bottle_Base;
	class HatchbackWheel;
	class HatchbackWheel_Ruined;
	class Hatchback_02;
	class Hatchback_02_Door_1_1;
	class Hatchback_02_Door_2_1;
	class Hatchback_02_Door_1_2;
	class Hatchback_02_Door_2_2;
	class Hatchback_02_Hood;
	class Hatchback_02_Trunk;
	class DamageSystem;
	class DamageZones;
	class Chassis;
	class Reflector_1_1;
	class Reflector_2_1;
	class WindowFront;
	class WindowBack;
	class Engine;
	class Roof;
	class Front;
	class Back;
	class Fender_1_1;
	class Fender_1_2;
	class Fender_2_1;
	class Fender_2_2;
	class FuelTank;
	class Health;
	class GlobalHealth;
	class Window;
	class Doors;
	class CarDoor;

	class Hatchback_camo: Hatchback_02
	{
		hiddenSelectionsMaterials[] = {"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat","dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat","dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat","dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat","dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat","dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat","dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat","dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat","dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat","dcm\hatchback_02\data\icegem\Hatchback_02_Body.rvmat"};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					healthLevels[] = {{1,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0,{}}};
				};
			};
			class DamageZones: DamageZones
			{
				class Chassis: Chassis
				{
					class Health: Health{};
				};
				class Front: Front
				{
					class Health: Health{};
				};
				class Back: Back
				{
					class Health: Health{};
				};
				class Reflector_1_1: Reflector_1_1
				{
					class Health: Health{};
				};
				class Reflector_2_1: Reflector_2_1
				{
					class Health: Health{};
				};
				class WindowFront: WindowFront
				{
					class Health: Health{};
				};
				class Engine: Engine
				{
					class Health: Health{};
				};
				class FuelTank: FuelTank
				{
					class Health: Health{};
				};
				class Roof: Roof
				{
					class Health: Health
					{
						RefTexsMats[] = {"mojmod\ghunter\hatchback_camo_body.rvmat"};
						healthLevels[] = {{1,{"mojmod\ghunter\hatchback_camo_body.rvmat"}},{0.7,{"mojmod\ghunter\hatchback_camo_body.rvmat"}},{0.5,{"mojmod\ghunter\hatchback_camo_body_damage.rvmat"}},{0.3,{"mojmod\ghunter\hatchback_camo_body_damage.rvmat"}},{0,{"mojmod\ghunter\hatchback_camo_body_destruct.rvmat"}}};
					};
				};
				class Fender_1_1: Fender_1_1
				{
					class Health: Health
					{
						RefTexsMats[] = {"mojmod\ghunter\hatchback_camo_body.rvmat"};
						healthLevels[] = {{1,{"mojmod\ghunter\hatchback_camo_body.rvmat"}},{0.7,{"mojmod\ghunter\hatchback_camo_body.rvmat"}},{0.5,{"mojmod\ghunter\hatchback_camo_body_damage.rvmat"}},{0.3,{"dmojmod\ghunter\hatchback_camo_body_damage.rvmat"}},{0,{"mojmod\ghunter\hatchback_camo_body_destruct.rvmat"}}};
					};
				};
				class Fender_1_2: Fender_1_2
				{
					class Health: Health
					{
						RefTexsMats[] = {"mojmod\ghunter\hatchback_camo_body.rvmat"};
						healthLevels[] = {{1,{"mojmod\ghunter\hatchback_camo_body.rvmat"}},{0.7,{"mojmod\ghunter\hatchback_camo_body.rvmat"}},{0.5,{"mojmod\ghunter\hatchback_camo_body_damage.rvmat"}},{0.3,{"mojmod\ghunter\hatchback_camo_body_damage.rvmat"}},{0,{"mojmod\ghunter\hatchback_camo_body_destruct.rvmat"}}};
					};
				};
				class Fender_2_1: Fender_2_1
				{
					class Health: Health
					{
						RefTexsMats[] = {"mojmod\ghunter\hatchback_camo_body.rvmat"};
						healthLevels[] = {{1,{"mojmod\ghunter\hatchback_camo_body.rvmat"}},{0.7,{"mojmod\ghunter\hatchback_camo_body.rvmat"}},{0.5,{"mojmod\ghunter\hatchback_camo_body_damage.rvmat"}},{0.3,{"mojmod\ghunter\hatchback_camo_body_damage.rvmat"}},{0,{"mojmod\ghunter\hatchback_camo_body_destruct.rvmat"}}};
					};
				};
				class Fender_2_2: Fender_2_2
				{
					class Health: Health
					{
						RefTexsMats[] = {"mojmod\ghunter\hatchback_camo_body.rvmat"};
						healthLevels[] = {{1,{"mojmod\ghunter\hatchback_camo_body.rvmat"}},{0.7,{"mojmod\ghunter\hatchback_camo_body.rvmat"}},{0.5,{"mojmod\ghunter\hatchback_camo_body_damage.rvmat"}},{0.3,{"mojmod\ghunter\hatchback_camo_body_damage.rvmat"}},{0,{"mojmod\ghunter\hatchback_camo_body_destruct.rvmat"}}};
					};
				};
			};
		};
	};
	class Hatchback_camo_Door_1_1: Hatchback_02_Door_1_1
	{
		hiddenSelectionsMaterials[] = {"mojmod\ghunter\hatchback_camo_frontdoor.rvmat"};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth{};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health{};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[] = {"mojmod\ghunter\hatchback_camo_frontdoor.rvmat"};
						healthLevels[] = {{1,{"mojmod\ghunter\hatchback_camo_frontdoor.rvmat"}},{0.7,{"mojmod\ghunter\hatchback_camo_frontdoor.rvmat"}},{0.5,{"mojmod\ghunter\hatchback_camo_frontdoor_damage.rvmat"}},{0.3,{"mojmod\ghunter\hatchback_camo_frontdoor_damage.rvmat"}},{0,{"mojmod\ghunter\hatchback_camo_frontdoor_destruct.rvmat"}}};
					};
				};
			};
		};
	};
	class Hatchback_camo_Door_2_1: Hatchback_02_Door_2_1
	{
		hiddenSelectionsMaterials[] = {"mojmod\ghunter\hatchback_camo_frontdoor.rvmat"};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth{};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health{};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[] = {"mojmod\ghunter\hatchback_camo.rvmat"};
						healthLevels[] = {{1,{"mojmod\ghunter\hatchback_camo_frontdoor.rvmat"}},{0.7,{"mojmod\ghunter\hatchback_camo_frontdoor.rvmat"}},{0.5,{"mojmod\ghunter\hatchback_camo_frontdoor_damage.rvmat"}},{0.3,{"mojmod\ghunter\hatchback_camo_frontdoor_damage.rvmat"}},{0,{"mojmod\ghunter\hatchback_camo_frontdoor_destruct.rvmat"}}};
					};
				};
			};
		};
	};
	class Hatchback_camo_Door_1_2: Hatchback_02_Door_1_2
	{
		hiddenSelectionsMaterials[] = {"mojmod\ghunter\hatchback_camo_backdoor.rvmat"};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth{};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health{};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[] = {"mojmod\ghunter\hatchback_camo_backdoor.rvmat"};
						healthLevels[] = {{1,{"mojmod\ghunter\hatchback_camo_backdoor.rvmat"}},{0.7,{"mojmod\ghunter\hatchback_camo_backdoor.rvmat"}},{0.5,{"mojmod\ghunter\hatchback_camo_backdoor_damage.rvmat"}},{0.3,{"mojmod\ghunter\hatchback_camo_backdoor_damage.rvmat"}},{0,{"mojmod\ghunter\hatchback_camo_backdoor_destruct.rvmat"}}};
					};
				};
			};
		};
	};
	class Hatchback_camo_Door_2_2: Hatchback_02_Door_2_2
	{
		hiddenSelectionsMaterials[] = {"mojmod\ghunter\hatchback_camo_backdoor.rvmat"};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth{};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health{};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[] = {"mojmod\ghunter\hatchback_camo_backdoor.rvmat"};
						healthLevels[] = {{1,{"mojmod\ghunter\hatchback_camo_backdoor.rvmat"}},{0.7,{"mojmod\ghunter\hatchback_camo_backdoor.rvmat"}},{0.5,{"mojmod\ghunter\hatchback_camo_backdoor_damage.rvmat"}},{0.3,{"mojmod\ghunter\hatchback_camo_backdoor_damage.rvmat"}},{0,{"mojmod\ghunter\hatchback_camo_backdoor_destruct.rvmat"}}};
					};
				};
			};
		};
	};
	class Hatchback_camo_Hood: Hatchback_02_Hood
	{
		hiddenSelectionsMaterials[] = {"mojmod\ghunter\hatchback_camo_Hood.rvmat"};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					RefTexsMats[] = {"mojmod\ghunter\hatchback_camo_hood.rvmat"};
					healthLevels[] = {{1,{"mojmod\ghunter\hatchback_camo_hood.rvmat"}},{0.7,{"dmojmod\ghunter\hatchback_camo_hood.rvmat"}},{0.5,{"mojmod\ghunter\hatchback_camo_hood_damage.rvmat"}},{0.3,{"mojmod\ghunter\hatchback_camo_hood_damage.rvmat"}},{0,{"mojmod\ghunter\hatchback_camo_hood_destruct.rvmat"}}};
				};
			};
		};
	};
	class Hatchback_camo_Trunk: Hatchback_02_Trunk
	{
		hiddenSelectionsMaterials[] = {"mojmod\ghunter\hatchback_camo_Trunk.rvmat"};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth{};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health{};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[] = {"mojmod\ghunter\hatchback_camo_trunk.rvmat"};
						healthLevels[] = {{1,{"mojmod\ghunter\hatchback_camo_trunk.rvmat"}},{0.7,{"mojmod\ghunter\hatchback_camo_trunk.rvmat"}},{0.5,{"mojmod\ghunter\hatchback_camo_trunk_damage.rvmat"}},{0.3,{"mojmod\ghunter\hatchback_camo_trunk_damage.rvmat"}},{0,{"mojmod\ghunter\hatchback_camo_trunk_destruct.rvmat"}}};
					};
				};
			};
		};
	};
};
