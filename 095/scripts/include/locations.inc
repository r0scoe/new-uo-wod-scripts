Const TOWN_BRITAIN			:= 1;
Const TOWN_COVE			:= 2;
Const TOWN_JHELOM			:= 3;
Const TOWN_MAGINCIA			:= 4;
Const TOWN_MINOC			:= 5;
Const TOWN_MOONGLOW			:= 6;
Const TOWN_NUJELM			:= 7;
Const TOWN_OCLLO			:= 8;
Const TOWN_SERPENTS_HOLD		:= 9;
Const TOWN_SKARA_BRAE		:= 10;
Const TOWN_TRINSIC			:= 11;
Const TOWN_VESPER			:= 12;
Const TOWN_YEW				:= 13;

Const TOWN_START			:= 1;
Const TOWN_END				:= 13;




///////////////////
//  Figures out out if a location is within a town, and if so, what town
///////////////////

function FindTownFromLocation (x, y)
	if (x >= 1275 and x <= 1720 and y >= 1500 and y <= 1800)
		return TOWN_BRITAIN;
	elseif (x >= 2200 and x <= 2300 and y >= 1100 and y <= 1250)
		return TOWN_COVE;
	elseif (x >= 1050 and x <= 1525 and y >= 3350 and y <= 4050)
		return TOWN_JHELOM;
	elseif (x >= 3525 and x <= 3825 and y >= 2000 and y <= 2300)
		return TOWN_MAGINCIA;
	elseif (x >= 2400 and x <= 2650 and y >= 250 and y <= 700)
		return TOWN_MINOC;
	elseif (x >= 4250 and x <= 4725 and y >= 775 and y <= 1525)
		return TOWN_MOONGLOW;
	elseif (x >= 2475 and x <= 3825 and y >= 1025 and y <= 1425)
		return TOWN_NUJELM;
	elseif (x >= 3350 and x <= 3800 and y >= 2350 and y <= 2950)
		return TOWN_OCLLO;
	elseif (x >= 2750 and x <= 3075 and y >= 3325 and y <= 3650)
		return TOWN_SERPENTS_HOLD;
	elseif (x >= 530 and x <= 680 and y >= 2100 and y <= 2290)
		return TOWN_SKARA_BRAE;
	elseif (x >= 1800 and x <= 2150 and y >= 2625 and y <= 2950)
		return TOWN_TRINSIC;
	elseif (x >= 2750 and x <= 3050 and y >= 600 and y <= 1020)
		return TOWN_VESPER;
	elseif (x >= 250 and x <= 750 and y >= 750 and y <= 1250)
		return TOWN_YEW;
	endif
	return 0;
endfunction




///////////////////
//  Finds the town that a given NPC is located in
///////////////////

function FindMyTown (npc)
	return FindTownFromLocation (npc.x, npc.y);
endfunction




///////////////////
//  Determines the name of a town from its number
///////////////////

function GetNameOfTown (townnum)
	case (townnum)
		TOWN_BRITAIN:
			return "Britain";
		TOWN_COVE:
			return "Cove";
		TOWN_JHELOM:
			return "Jhelom";
		TOWN_MAGINCIA:
			return "Magincia";
		TOWN_MINOC:
			return "Minoc";
		TOWN_MOONGLOW:
			return "Moonglow";
		TOWN_NUJELM:
			return "Nujel'M";
		TOWN_OCLLO:
			return "Ocllo";
		TOWN_SERPENTS_HOLD:
			return "Serpent's Hold";
		TOWN_SKARA_BRAE:
			return "Skara Brae";
		TOWN_TRINSIC:
			return "Trinsic";
		TOWN_VESPER:
			return "Vesper";
		TOWN_YEW:
			return "Yew";
		default:
			return "";
	endcase
	return "";
endfunction



///////////////////
//  Returns a description of the direction from the character to the given destination
///////////////////

function GetDirection (character, x, y)
	var ns_desc := "";
	var ns_diff := 0;
	if (y < character.y)
        	ns_desc := "north";
        	ns_diff := character.y - y;
	elseif  (y > character.y)
		ns_desc := "south";
        	ns_diff := y - character.y;
	endif

	var ew_desc := "";
	var ew_diff := 0;
	if (x < character.x)
		ew_desc := "west";
		ew_diff := character.x - x;
	elseif  (x > character.x)
		ew_desc := "east";
		ew_diff := x - character.x;
	endif
	
	//Adjustments for the diagonals...
	if (ns_desc != "" and ew_desc != "")
		if (ns_diff > ew_diff * 2)
			ew_desc := "";
		elseif (ew_diff > ns_diff * 2)
			ns_desc := "";
		endif
	endif

	var total_desc := "";
	if (ns_desc == "" and ew_desc == "")
		total_desc := "nearby";
	else 
		total_desc :=ns_desc + ew_desc;
	endif

	return total_desc;
endfunction



