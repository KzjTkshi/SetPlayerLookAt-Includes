/*
	__________________________________

    SET PLAYER LOOK AT
    K_SPA.inc
	__________________________________

    CREATE BY : Kazuji Takahashi

    Version : 1.0 beta

        K
        A
        Z
        U
        J
        I

        SETPLAYERLOOKAT


*/

#include <a_samp>

stock SetPlayerLookAt(playerid, Float:x, Float:y)
{
    new Float:Px, Float:Py, Float: Pa;
    GetPlayerPos(playerid, Px, Py, Pa);
    Pa = floatabs(atan((y-Py)/(x-Px)));
    if(x <= Px && y >= Py) Pa = floatsub(180, Pa);
    else if(x < Px && y < Py) Pa = floatadd(Pa, 180);
    else if(x >= Px && y <= Py) Pa = floatsub(360.0, Pa);
    Pa = floatsub(Pa, 90.0);
    if(Pa >= 360.0) Pa = floatsub(Pa, 360.0);
    SetPlayerFacingAngle(playerid, Pa);
}