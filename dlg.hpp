
class dlg_show_controls
{
	idd = 5000;
	movingenable = 1;

	class Controls	{
		class sliderDir: RscSlider
		{
			idc = 1900;
			x = 41.5 * GUI_GRID_W + GUI_GRID_X;
			y = 13 * GUI_GRID_H + GUI_GRID_Y;
			w = 21.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			onSliderPosChanged = "[testObj, (sliderPosition  1900)*36, (sliderPosition  1901)*36, (sliderPosition  1902)*36] call setupVector;";
		};
		class sliderAngle: RscSlider
		{
			idc = 1901;
			x = 41.5 * GUI_GRID_W + GUI_GRID_X;
			y = 15 * GUI_GRID_H + GUI_GRID_Y;
			w = 21.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			onSliderPosChanged = "[testObj, (sliderPosition  1900)*36, (sliderPosition  1901)*36, (sliderPosition  1902)*36] call setupVector;";
		};
		class sliderPitch: RscSlider
		{
			idc = 1902;
			x = 41.5 * GUI_GRID_W + GUI_GRID_X;
			y = 17 * GUI_GRID_H + GUI_GRID_Y;
			w = 21.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			onSliderPosChanged = "[testObj, (sliderPosition  1900)*36, (sliderPosition  1901)*36, (sliderPosition  1902)*36] call setupVector;";
		};
		class txtDir: RscText
		{
			idc = 1001;
			x = 34.5 * GUI_GRID_W + GUI_GRID_X;
			y = 13 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		  text = "direction";
		};
		class txtAngle: RscText
		{
			idc = 1002;
			x = 34.5 * GUI_GRID_W + GUI_GRID_X;
			y = 15 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		  text = "angle";
		};
		class txtPitch: RscText
		{
			idc = 1003;
			x = 34.5 * GUI_GRID_W + GUI_GRID_X;
			y = 17 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		  text = "pitch";
		};
	};
};
