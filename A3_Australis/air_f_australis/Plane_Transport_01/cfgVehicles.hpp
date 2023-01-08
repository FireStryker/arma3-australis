class CfgVehicles
{
    /* Inheritance Tree */
    #include "\A3_Aegis\cfgPlanes.hpp"

    /* Bases */
	class Plane_Transport_01_base_F: Plane_Base_F
	{
		class TextureSources
		{
			class ADF
			{
				displayName = "ADF (Camo)";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_atlas\Air_F_atlas\Plane_Transport_01\Data\Plane_Transport_01_body_adf_CO.paa",
					"\A3_atlas\Air_F_atlas\Plane_Transport_01\Data\Plane_Transport_01_wings_adf_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_CO.paa"
				};
				factions[] = {};
			};
			class RAAF_Grey_36Sqn
			{
				displayName = "ADF (Grey)";
				author = $STR_A3_A_BranFlakes;
				textures[] =
				{
					"\A3_Australis\Air_F_australis\Plane_Transport_01\Data\Plane_Transport_01_body_adf_grey_CO.paa",
					"\A3_Australis\Air_F_australis\Plane_Transport_01\Data\Plane_Transport_01_wings_adf_grey_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_CO.paa"
				};
				factions[] = {};
			};
		};
		animationList[] = {};
		textureList[] =
		{
			ADF,1,
			RAAF_Grey_36Sqn,1,
		};
	};

    /* Factions */
    #include "cfgADF.hpp"    // ADF
};