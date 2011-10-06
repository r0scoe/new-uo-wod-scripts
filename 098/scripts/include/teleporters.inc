use uo;
use os;
use cfgfile;

var teleporters := {
    {312,   786,    232,    5750,   360,    0},     // yew_to_cave[]
    {313,   786,    232,    5749,   360,    1},     // yew_to_cave[]
    {314,   786,    232,    5748,   360,    2},     // yew_to_cave[]
    {512,  1559,   -255,    5395,   126,    0},     // shame_out_x[]
    {513,  1559,   -255,    5395,   126,    0},     // shame_out_x[]
    {514,  1559,   -255,    5395,   126,    0},     // shame_out_x[]
    {1142,  3621,   -255,   1414,   3828,   6},     // jhelom_ns_m_x[]
    {1163,  2208,   61,     1171,   2202,   0},     // hedge_tele3[]
    {1165,  2205,   41,     1163,   2211,  63},     // hedge_tele2[]
    {1166,  2237,   61,     1163,   2208,   0},     // hedge_tele1[]
    {1175,  2635,   -255,   5243,   1006,   0},     // destard_out_x[]
    {1176,  2635,   -255,   5243,   1006,   0},     // destard_out_x[]
    {1177,  2635,   -255,   5243,   1006,   0},     // destard_out_x[]
    {1296,  1080,   -255,   5587,   631,   30},     // despise_out_x[]
    {1296,  1081,   -255,   5587,   631,   30},     // despise_out_x[]
    {1296,  1082,   -255,   5587,   631,   30},     // despise_out_x[]
    {1406,  3996,   -255,   1414,   3828,   6},     // jhelom_ns_m_x[]
    {1409,  3824,   -255,   1124,   3623,   6},     // jhelom_m_n_x[]
    {1419,  3832,   -255,   1466,   4015,   6},     // jhelom_m_s_x[]
    {1491,  1640,   24,     6032,   1499,  27},     // Britain_sewer_x[]
    {1491,  1642,   41,     6032,   1501,  27},     // Britain_sewer_x[]
    {1592,  2489,   17,     1602,   2488,   5},     // shrine_spirit_exit[]
    {1600,  2489,   -255,   1595,   2490,  19},     // shrine_spirit_ent1[]
    {1600,  2490,   -255,   1595,   2490,  19},     // shrine_spirit_ent2[]
    {1628,  3320,   0,      5899,   1409,  41},     // Trinsic_to_cave[]
    {1629,  3320,   0,      5900,   1409,  39},     // Trinsic_to_cave[]
    {1653,  2963,   -255,   1676,   2986,   1},     // hv_m_b_x[]
    {1677,  2987,   -255,   1675,   2987,  21},     // hv_b_b_x[]
    {1997,  80,     -255,   5880,   243,    0},     // N_Wrong_to_Ice_dngn[]
    {1997,  81,     -255,   5880,   243,    0},     // N_Wrong_to_Ice_dngn[]
    {1997,  82,     -255,   5880,   243,    0},     // N_Wrong_to_Ice_dngn[]
    {2041,  215,    26,     5825,   630,    0},     // wrong_out_x[]
    {2042,  215,    26,     5825,   630,    0},     // wrong_out_x[]
    {2043,  215,    26,     5825,   630,    0},     // wrong_out_x[]
    {2384,  836,    -255,   5614,   1997,   0},     // covetous_2_3_x[]
    {2384,  837,    -255,   5614,   1997,   0},     // covetous_2_3_x[]
    {2384,  838,    -255,   5614,   1997,   0},     // covetous_2_3_x[]
    {2399,  198,    1,      6087,   3675,  17},     // N._Minoc_to_east_t2a[]
    {2400,  198,    1,      6087,   3676,  18},     // N._Minoc_to_east_t2a[]
    {2420,  883,    -255,   5393,   1958,   0},     // covetous_2_1_x[]
    {2421,  883,    -255,   5393,   1958,   0},     // covetous_2_1_x[]
    {2422,  883,    -255,   5393,   1958,   0},     // covetous_2_1_x[]
    {2455,  858,    -255,   5389,   2026,   0},     // covetous_4_3_x[]
    {2456,  858,    -255,   5389,   2026,   0},     // covetous_4_3_x[]
    {2457,  858,    -255,   5389,   2026,   0},     // covetous_4_3_x[]
    {2494,  3576,   -255,   5907,   4069,  26},     // s.isle_to_white_circle[]
    {2498,  916,    -255,   5456,   1863,   0},     // covetous_out_x[]
    {2499,  916,    -255,   5456,   1863,   0},     // covetous_out_x[]
    {2500,  916,    -255,   5456,   1863,   0},     // covetous_out_x[]
    {2544,  850,   -255,    5579,   1924,   0},     // covetous_4_5_x[]
    {2545,  850,   -255,    5579,   1924,   0},     // covetous_4_5_x[]
    {2546,  850,   -255,    5579,   1924,   0},     // covetous_4_5_x[]
    {2647,  2195,   -19,    2651,   2195,   5},     // buc_den_exit2[]
    {2669,  2072,   -19,    2669,   2099,   3},     // buc_den_exit1[]
    {2674,  2242,   3,      2677,   2242, 238},     // buc_den_tavern_ent[]
    {2676,  2241,   -15,    2673,   2242,   3},     // buc_den_tavern_ext1[]
    {2676,  2242,   -15,    2673,   2242,   3},     // buc_den_tavern_ext2[]
    {2776,  894,    -22,    5685,   386,    1},     // vesper_gy_to_cave[]
    {2776,  895,    -22,    5685,   387,    2},     // vesper_gy_to_cave[]
    {2922,  3405,   7,      5827,   1501,   0},     // serp_hold_to_des_dung[]
    {2923,  3405,   6,      5828,   1501,   0},     // serp_hold_to_des_dung[]
    {2924,  3405,   7,      5829,   1501,   1},     // serp_hold_to_des_dung[]
    {4110,  430,    -255,   5188,   638,    1},     // deceit_out_x[]
    {4111,  430,    -255,   5188,   638,    1},     // deceit_out_x[]
    {4112,  430,    -255,   5188,   638,    1},     // deceit_out_x[]
    {4300,  968,    -255,   4442,   1122,   4},     // moonglow_b_x[]
    {4436,  1107,   -255,   4300,   992,    5},     // moonglow_3_x[]
    {4443,  1137,   -255,   4487,   1475,   4},     // moonglow_2_x[]
    {4449,  1107,   -255,   4539,   890,   27},     // moonglow_4_y[]
    {4449,  1115,   -255,   4671,   1135,  10},     // moonglow_1_x[]
    {4496,  1475,   -255,   4442,   1122,   4},     // moonglow_b_x[]
    {4540,  898,    -255,   4442,   1122,   4},     // moonglow_b_x[]
    {4545,  851,    -255,   5735,   3196,  11},     // moonglow_to_papua[]
    {4663,  1134,   -255,   4442,   1122,   4},     // moonglow_b_x[]
    {4721,  3813,   0,   5905,   20,     44},    // hythloth_out_x[]
    {4722,  3813,   0,   5905,   20,     44},    // hythloth_out_x[]
    {4723,  3813,   0,   5905,   20,     44},    // hythloth_out_x[]
    {5129,  909,    -255,   5143,   801,    10},    // destard_1_2_x[]
    {5130,  909,    -255,   5143,   801,    10},    // destard_1_2_x[]
    {5131,  909,    -255,   5143,   801,    10},    // destard_1_2_x[]
    {5132,  909,    -255,   5143,   801,    10},    // destard_1_2_x[]
    {5136,  985,    -255,   5152,   809,    246},   // destard_3_2_x[]
    {5136,  986,    -255,   5152,   809,    246},   // destard_3_2_x[]
    {5136,  987,    -255,   5152,   809,    246},   // destard_3_2_x[]
    {5137,  649,    -255,   5346,   579,    6},     // deceit_3_2_x[]
    {5137,  3664,   27,     6023,   1344,   -25},   // W.T2A_to_newbie_lvl[]
    {5137,  3665,   31,     6023,   1345,   -25},   // W.T2A_to_newbie_lvl[]
    {5137,  3666,   31,     6023,   1346,   -24},   // W.T2A_to_newbie_lvl[]
    {5142,  800,    -255,   5130,   908,    231},   // destard_2_1_x[]
    {5143,  800,    -255,   5130,   908,    231},   // destard_2_1_x[]
    {5144,  800,    -255,   5130,   908,    231},   // destard_2_1_x[]
    {5145,  800,    -255,   5130,   908,    231},   // destard_2_1_x[]
    {5150,  4062,   38,     6004,   1378,   1},     // newbie_lvl_to_delucia[]
    {5150,  4063,   38,     6004,   1379,   -1},    // newbie_lvl_to_delucia[]
    {5153,  808,    -255,   5137,   986,    5},     // destard_2_3_x[]
    {5153,  809,    -255,   5137,   986,    5},     // destard_2_3_x[]
    {5153,  810,    -255,   5137,   986,    5},     // destard_2_3_x[]
    {5166,  245,    -255,   1361,   884,    1},     // wind_ent_out_x[]
    {5187,  639,    -255,   4111,   431,    6},     // deceit_ent_out_x[]
    {5188,  639,    -255,   4111,   431,    6},     // deceit_ent_out_x[]
    {5189,  639,    -255,   4111,   431,    6},     // deceit_ent_out_x[]
    {5191,  152,    -255,   1367,   890,    0},     // wind_exit[]
    {5200,  71,     -255,   5211,   22,     15},    // wind_w_e_x[]
    {5203,  2327,   -255,   5876,   146,    27},    // Icelands_to_ice_dngn[]
    {5207,  2322,   -255,   5876,   146,    27},    // Icelands_to_ice_dngn[]
    {5207,  2323,   -255,   5876,   146,    27},    // Icelands_to_ice_dngn[]
    {5216,  586,    -255,   5305,   533,    6},     // deceit_1_2_x[]
    {5217,  18,     -255,   5204,   74,     17},    // wind_e_w_x[]
    {5217,  586,    -255,   5305,   533,    6},     // deceit_1_2_x[]
    {5218,  586,    -255,   5305,   533,    6},     // deceit_1_2_x[]
    {5218,  761,    -255,   5306,   652,    1},     // deceit_3_4_x[]
    {5219,  761,    -255,   5306,   652,    1},     // deceit_3_4_x[]
    {5242,  1007,   -255,   1176,   2636,   1},     // destard_ent_out_x[]
    {5243,  1007,   -255,   1176,   2636,   1},     // destard_ent_out_x[]
    {5244,  1007,   -255,   1176,   2636,   1},     // destard_ent_out_x[]
    {5304,  532,    -255,   5217,   585,    251},   // deceit_2_1_x[]
    {5304,  650,    -255,   5219,   759,    236},   // deceit_4_3_x[]
    {5305,  532,    -255,   5217,   585,    251},   // deceit_2_1_x[]
    {5305,  650,    -255,   5219,   759,    236},   // deceit_4_3_x[]
    {5306,  532,    -255,   5217,   585,    251},   // deceit_2_1_x[]
    {5306,  650,    -255,   5219,   759,    236},   // deceit_4_3_x[]
    {5340,  1598,   53,     5426,   3120,   -60},   // terathan_out[]
    {5341,  1598,   53,     5427,   3120,   -60},   // terathan_out[]
    {5346,  578,    -255,   5137,   650,    6},     // deceit_2_3_x[]
    {5386,  755,    -255,   5407,   859,    45},    // despise_2_3_x[]
    {5386,  756,    -255,   5407,   859,    45},    // despise_2_3_x[]
    {5386,  757,    -255,   5407,   859,    45},    // despise_2_3_x[]
    {5388,  2027,   -255,   2456,   859,    1},     // covetous_3_4_x[]
    {5389,  2027,   -255,   2456,   859,    1},     // covetous_3_4_x[]
    {5390,  2027,   -255,   2456,   859,    1},     // covetous_3_4_x[]
    {5392,  1959,   -255,   2421,   884,    1},     // covetous_1_2_x[]
    {5393,  1959,   -255,   2421,   884,    1},     // covetous_1_2_x[]
    {5394,  127,    -255,   513,    1560,   1},     // shame_ent_out_x[]
    {5394,  1959,   -255,   2421,   884,    1},     // covetous_1_2_x[]
    {5395,  127,    -255,   513,    1560,   1},     // shame_ent_out_x[]
    {5396,  127,    -255,   513,    1560,   1},     // shame_ent_out_x[]
    {5409,  858,    -255,   5389,   756,    3},     // despise_3_2_x[]
    {5409,  859,    -255,   5389,   756,    3},     // despise_3_2_x[]
    {5409,  860,    -255,   5389,   756,    3},     // despise_3_2_x[]
    {5426,  3123,   -60,    5340,   1599,   41},    // terathan_in[]
    {5427,  3123,   -60,    5341,   1599,   41},    // terathan_in[]
    {5455,  1864,   -255,   2499,   917,    1},     // covetous_ent_out_x[]
    {5456,  1864,   -255,   2499,   917,    1},     // covetous_ent_out_x[]
    {5457,  1864,   -255,   2499,   917,    1},     // covetous_ent_out_x[]
    {5466,  1804,   -255,   5592,   1841,   0},     // covetous_6b_5_x[]
    {5466,  1805,   -255,   5592,   1841,   0},     // covetous_6b_5_x[]
    {5490,  19,     -255,   5515,   11,     0},     // shame_1_2_x[]
    {5504,  569,    -255,   5576,   629,    30},    // despise_1_ent_x[]
    {5504,  570,    -255,   5576,   629,    30},    // despise_1_ent_x[]
    {5504,  571,    -255,   5576,   629,    30},    // despise_1_ent_x[]
    {5507,  162,    -255,   5875,   20,     -5},    // shame_4_5_x[]
    {5513,  176,    -255,   5539,   170,    1},     // shame_4_3_x[]
    {5514,  10,     -255,   5491,   19,     226},   // shame_2_1_x[]
    {5514,  147,    -255,   5604,   101,    1},     // shame_3_2_y[]
    {5521,  672,    -255,   5575,   633,    27},    // despise_2_ent_x[]
    {5521,  673,    -255,   5575,   633,    27},    // despise_2_ent_x[]
    {5521,  674,    -255,   5575,   633,    27},    // despise_2_ent_x[]
    {5538,  170,    -255,   5516,   176,    1},     // shame_3_4_x[]
    {5551,  1805,   -255,   5557,   1824,   0},     // covetous_6a_5_x[]
    {5552,  1805,   -255,   5557,   1824,   0},     // covetous_6a_5_x[]
    {5556,  1827,   -255,   5552,   1807,   0},     // covetous_5_6a_x[]
    {5557,  1827,   -255,   5552,   1807,   0},     // covetous_5_6a_x[]
    {5573,  628,    -255,   5501,   570,    57},    // despise_ent_1_x[]
    {5573,  629,    -255,   5501,   570,    57},    // despise_ent_1_x[]
    {5573,  630,    -255,   5501,   570,    57},    // despise_ent_1_x[]
    {5573,  632,    -255,   5519,   673,    20},    // despise_ent_2_x[]
    {5573,  633,    -255,   5519,   673,    20},    // despise_ent_2_x[]
    {5573,  634,    -255,   5519,   673,    20},    // despise_ent_2_x[]
    {5578,  1926,   -255,   2545,   851,    1},     // covetous_5_4_x[]
    {5579,  1926,   -255,   2545,   851,    1},     // covetous_5_4_x[]
    {5580,  1926,   -255,   2545,   851,    1},     // covetous_5_4_x[]
    {5588,  630,    -255,   1297,   1081,   0},     // despise_ent_out_x[]
    {5588,  631,    -255,   1297,   1081,   0},     // despise_ent_out_x[]
    {5588,  632,    -255,   1297,   1081,   0},     // despise_ent_out_x[]
    {5595,  1840,   -255,   5467,   1805,   5},     // covetous_5_6b_x[]
    {5595,  1841,   -255,   5467,   1805,   5},     // covetous_5_6b_x[]
    {5604,  102,    -255,   5514,   148,    21},    // shame_2_3_x[]
    {5615,  1996,   -255,   2385,   837,    1},     // covetous_3_2_x[]
    {5615,  1997,   -255,   2385,   837,    1},     // covetous_3_2_x[]
    {5615,  1998,   -255,   2385,   837,    1},     // covetous_3_2_x[]
    {5658,  423,    14,     5697,   3659,   3},     // cave_to_T2A_gy[]
    {5686,  386,    2,      2777,   894,    -22},   // vesper_gy_to_cave[]
    {5686,  387,    2,      2777,   895,    -22},   // vesper_gy_to_cave[]
    {5686,  1424,   -255,   2923,   3406,   9},     // des_dung_b_serp_hold[]
    {5687,  1424,   -255,   2923,   3406,   9},     // des_dung_b_serp_hold[]
    {5688,  1424,   -255,   2923,   3406,   9},     // des_dung_b_serp_hold[]
    {5690,  569,    -255,   5825,   596,    0},     // wrong_2_1_x[]
    {5691,  1347,   1,      5691,   1352,   -26},   // lava_dung_room_ent[]
    {5691,  1351,   -26,    5691,   1346,   1},     // lava_dung_room_ext[]
    {5697,  3660,   1,      5658,   424,    0},     // T2A_gy_to_cave[]
    {5698,  662,    -255,   5646,   576,    22},    // wrong_3_2_x[]
    {5701,  1320,   -255,   5787,   1337,   -5},    // lava_dung_lvl_2_1[]
    {5702,  1320,   -255,   5787,   1337,   -5},    // lava_dung_lvl_2_1[]
    {5703,  1320,   -255,   5787,   1337,   -5},    // lava_dung_lvl_2_1[]
    {5704,  145,    -45,    5705,   305,    10},    // Ice_dngn_to_lvl2[]
    {5704,  146,    -45,    5705,   306,    10},    // Ice_dngn_to_lvl2[]
    {5704,  147,    -45,    5705,   307,    10},    // Ice_dngn_to_lvl2[]
    {5706,  305,    15,     5705,   145,    -45},   // lvl2_to_ice_dngn[]
    {5706,  306,    15,     5705,   146,    -45},   // lvl2_to_ice_dngn[]
    {5706,  307,    15,     5705,   147,    -45},   // lvl2_to_ice_dngn[]
    {5706,  304,    15,     5705,   147,    -45},   // lvl2_to_ice_dngn[]
    {5736,  551,    -255,   5703,   639,    0},     // wrong_2_3_x[]
    {5736,  3196,   11,     4545,   852,    31},    // papua_to_moonglow[]
    {5748,  361,    2,      312,    787,    232},   // cave_to_yew[]
    {5749,  361,    2,      313,    787,    232},   // cave_to_yew[]
    {5750,  361,    4,      314,    787,    232},   // cave_to_yew[]
    {5757,  2907,   15,     5789,   1415,   42},    // desert_to_lava_dung[]
    {5757,  2908,   14,     5789,   1416,   39},    // desert_to_lava_dung[]
    {5757,  2909,   15,     5789,   1417,   38},    // desert_to_lava_dung[]
    {5786,  1336,   -255,   5702,   1317,   6},     // lava_dung_lvl_1_2[]
    {5787,  1336,   -255,   5702,   1317,   6},     // lava_dung_lvl_1_2[]
    {5788,  1336,   -255,   5702,   1317,   6},     // lava_dung_lvl_1_2[]
    {5790,  1415,   39,     5758,   2907,   15},    // lava_dung_to_desert[]
    {5790,  1416,   40,     5758,   2908,   15},    // lava_dung_to_desert[]
    {5790,  1417,   38,     5758,   2909,   15},    // lava_dung_to_desert[]
    {5824,  631,    -255,   2042,   216,    15},    // wrong_ent_out_x[]
    {5825,  595,    -255,   5690,   570,    25},    // wrong_1_2_x[]
    {5825,  631,    -255,   2042,   216,    15},    // wrong_ent_out_x[]
    {5826,  631,    -255,   2042,   216,    15},    // wrong_ent_out_x[]
    {5827,  1502,   0,      2922,   3406,   8},     // des_dung_to_serp_hold[]
    {5828,  1502,   -1,     2923,   3406,   9},     // des_dung_to_serp_hold[]
    {5829,  1502,   2,      2924,   3406,   7},     // des_dung_to_serp_hold[]
    {5832,  323,    34,     5849,   237,    -24},   // orc_lvl_to_ice_dngn[]
    {5833,  323,    33,     5850,   237,    -24},   // orc_lvl_to_ice_dngn[]
    {5834,  323,    33,     5851,   237,    -24},   // orc_lvl_to_ice_dngn[]
    {5835,  323,    33,     5852,   237,    -25},   // orc_lvl_to_ice_dngn[]
    {5849,  238,    -25,    5832,   325,    25},    // ice_dngn_to_orc_lvl[]
    {5850,  238,    -25,    5833,   325,    25},    // ice_dngn_to_orc_lvl[]
    {5851,  238,    -25,    5834,   325,    25},    // ice_dngn_to_orc_lvl[]
    {5852,  238,    -25,    5835,   325,    25},    // ice_dngn_to_orc_lvl[]
    {5873,  145,    -255,   5203,   2328,   30},    // ice_dngn_to_Icelands[]
    {5874,  145,    -255,   5203,   2328,   30},    // ice_dngn_to_Icelands[]
    {5875,  19,     -255,   5507,   161,    1},     // shame_5_4_x[]
    {5875,  145,    -255,   5208,   2323,   31},    // ice_dngn_to_Icelands[]
    {5876,  145,    -255,   5208,   2323,   31},    // ice_dngn_to_Icelands[]
    {5877,  145,    -255,   5203,   2328,   30},    // ice_dngn_to_Icelands[]
    {5878,  145,    -255,   5203,   2328,   30},    // ice_dngn_to_Icelands[]
    {5882,  241,    -255,   1998,   81,     5},     // Ice_dngn_to_N_Wrong[]
    {5882,  242,    -255,   1998,   81,     5},     // Ice_dngn_to_N_Wrong[]
    {5882,  243,    -255,   1998,   81,     5},     // Ice_dngn_to_N_Wrong[]
    {5899,  1410,   42,     1628,   3321,   0},     // cave_to_trinsic[]
    {5900,  1410,   40,     1629,   3321,   0},     // cave_to_trinsic[]
    {5904,  18,     -255,   4722,   3815,   1},     // hythloth_ent_out_x[]
    {5905,  18,     -255,   4722,   3815,   1},     // hythloth_ent_out_x[]
    {5905,  97,     -255,   5976,   169,    1},     // hythloth_1_2_x[]
    {5906,  18,     -255,   4722,   3815,   1},     // hythloth_ent_out_x[]
    {5906,  4069,   -255,   2495,   3576,   5},     // white_circle_to_s.isle[]
    {5917,  1411,   -27,    5963,   1408,   53},    // cave_to_newbie_lvl[]
    {5917,  1412,   -27,    5963,   1409,   53},    // cave_to_newbie_lvl[]
    {5921,  168,    -255,   6083,   145,    240},   // hythloth_2_3_x[]
    {5921,  169,    -255,   6083,   145,    240},   // hythloth_2_3_x[]
    {5921,  170,    -255,   6083,   145,    240},   // hythloth_2_3_x[]
    {5962,  1408,   56,     5916,   1411,   -25},   // newbie_lvl_to_cave[]
    {5962,  1409,   56,     5916,   1412,   -25},   // newbie_lvl_to_cave[]
    {5973,  169,    -255,   5905,   99,     0},     // hythloth_2_1_x[]
    {6005,  1378,   0,      5151,   4062,   37},    // delucia_to_newbie_lvl[]
    {6005,  1379,   2,      5151,   4063,   37},    // delucia_to_newbie_lvl[]
    {6024,  1344,   -26,    5138,   3664,   31},    // newbie_lvl_to_W.T2A[]
    {6024,  1345,   -25,    5138,   3665,   32},    // newbie_lvl_to_W.T2A[]
    {6024,  1346,   -25,    5138,   3666,   32},    // newbie_lvl_to_W.T2A[]
    {6032,  1499,   37,     1490,   1640,   24},    // Britain_sewer_x[] to britain
    {6032,  1501,   37,     1490,   1640,   24},    // Britain_sewer_x[] to britain
    {6040,  192,    -255,   6059,   89,     24},    // hythloth_3_4_x[]
    {6040,  193,    -255,   6059,   89,     24},    // hythloth_3_4_x[]
    {6040,  194,    -255,   6059,   89,     24},    // hythloth_3_4_x[]
    {6058,  88,     -255,   6039,   193,    17},    // hythloth_4_3_x[]
    {6058,  89,     -255,   6039,   193,    17},    // hythloth_4_3_x[]
    {6058,  90,     -255,   6039,   193,    17},    // hythloth_4_3_x[]
    {6074,  3332,   4,      6125,   1409,   15},    // hoppers_bog to cave[]
    {6075,  3332,   4,      6126,   1409,   15},    // hoppers_bog to cave[]
    {6082,  144,    -255,   5920,   169,    20},    // hythloth_3_2_x[]
    {6082,  145,    -255,   5920,   169,    20},    // hythloth_3_2_x[]
    {6082,  146,    -255,   5920,   169,    20},    // hythloth_3_2_x[]
    {6086,  3675,   15,     2399,   199,    1},     // east_t2a_to_N._minoc[]
    {6086,  3676,   16,     2400,   199,    1},     // east_t2a_to_N._minoc[]
    {6126,  1410,   15,     6074,   3333,   2},     // cave to hoppers_bog[]
    {6127,  1410,   15,     6075,   3333,   2},     // cave to hoppers_bog[]
    {6137,  1409,   2,      6140,   1432,   5},     // cave to sewer[]
    {6138,  1409,   2,      6141,   1432,   5},     // cave to sewer[]
    {6140,  1431,   5,      6137,   1408,   2},     // sewer to cave[]
    {6141,  1431,   5,      6138,   1408,   2},     // sewer to cave[]
	{1361, 883, 0,		5166, 245, 15}		// Wind Entrance
};

function CreateTeleporters()
  var totaldestroyed := 0;
  var newteleporters := 0;

  var fromx, fromy, fromz;
  var tox, toy, toz, teleporter;
  var nbrofteleporters := 0;
  var checker := 0;
  foreach tele in teleporters
    fromx := tele[1];
    fromy := tele[2];
    fromz := tele[3];
    if(fromz == -255)
      fromz := GetWorldHeight(fromx, fromy);
    endif

    foreach thing in ListItemsNearLocationOfType( fromx, fromy, LIST_IGNORE_Z, 50, "systemteleporter", realm := _DEFAULT_REALM )
        if(thing)
		totaldestroyed := totaldestroyed + 1;
		DestroyItem(thing);
	endif
    endforeach

    if(checker == 0)
      tox := tele[4];
      toy := tele[5];
      toz := tele[6];
      teleporter := CreateItemAtLocation( fromx, fromy, fromz, "systemteleporter", amount := 1, realm := _DEFAULT_REALM );
      if(teleporter)
        SetObjProperty(teleporter, "DestX", tox);
        SetObjProperty(teleporter, "DestY", toy);
        SetObjProperty(teleporter, "DestZ", toz);
        nbrofteleporters := nbrofteleporters + 1;
      endif
    endif
    checker := 0;
  endforeach
  var i;
  var cfg := ReadConfigFile("teleporters");
  var maxint := GetConfigMaxIntKey(cfg);
  for(i:=1; i<=maxint; i:=i+1)
    fromx := cfg[i].fromx;
    fromy := cfg[i].fromy;
    fromz := GetMapInfo(fromx, fromy).z;

    foreach thing in ListItemsNearLocationOfType( fromx, fromy, LIST_IGNORE_Z, 50, "systemteleporter", realm := _DEFAULT_REALM )
        if(thing)
		totaldestroyed := totaldestroyed + 1;
		DestroyItem(thing);
	endif
    endforeach

    if(checker == 0)
      tox := cfg[i].tox;
      toy := cfg[i].toy;
      toz := GetMapInfo(tox, toy).z;
      teleporter := CreateItemAtLocation( fromx, fromy, fromz, "systemteleporter", amount := 1, realm := _DEFAULT_REALM );
      if(teleporter)
	newteleporters := newteleporters + 1;
        SetObjProperty(teleporter, "DestX", tox);
        SetObjProperty(teleporter, "DestY", toy);
        SetObjProperty(teleporter, "DestZ", toz);
      endif
    endif
    checker := 0;
  endfor
  SetGlobalProperty("SystemTeleportersCreated", 1);
  syslog("Teleporters.");
  syslog("Destroyed (" + totaldestroyed + ")");
  syslog("Created Teleporters.");
endfunction