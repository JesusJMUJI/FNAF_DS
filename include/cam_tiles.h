#include <nds.h>
#include <stdio.h>

u8 CA[64] = 
{
    0,0,0,0,0,0,0,0, 
    0,0,3,3,3,0,3,3, 
    0,3,0,0,0,0,3,0, 
    0,3,0,0,0,0,3,3, 
    0,3,0,0,0,0,3,0, 
    0,3,0,0,0,0,3,0, 
    0,0,3,3,3,0,3,0, 
    0,0,0,0,0,0,0,0
};

u8 AM[64] =
{
    0,0,0,0,0,0,0,0,
    3,3,0,3,0,3,3,0,
    0,3,0,3,3,0,3,0,
    3,3,0,3,0,0,3,0,
    0,3,0,3,0,0,3,0,
    0,3,0,3,0,0,3,0,
    0,3,0,3,0,0,3,0,
    0,0,0,0,0,0,0,0
};

u8 cam1[64] =
{
    0,0,0,0,0,0,0,0,
    0,0,0,0,3,0,0,0,
    0,0,0,3,3,0,0,0,
    0,0,3,0,3,0,0,0,
    0,0,0,0,3,0,0,0,
    0,0,0,0,3,0,0,0,
    0,0,3,3,3,3,0,0,
    0,0,0,0,0,0,0,0
};

u8 cam2[64] =
{
    0,0,0,0,0,0,0,0,
    0,0,0,3,3,3,3,0,
    0,0,3,0,0,3,0,0,
    0,0,0,0,3,0,0,0,
    0,0,0,3,0,0,0,0,
    0,0,3,0,0,0,0,0,
    0,0,3,3,3,3,0,0,
    0,0,0,0,0,0,0,0
};

u8 cam3[64] =
{
    0,0,0,0,0,0,0,0,
    0,0,3,3,3,3,3,0,
    0,0,0,0,0,3,0,0,
    0,0,0,0,3,0,0,0,
    0,0,0,3,3,3,0,0,
    0,0,0,0,0,0,3,0,
    0,0,3,3,3,3,0,0,
    0,0,0,0,0,0,0,0
};

u8 cam4[64] =
{
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,3,0,0,
    0,0,0,0,3,0,0,0,
    0,0,0,3,0,3,0,0,
    0,0,3,3,3,3,0,0,
    0,0,0,0,0,3,0,0,
    0,0,0,0,0,3,0,0,
    0,0,0,0,0,0,0,0
};

u8 cam5[64] =
{
    0,0,0,0,0,0,0,0,
    0,0,3,3,3,3,0,0,
    0,0,3,0,0,0,0,0,
    0,0,3,3,3,3,0,0,
    0,0,3,0,0,3,0,0,
    0,0,0,0,0,3,0,0,
    0,0,3,3,3,0,0,0,
    0,0,0,0,0,0,0,0
};

u8 cam6[64] =
{
    0,0,0,0,0,0,0,0,
    0,0,0,0,3,0,0,0,
    0,0,0,3,0,0,0,0,
    0,0,3,3,3,0,0,0,
    0,0,3,0,0,3,0,0,
    0,0,3,0,0,3,0,0,
    0,0,0,3,3,3,0,0,
    0,0,0,0,0,0,0,0
};

u8 cam7[64] =
{
    0,0,0,0,0,0,0,0,
    0,0,3,3,3,3,0,0,
    0,0,3,0,0,3,0,0,
    0,0,0,0,3,0,0,0,
    0,0,0,3,0,0,0,0,
    0,0,3,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0
};

u8 A[64] = 
{
    0,0,0,0,0,0,0,0,
    0,3,3,3,3,3,3,0,
    0,3,0,0,0,0,3,0,
    0,3,0,0,0,0,3,0,
    0,3,3,3,3,3,3,0,
    0,3,0,0,0,0,3,0,
    0,3,0,0,0,0,3,0,
    0,0,0,0,0,0,0,0,
};

u8 B[64] = 
{
    0,0,0,0,0,0,0,0,
    0,3,3,3,3,3,0,0,
    0,3,0,0,0,0,3,0,
    0,3,0,0,0,0,3,0,
    0,3,3,3,3,3,3,0,
    0,3,0,0,0,0,3,0,
    0,3,3,3,3,3,0,0,
    0,0,0,0,0,0,0,0,
};

u8 C[64] = 
{
    0,0,0,0,0,0,0,0,
    0,3,3,3,3,3,3,0,
    0,3,0,0,0,0,0,0,
    0,3,0,0,0,0,0,0,
    0,3,0,0,0,0,0,0,
    0,3,0,0,0,0,0,0,
    0,3,3,3,3,3,3,0,
    0,0,0,0,0,0,0,0,
};

u8 T[64] = 
{
    0,0,0,0,0,0,0,0,
    0,3,3,3,3,3,3,0,
    0,0,0,3,0,0,0,0,
    0,0,0,0,3,0,0,0,
    0,0,0,0,3,0,0,0,
    0,0,0,0,3,0,0,0,
    0,0,0,0,3,0,0,0,
    0,0,0,0,0,0,0,0,
};

u8 arrow_down[64] = 
{
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    1,1,0,0,0,0,1,1,
    1,1,1,0,0,1,1,1,
    0,1,1,1,1,1,1,0,
    0,0,1,1,1,1,0,0,
    0,0,0,1,1,0,0,0,
};

u8 arrow_left[64] = 
{
    0,0,0,1,1,0,0,0,
    0,0,1,1,0,0,0,0,
    0,1,1,0,0,0,0,0,
    1,1,0,0,0,0,0,0,
    1,1,0,0,0,0,0,0,
    0,1,1,0,0,0,0,0,
    0,0,1,1,0,0,0,0,
    0,0,0,1,1,0,0,0,
};

u8 arrow_right[64] = 
{
    0,0,0,1,1,0,0,0,
    0,0,0,0,1,1,0,0,
    0,0,0,0,0,1,1,0,
    0,0,0,0,0,0,1,1,
    0,0,0,0,0,0,1,1,
    0,0,0,0,0,1,1,0,
    0,0,0,0,1,1,0,0,
    0,0,0,1,1,0,0,0,
};

u8 arrow_up[64] = 
{
    0,0,0,1,1,0,0,0,
    0,0,1,1,1,1,0,0,
    0,1,1,0,0,1,1,0,
    1,1,1,0,0,1,1,1,
    1,1,0,0,0,0,1,1,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
};

u8 M[64]=
{
    0,0,0,0,0,0,0,0,
    0,1,0,0,0,0,1,0,
    0,1,1,0,0,1,1,0,
    0,1,0,1,1,0,1,0,
    0,1,0,0,0,0,1,0,
    0,1,0,0,0,0,1,0,
    0,1,0,0,0,0,1,0,
    0,0,0,0,0,0,0,0,
};