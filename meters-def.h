﻿#pragma once

#include <string>
#include <unordered_map>

#ifndef _metersdef_h
#define _metersdef_h
#endif

#define NUM_METERS 129
#define NUM_RUBAI_METERS 12
#define NUM_HINDI_METERS 11
#define NUM_FEET 32
#define TOTAL_METERS  (NUM_METERS + NUM_RUBAI_METERS + NUM_HINDI_METERS)

const std::unordered_map<int, int> Usage_map
{
    {13,   1},
    {14,   1},
    {15,   1},
    {16,   1},
    {17,   1},
    {2,	   1},
    {2,	   1},
    {4,	   1},
    {4,	   0},
    {4,	   0},
    {4,	   0},
    {18,   1},
    {19,   1},
    {3,	   1},
    {3,	   1},
    {20,   1},
    {21,   1},
    {22,   1},
    {23,   1},
    {5,	   1},
    {5,	   1},
    {5,	   1},
    {24,   1},
    {25,   1},
    {26,   1},
    {27,   1},
    {6,	   1},
    {6,	   1},
    {6,	   1},
    {6,	   1},
    {30,   1},
    {31,   1},
    {32,   1},
    {33,   1},
    {34,   1},
    {35,   1},
    {35,   1},
    {35,   1},
    {35,   1},
    {36,   1},
    {40,   1},
    {41,   1},
    {42,   1},
    {43,   1},
    {44,   1},
    {45,   1},
    {46,   1},
    {47,   1},
    {48,   1},
    {49,   1},
    {50,   1},
    {51,   1},
    {52,   1},
    {53,   1},
    {54,   1},
    {55,   1},
    {56,   1},
    {57,   1},
    {58,   1},
    {59,   1},
    {60,   1},
    {61,   1},
    {62,   1},
    {63,   1},
    {7,	   1},
    {103,  1},
    {64,   1},
    {65,   1},
    {8,	   1},
    {8,	   0},
    {8,	   0},
    {8,	   0},
    {9,	   1},
    {9,	   0},
    {9,	   1},
    {9,	   0},
    {10,   1},
    {10,   0},
    {66,   1},
    {67,   1},
    {68,   1},
    {69,   1},
    {70,   1},
    {71,   1},
    {72,   1},
    {73,   1},
    {74,   1},
    {75,   1},
    {76,   1},
    {77,   1},
    {1,	   1},
    {1,	   1},
    {1,	   1},
    {1,	   1},
    {11,   1},
    {11,   1},
    {78,   1},
    {79,   1},
    {80,   1},
    {81,   1},
    {12,   1},
    {12,   0},
    {12,   0},
    {12,   0},
    {12,   0},
    {82,   1},
    {83,   1},
    {84,   1},
    {85,   1},
    {86,   1},
    {87,   1},
    {88,   1},
    {89,   1},
    {90,   1},
    {91,   1},
    {92,   1},
    {93,   1},
    {94,   1},
    {95,   1},
    {36,   1},
    {96,   1},
    {97,   1},
    {98,   1},
    {99,   1},
    {100,  1},
    {101,  1},
    {102,  1},
    {103,  1},
    {104,  1}
};

const std::unordered_map<std::wstring, const std::wstring> RubaiMeter_map
{
    {L"10101/110101/110101/110",   L"ہزج مثمّن اخرب مکفوف مجبوب"},
    {L"10101/110101/1101010/10",   L"ہزج مثمّن اخرب مکفوف ابتر"},
    {L"10101/110110/1101010/10",   L"ہزج مثمّن اخرب مقبوض ابتر"},
    {L"10101/110110/110101/110",   L"ہزج مثمّن اخرب مقبوض مکفوف مجبوب"},
    {L"101010/10110/110101/110",   L"ہزج مثمّن اخرم اشتر مکفوف مجبوب"},
    {L"101010/10110/1101010/10",   L"ہزج مثمّن اخرم اشتر ابتر"},
    {L"10101/1101010/101010/10",   L"ہزج مثمّن اخرب اخرم ابتر"},
    {L"10101/1101010/10101/110",   L"ہزج مثمّن اخرب مجبوب"},
    {L"101010/101010/10101/110",   L"ہزج مثمّن اخرم اخرب مجبوب"},
    {L"101010/101010/101010/10",   L"ہزج مثمّن اخرم ابتر"},
    {L"101010/10101/1101010/10",   L"ہزج مثمّن اخرم اخرب ابتر"},
    {L"101010/10101/110101/110",   L"ہزج مثمّن اخرم اخرب مکفوف مجبوب"}
};

const std::unordered_map<std::wstring, const std::wstring> HindiMeter_map
{
    {L"10(10)/10(10)/10(10)/10(10)/10(10)/10(10)/10(10)/10",       L"بحرِ ہندی/ متقارب مثمن مضاعف"},
    {L"10(10)/10(10)/10(10)/10(10)/10(10)/10",					L"بحرِ ہندی/ متقارب مسدس مضاعف"},
    {L"10(10)/10(10)/10(10)/10(10)/10(10)/10(10)/10(10)/1010",		L"بحرِ ہندی/ متقارب اثرم مقبوض محذوف مضاعف"},
    {L"10(10)/10(10)/10(10)/10",							L"بحرِ ہندی/ متقارب مربع مضاعف"},
    {L"10(10)/10(10)/10(10)/1010",							L"بحرِ ہندی/ متقارب اثرم مقبوض محذوف"},
    {L"10(10)/10(10)/10",								L"بحرِ ہندی/ متقارب مثمن محذوف"},
    {L"10(10)/10(10)/10(10)/10(10)/10(10)/1010",				L"بحرِ ہندی/ متقارب مسدس محذوف"},
    {L"10(10)/10(10)",									L"بحرِ ہندی/ متقارب مربع محذوف"},
    {L"(10)10/(10)10/(10)10/(10)10/(10)10/(10)10/(10)10/(10)10",	L"بحرِ زمزمہ/ متدارک مثمن مضاعف"},
    {L"(10)10/(10)10/(10)10/(10)10/(10)10/(10)10",				L"بحرِ زمزمہ/ متدارک مسدس مضاعف"},
    {L"(10)10/(10)10/(10)10/(10)",							L"بحرِ زمزمہ/ متدارک مربع مضاعف"}
};

const std::unordered_map<std::wstring, const std::wstring> Meter_map
{
    {L"1101010/1101010/1101010/1101010",									L"مفاعیلن مفاعیلن مفاعیلن مفاعیلن"},
    {L"1101010/1101010/1101010/11010",										L"مفاعیلن مفاعیلن مفاعیلن فعولن"},
    {L"110110/110110/110110/110110",										L"مفاعلن مفاعلن مفاعلن مفاعلن"},
    {L"10110/1101010+10110/1101010",										L"فاعلن مفاعیلن فاعلن مفاعیلن"},
    {L"110110/1101010/110110/1101010",										L"مفاعلن مفاعلن مفاعلن مفاعیلن"},
    {L"10101/110101/110101/1101010",										L"مفعول مفاعیل مفاعیل مفاعیلن"},
    {L"10101/1101010+10101/1101010",										L"مفعول مفاعیلن مفعول مفاعیلن"},
    {L"10101/110101/110101/11010",											L"مفعول مفاعیل مفاعیل فعولن"},
    {L"101010/10101/110101/11010",											L"مفعولن مفعول مفاعیل فعولن"},
    {L"10101/1101010/10101/11010",											L"مفعول مفاعیلن مفعول فعولن"},
    {L"10101/110101/1101010/1010",											L"مفعول مفاعیل مفاعیلن فعلن"},
    {L"1101010/1101010/1101010",											L"مفاعیلن مفاعیلن مفاعیلن"},
    {L"1101010/1101010/11010",												L"مفاعیلن مفاعیلن فعولن"},
    {L"10101/110110/11010",													L"مفعول مفاعلن فعولن"},
    {L"101010/10110/11010",													L"مفعولن فاعلن فعولن"},
    {L"10110/110110+10110/110110",											L"فاعلن مفاعلن فاعلن مفاعلن"},
    {L"1101010/11010",														L"مفاعیلن فعولن"},
    {L"1101010/11010+1101010/11010",										L"مفاعیلن فعولن مفاعیلن فعولن"},
    {L"1010110/1010110/1010110/1010110",									L"مستفعلن مستفعلن مستفعلن مستفعلن"},
    {L"101110/101110/101110/101110",										L"مفتَعِلن مفتَعِلن مفتَعِلن مفتَعِلن"},
    {L"101110/110110+101110/110110",										L"مفتَعِلن مفاعلن مفتَعِلن مفاعلن"},
    {L"110110/101110+110110/101110",										L"مفاعلن مفتَعِلن مفاعلن مفتَعِلن"},
    {L"1010110/1010110/1010110",											L"مستفعلن مستفعلن مستفعلن"},
    {L"101110/101110/101110",												L"مفتَعِلن مفتَعِلن مفتَعِلن"},
    {L"1011010/1011010/1011010/1011010",									L" فاعلاتن فاعلاتن فاعلاتن فاعلاتن"},
    {L"1011010/1011010/1011010/10110",										L"فاعلاتن فاعلاتن فاعلاتن فاعلن"},
    {L"1011010/111010/111010/1110",											L"فاعلاتن فعِلاتن فعِلاتن فعِلن"},
    {L"111010/111010/111010/1110",											L"فعِلاتن فعِلاتن فعِلاتن فعِلن"},
    {L"1011010/111010/111010/1010",											L"فاعلاتن فعِلاتن فعِلاتن فعلن"},
    {L"111010/111010/111010/1010",											L"فعِلاتن فعِلاتن فعِلاتن فعلن"},
    {L"11101/1011010+11101/1011010",										L"فعِلات فاعلاتن فعِلات فاعلاتن"},
    {L"111010/111010/111010/111010",										L"فعِلاتن فعِلاتن فعِلاتن فعِلاتن"},
    {L"1011010/1011010/1011010",											L"فاعلاتن فاعلاتن فاعلاتن"},
    {L"1011010/1011010/10110",												L"فاعلاتن فاعلاتن فاعلن"},
    {L"1011010/111010/1110",												L"فاعلاتن فعِلاتن فعِلن"},
    {L"1011010/111010/1010",												L"فاعلاتن فعِلاتن فعلن"},
    {L"111010/111010/1110",													L"فعِلاتن فعِلاتن فعِلن"},
    {L"111010/111010/1010",													L"فعِلاتن فعِلاتن فعِلن"},
    {L"111010/111010/111010",												L"فعِلاتن  فعِلاتن فعِلاتن"},
    {L"11010/11010/11010/11010",											L"فعولن فعولن فعولن فعولن"},
    {L"11010/11010/11010/11010/11010/11010/11010/11010",					L"فعولن فعولن فعولن فعولن فعولن فعولن فعولن فعولن"},
    {L"11010/11010/11010/110",												L"فعولن فعولن فعولن فعَل"},
    {L"101/1101/1101/11010",												L"فاع فعول فعول فعولن"},
    {L"101/1101/1101/110",													L"فاع فعول فعول فعَل"},
    {L"101/1101/1101/1101/1101/1101/1101/110",								L"فاع فعول فعول فعول فعول فعول فعول فعَل"},
    {L"101/1101/1101/1101/1101/1101/1101/11010",							L"فاع فعول فعول فعول فعول فعول فعول فعولن"},
    {L"11010/11010/11010",													L"فعولن فعولن فعولن"},
    {L"11010/11010/110",													L"فعولن فعولن فعَل"},
    {L"1010/11010/1010/11010",												L"فعلن فعولن فعلن فعولن"},
    {L"10110/10110/10110/10110",											L"فاعلن فاعلن فاعلن فاعلن"},
    {L"1110/1110/1110/1110",												L"فعِلن فعِلن فعِلن فعِلن"},
    {L"1110/1110/1110/1110/1110/1110/1110/1110",							L"فعِلن فعِلن فعِلن فعِلن فعِلن فعِلن فعِلن فعِلن"},
    {L"10110/10110/10110/1110",												L"فاعلن فاعلن فاعلن فعِلن"},
    {L"10110/10110/10110",													L"فاعلن فاعلن فاعلن"},
    {L"10110/110/10110/110",												L"فاعلن فعَل فاعلن فعَل"},
    {L"1110110/1110110/1110110/1110110",									L"متفاعلن متفاعلن متفاعلن متفاعلن"},
    {L"1110110/1110110/1110110",											L"متفاعلن متفاعلن متفاعلن"},
    {L"1101110/1101110/1101110/1101110",									L"مفاعلتن مفاعلتن مفاعلتن مفاعلتن"},
    {L"1101110/1101110/1101110",											L"مفاعلتن مفاعلتن مفاعلتن"},
    {L"1101110/1101110/11010",												L"مفاعلتن مفاعلتن فعولن"},
    //{L"1101010/1011010/1101010/1011010",									L"مفاعیلن فاعلاتن مفاعیلن فاعلاتن"},//
   // {L"110101/101101/110101/10110",											L"مضارع مثمن مکفوف محذوف"},//
    {L"10101/1011010/10101/1011010",										L"مفعول فاعلاتن مفعول فاعلاتن"},
    {L"10101/101101/110101/10110",											L"مفعول فاعلات مفاعیل فاعلن"},
    {L"10101/1011010/10101/10110",											L"مفعول فاعلاتن مفعول فاعلن"},
    //{L"10101/101101/1101010",												L"مضارع مسدس اخرب مکفوف"},//
    //{L"1010110/1011010/1010110/1011010",									L"مستفعلن فاعلاتن مستفعلن فاعلاتن"},//
    {L"110110/111010/110110/111010",										L"مفاعلن فعِلاتن مفاعلن فعِلاتن"},
    {L"110110/101010/110110/111010",										L"مفاعلن مفعولن مفاعلن فعِلاتن"},
   // {L"110110/111010/110110/101010",										L"مفاعلن فعِلاتن مفاعلن مفعولن"},
 //   {L"110110/101010/110110/101010",										L"مجتث مثمن مخبون"},
    {L"110110/111010/110110/1110",											L"مفاعلن فعِلاتن مفاعلن فعِلن"},
 //   {L"110110/101010/110110/1110",											L"مجتث مثمن مخبون محذوف"},
    {L"110110/111010/110110/1010",											L"مفاعلن فعِلاتن مفاعلن فعلن"},
    //{L"110110/101010/110110/1010",											L"مجتث مثمن مخبون محذوف مسکن"},//
    {L"110110/111010/110110",												L"مفاعلن فعِلاتن مفاعلن"},
    //{L"110110/101010/110110",												L"مجتث مسدس مخبون"},
    //{L"1010110/1010101/1010110/1010101",									L"مستفعلن مفعولاتُ مستفعلان مفعولاتُ"},
    {L"101110/10110+101110/10110",											L"مفتعِلن فاعلن مفتعِلن فاعلن"},
    {L"101110/101101/101110/10",											L"مفتعِلن فاعلات مفتعِلن فع"},
    {L"101110/10110/101110",												L"مفتعِلن فاعلن مفتعِلن"},
 //   {L"1010101/1010110/1010101/1010110",									L"مفعولاتُ مستفعلن مفتعولات مستفعلن"},
    {L"101101/101110/101101/101110",										L"فاعلات مفتعِلن فاعلات مفتعِلن"},
   // {L"1010110/1010110/1010101",											L"مستفعلن مستفعلن مفعولات"},
    {L"101110/101110/10110",												L"مفتعِلن مفتعِلن فاعلن"},
 //   {L"1010110/1010110/11010",												L"مستفعلن مستفعلن فعولن"},
   // {L"1011010/1010110/1011010/1010110",									L"فاعلاتن مستفعلن فاعلاتن مستفعلن"},
  //  {L"1011010/1010110/1011010",											L"فاعلاتن مستفعلن فاعلاتن"},
 //   {L"111010/110110/111010",												L"خفیف مسدس مخبون"},
    {L"1011010/110110/1110",												L"فاعلاتن مفاعلن فعِلن"},
    {L"111010/110110/1110",													L"فعِلاتن مفاعلن فعِلن"},
    {L"1011010/110110/1010",												L"فاعلاتن مفاعلن فعلن"},
    {L"111010/110110/1010",													L"فعِلاتن مفاعلن فعلن"},
    {L"1011010/110110/10",													L"فاعلاتن مفاعلن فع"},
    {L"111010/110110/10",													L"فعِلاتن مفاعلن فع"},
   // {L"1101010/11010/1101010",												L"مفاعیلن فعولن مفاعیلن"},
    {L"11010/1101010/11010/110110",											L"فعولن مفاعیلن فعولن مفاعیلن"},
  //  {L"11010/110110/11010/110110",											L"طویل مثمن مقبوض"},
    {L"1011010/10110/1011010/10110",										L"فاعلاتن فاعلن فاعلاتن فاعلن"},
    {L"111010/1110/111010/1110",											L"فعِلاتن فعِلن فعِلاتن فعِلن"},
    {L"111010/1010/111010/1110",											L"فعلاتن فعلن فعلاتن فعلن"},
    //{L"101010/1110/111010/1110",											L"مدید مثمن مخبون"},
    //{L"111010/1110/101010/1110",											L"مدید مثمن مخبون"},
    //{L"111010/1110/111010/1010",											L"مدید مثمن مخبون"},
    {L"1011010/1110/1011010/1110",											L"فاعلاتن فعِلن فاعلاتن فعِلن"},
    //{L"1010110/10110/1010110/10110",										L"مستفعلن فاعلن مستفعلن فاعلن"},
    //{L"110110/1110/110110/1110",											L"بسیط مثمن مخبون"},
    //{L"1101010/1101010/1011010",											L"مفاعیلن مفاعیلن فاعلاتن"},
   // {L"10101/110101/1011010",												L"قریب مسدس اخرب مکفوف"},
    //{L"1011010/1011010/1010110",											L"فاعلاتن فاعلاتن مستفعلن"},
   // {L"111010/111010/110110",												L"جدید مسدس مخبون"},
    //{L"1011010/1101010/1101010",											L"فاعلاتن مفاعیلن مفاعیلن"},
    {L"101101/110101/11010",												L"فاعلات مفاعیل فعولن"},
    {L"11011010/11011010/11011010/11011010",								L"فعول فعلن فعول فعلن فعول فعلن فعول فعلن"},
    {L"10110/1101010",														L"فاعلن مفاعیلن"},
    {L"10110/110110",														L"فاعلن مفاعلن"},
    {L"1101010/1101010",													L"مفاعیلن مفاعیلن"},
    {L"110110/110110/110110/110",											L"مفاعلن مفاعلن مفاعلن فعَل"},
    {L"1011010/111010/111010",												L"فاعلاتن فعِلاتن فعِلاتن"},
    {L"1011010/1011010",													L"فاعلاتن فاعلاتن"},
    {L"1011010/10110",														L"فاعلاتن فاعلن"},
    {L"11010/11010",														L"فعولن فعولن"},
    {L"1110110/1110110",													L"متفاعلن متفاعلن"},
 //   {L"11010/1101010",														L"طویل مربع سالم"},
 //   {L"1011010/10110",														L"مدید مربع سالم"},
    {L"1101010/1101010/1101010/1101010/1101010/1101010/1101010/1101010",	L"مفاعیلن مفاعیلن مفاعیلن مفاعیلن مفاعیلن مفاعیلن مفاعیلن مفاعیلن"},
    {L"11011010/11011010",													L"فعول فعلن" }
};

const std::unordered_map<std::wstring, const std::wstring> Arkan_map
{
    {L"101010",    L"مفعولن"},
    {L"1010110",   L"مستفعلن"},
    {L"10101",	   L"مفعول"},
    {L"1010",	   L"فِعْلن"},
    {L"1011010",   L"فاعلاتن"},
    {L"101101",	   L"فاعلاتُ"},
    {L"10110",	   L"فاعلن"},
    {L"101110",	   L"مفتَعِلن"},
    {L"101",	   L"فاع"},
    {L"10",        L"فِع"},
    {L"1101010",   L"مفاعیلن"},
    {L"110101",	   L"مفاعیل"},
    {L"11010",	   L"فعولن"},
    {L"110110",	   L"مفاعلن"},
    {L"1101",	   L"فعول"},
    {L"110",	   L"فَعَل"},
    {L"111010",	   L"فَعِلاتن"},
    {L"1110110",   L"متَفاعلن"},
    {L"11101",	   L"فَعِلات"},
    {L"1110",	   L"فَعِلن"},
    {L"11011010",  L"مَفاعلاتن"},
    {L"1010101",   L"مفعولاتُ"},
    {L"1101110",   L"مفاعِلَتن"},
    {L"10101101",  L"مستفعلان"},
    {L"10110101",  L"فاعلاتان"},
    {L"1011101",   L"مفتَعِلان"},
    {L"11010101",  L"مفاعیلان"},
    {L"1101101",   L"مفاعلان"},
    {L"1110101",   L"فَعِلاتان"},
    {L"11101101",  L"متَفاعلان"},
    {L"110110101", L"مَفاعلاتان"},
    {L"11011101",  L"مفاعِلَتان"},
};

const std::unordered_map<wchar_t, int> LetterToLine_map
{
    {L'آ', 1     },
    {L'ا', 905   },
    {L'ب', 7273  },
    {L'پ', 61474 },
    {L'ت', 13441 },
    {L'ٹ', 60007 },
    {L'ث', 18052 },
    {L'ج', 18213 },
    {L'چ', 67245 },
    {L'ح', 21249 },
    {L'خ', 22251 },
    {L'د', 23522 },
    {L'ڈ', 70942 },
    {L'ذ', 26894 },
    {L'ر', 27073 },
    {L'ز', 29416 },
    {L'ژ', 72228 },
    {L'س', 30024 },
    {L'ش', 34889 },
    {L'ص', 36304 },
    {L'ض', 36844 },
    {L'ط', 37004 },
    {L'ظ', 37507 },
    {L'ع', 37583 },
    {L'غ', 38714 },
    {L'ف', 39303 },
    {L'ق', 40454 },
    {L'ک', 72249 },
    {L'گ', 78089 },
    {L'ل', 41479 },
    {L'م', 43639 },
    {L'ن', 54457 },
    {L'و', 58417 },
    {L'ہ', 81351 },
    {L'ی', 83887 }
};
