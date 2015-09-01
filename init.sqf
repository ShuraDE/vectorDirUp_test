waitUntil {!isNil "bis_fnc_init"};
removeAllWeapons player;


sliderSetRange [1900, 0, 360];
sliderSetRange [1901, 0, 360];
sliderSetRange [1902, 0, 360];

player addAction ["open dialog", { dlgID = createDialog "dlg_show_controls"; }];
player allowDamage false;


//based on https://forums.bistudio.com/topic/86426-setvectordirandup-usage-solved/?p=1460771
setupVector =  {
  _turnObj = _this select 0;
  _dir = _this select 1;
  _angle = _this select 2;
  _pitch = _this select 3;

  hint format["dir: %1\nangle: %2\npitch: %3",_dir,_angle,_pitch];

  _vecdx = sin(_dir) * cos(_angle);
  _vecdy = cos(_dir) * cos(_angle);
  _vecdz = sin(_angle);

  _vecux = cos(_dir) * cos(_angle) * sin(_pitch);
  _vecuy = sin(_dir) * cos(_angle) * sin(_pitch);
  _vecuz = cos(_angle) * cos(_pitch);

  _turnObj setVectorDirAndUp [ [_vecdx,_vecdy,_vecdz], [_vecux,_vecuy,_vecuz] ];


};

base_sphere = createVehicle ["Sign_sphere10cm_EP1", [0,0,0], [], 0, "CAN_COLLIDE"];
testObj = createVehicle ["B_G_Offroad_01_armed_F", [0,0,0], [], 0, "CAN_COLLIDE"];
testObj attachTo [base_sphere, [0,0,5]];
