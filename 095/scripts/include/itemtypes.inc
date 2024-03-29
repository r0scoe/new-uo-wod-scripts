////////////////////////////////////////////////////////////////////////////////
//													//
// 	This Include contains the following Functions.					//
//													//
// 	IsDoor(door) 		IsHair(hair) 		IsFacialHair(beard)	//
// 	IsJewelry(jewelry) 	IsWeapon(weapon)	 	IsWoodenWeapon(weapon)	//
// 	IsMetalWeapon(weapon) 	IsBow(weapon) 		IsArmor(armor)		//
//	IsLeatherArmor(armor) 	IsMetalArmor(armor)	IsShield(shield)		//
//	IsMetalShield(shield) 	IsWoodenShield(Shield)	IsClothing(clothes)	//
//													//
//													//
//													//
////////////////////////////////////////////////////////////////////////////////

use uo;
use os;
include "include/objtype";

function IsDoor (byref item)
	if (item.isa (POLCLASS_DOOR))
		return 1;
	endif
	return 0;
endfunction

function IsHair (byref hair)

	case (hair.objtype)
		0x203b:	//Short Hair
		0x203c:	//Long Hair 
		0x203d:	//Pony Tail
		0x2044:	//MoHawk
		0x2045:	//Page Boy
		0x2046:	//Buns
		0x2047:	//Afro
		0x2048:	//Receding
		0x2049:	//Pigtails
		0x204a:	//Krisna
		return 1;
		default: return 0;
	endcase

endfunction

function IsFacialHair (byref beard)

	case (beard.objtype)
		0x203e:	//Long Beard
		0x203f:	//Short Beard
		0x2040:	//Goatee
		0x2041:	//Mustache
		0x204b:	//Short beard w/mustache
		0x204c:	//Long beard w/mustache
		0x204d:	//Vandyke
		return 1;
	endcase
		return 0;
endfunction

function IsJewelry (byref jewelry)

	if (jewelry.graphic >= 0x1085 and jewelry.graphic <= 0x108A)
		return 1;
	elseif (jewelry.graphic >= 0x1F05 and jewelry.graphic <= 0x1F0A)
		return 1;
	endif
		return 0;
endfunction

function IsWeapon (byref weapon)

	if (weapon.graphic >= 0x0DF0 and weapon.graphic <= 0x0DF5)
		return 1;
	elseif (weapon.graphic >= 0x0E81 and weapon.graphic <= 0x0E8A and weapon.graphic != 0x0E83)
		return 1;
	elseif (weapon.graphic >= 0x0EC2 and weapon.graphic <= 0x0EC5)
		return 1;
	elseif (weapon.graphic >= 0x0F43 and weapon.graphic <= 0x0F52)
		return 1;
	elseif (weapon.graphic >= 0x0F5C and weapon.graphic <= 0x0F63)
		return 1;
	elseif (weapon.graphic >= 0x0FB4 and weapon.graphic <= 0x0FB5)
		return 1;
	elseif (weapon.graphic >= 0x13AF and weapon.graphic <= 0x13BA)
		return 1;
	elseif (weapon.graphic >= 0x13E3 and weapon.graphic <= 0x13E4)
		return 1;
	elseif (weapon.graphic >= 0x13F4 and weapon.graphic <= 0x1407)
		return 1;
	elseif (weapon.graphic >= 0x1438 and weapon.graphic <= 0x1443)
		return 1;
	elseif (weapon.graphic >= 0x26BA and weapon.graphic <= 0x26CF)
		return 1;
	endif
		return 0;
endfunction

function IsWoodenWeapon (byref weapon)

	if (weapon.graphic >= 0x0DF0 and weapon.graphic <= 0x0DF1)
		return 1;
	elseif (weapon.graphic >= 0x0E81 and weapon.graphic <= 0x0E82)
		return 1;
	elseif (weapon.graphic >= 0x0E89 and weapon.graphic <= 0x0E8A)
		return 1;
	elseif (weapon.graphic >= 0x0F4F and weapon.graphic <= 0x0F50)
		return 1;
	elseif (weapon.graphic >= 0x13B1 and weapon.graphic <= 0x13B4)
		return 1;
	elseif (weapon.graphic >= 0x13F4 and weapon.graphic <= 0x13F5)
		return 1;
	elseif (weapon.graphic >= 0x13F8 and weapon.graphic <= 0x13F9)
		return 1;
	elseif (weapon.graphic >= 0x13FC and weapon.graphic <= 0x13FD)
		return 1;
	elseif (weapon.graphic == 0x7068 or weapon.graphic == 0x706a)
		return 1;
	elseif (weapon.graphic == 0x7065)
		return 1;
	elseif (weapon.graphic == 0x26C2 or weapon.graphic == 0x26C3)
		return 1;
	elseif (weapon.graphic == 0x26CC or weapon.graphic == 0x26CD)
		return 1;
	endif
		return 0;
endfunction

function IsMetalWeapon (byref weapon)

	if (weapon.graphic >= 0x0DF2 and weapon.graphic <= 0x0DF5)
		return 1;
	elseif (weapon.graphic >= 0x0E85 and weapon.graphic <= 0x0E88)
		return 1;
	elseif (weapon.graphic >= 0x0F43 and weapon.graphic <= 0x0F4E)
		return 1;
	elseif (weapon.graphic >= 0x0F51 and weapon.graphic <= 0x0F52)
		return 1;
	elseif (weapon.graphic >= 0x0F5C and weapon.graphic <= 0x0F63)
		return 1;
	elseif (weapon.graphic >= 0x0FB4 and weapon.graphic <= 0x0FB5)
		return 1;
	elseif (weapon.graphic >= 0x13AF and weapon.graphic <= 0x13B0)
		return 1;
	elseif (weapon.graphic >= 0x13B5 and weapon.graphic <= 0x13BA)
		return 1;
	elseif (weapon.graphic >= 0x13E3 and weapon.graphic <= 0x13E4)
		return 1;
	elseif (weapon.graphic >= 0x13F6 and weapon.graphic <= 0x13F7)
		return 1;
	elseif (weapon.graphic >= 0x13FA and weapon.graphic <= 0x13FB)
		return 1;
	elseif (weapon.graphic >= 0x13FE and weapon.graphic <= 0x1407)
		return 1;
	elseif (weapon.graphic >= 0x1438 and weapon.graphic <= 0x1443)
		return 1;
	elseif (weapon.graphic >= 0x26BA and weapon.graphic <= 0x26C1)
		return 1;
	elseif (weapon.graphic >= 0x26C4 and weapon.graphic <= 0x26CB)
		return 1;
	endif
		return 0;
endfunction

function IsBow (byref weapon)
	if (weapon.graphic >= 0x0F4F and weapon.graphic  <= 0x0F50)
		return 1;
	elseif (weapon.graphic >= 0x13B1 and weapon.graphic <= 0x13B2)
		return 1;
	elseif (weapon.graphic >= 0x13FC and weapon.graphic <= 0x13FD)
		return 1;
	elseif (weapon.graphic >= 0x26C2 and weapon.graphic <= 0x26C3)
		return 1;
	elseif (weapon.graphic >= 0x26CC and weapon.graphic <= 0x26CD)
		return 1;
	elseif (weapon.graphic >= 0x2D2A and weapon.graphic <= 0x2D2B)
		return 1;
	elseif (weapon.graphic >= 0x2D1E and weapon.graphic <= 0x2D1F)
		return 1;
	elseif (weapon.graphic == 0x27A5)
		return 1;
	elseif (weapon.graphic == 0x27F0)
		return 1;
	endif
		return 0;
endfunction

function IsArmor (byref armor)

	if (armor.graphic == 0x13BB)
		return 1;
	elseif (armor.graphic >= 0x13BE and armor.graphic <= 0x13C0)
		return 1;
	elseif (armor.graphic >= 0x13C3 and armor.graphic <= 0x13C7)
		return 1;
	elseif (armor.graphic >= 0x13CB and armor.graphic <= 0x13CE)
		return 1;
	elseif (armor.graphic >= 0x13D2 and armor.graphic <= 0x13D6)
		return 1;
	elseif (armor.graphic >= 0x13DA and armor.graphic <= 0x13DD)
		return 1;
	elseif (armor.graphic >= 0x13E1 and armor.graphic <= 0x13E2)
		return 1;
	elseif (armor.graphic >= 0x13EB and armor.graphic <= 0x13F2)
		return 1;
	elseif (armor.graphic >= 0x1408 and armor.graphic <= 0x141A)
		return 1;
	elseif (armor.graphic >= 0x144E and armor.graphic <= 0x1457)
		return 1;
	elseif (armor.graphic >= 0x1C00 and armor.graphic <= 0x1C0D)
		return 1;
	elseif (armor.graphic >= 0x1F0B and armor.graphic <= 0x1F0C)
		return 1;
	endif
		return 0;
endfunction

function IsLeatherArmor (byref armor)

	if (armor.graphic >= 0x13C5 and armor.graphic <= 0x13C7)
		return 1;
	elseif (armor.graphic >= 0x13CB and armor.graphic <= 0x13CE)
		return 1;
	elseif (armor.graphic >= 0x13D2 and armor.graphic <= 0x13D6)
		return 1;
	elseif (armor.graphic >= 0x13DA and armor.graphic <= 0x13DD)
		return 1;
	elseif (armor.graphic >= 0x13E1 and armor.graphic <= 0x13E2)
		return 1;
	elseif (armor.graphic >= 0x144E and armor.graphic <= 0x1457)
		return 1;
	elseif (armor.graphic >= 0x1C00 and armor.graphic <= 0x1C03)
		return 1;
	elseif (armor.graphic >= 0x1C06 and armor.graphic <= 0x1C0D)
		return 1;
	elseif (armor.graphic == 0x1DB9 or armor.graphic == 0x1DBA)
		return 1;
	elseif (armor.graphic == 0x708b)
		return 1;
	endif
		return 0;
endfunction

function IsMetalArmor (byref armor)
	if (armor.graphic == 0x13BB)
		return 1;
	elseif (armor.graphic >= 0x13BE and armor.graphic <= 0x13C0)
		return 1;
	elseif (armor.graphic >= 0x13C3 and armor.graphic <= 0x13C4)
		return 1;
	elseif (armor.graphic >= 0x13EB and armor.graphic <= 0x13F2)
		return 1;
	elseif (armor.graphic >= 0x1408 and armor.graphic <= 0x141A)
		return 1;
	elseif (armor.graphic >= 0x1c04 and armor.graphic <= 0x1c05)
		return 1;
	elseif (armor.objtype == UOBJ_CHAINMAIL_GLOVES and armor.graphic == 0x13c6)
		return 1;
	elseif (armor.objtype == UOBJ_RINGMAIL_COIF and armor.graphic == 0x13bb)
		return 1;
	endif
	return 0;
endfunction

function IsShield (byref shield)

	if (shield.graphic >= 0x1B72 and shield.graphic <= 0x1B7B)
		return 1;
	elseif (shield.graphic >= 0x1BC3 and shield.graphic <= 0x1BC5)
		return 1;
	endif
		return 0;
endfunction

function IsMetalShield (byref shield)

	if (shield.graphic >= 0x1B72 and shield.graphic <= 0x1B77)
		return 1;
	elseif (shield.graphic == 0x1B7B)
		return 1;
	elseif (shield.graphic >= 0x1BC3 and shield.graphic <= 0x1BC5)
		return 1;
	endif
		return 0;
endfunction

function IsWoodenShield (byref shield)
	case (shield.graphic)
		UOBJ_WOODEN_SHIELD:
		UOBJ_WOODEN_KITESHIELD:
		UOBJ_WOODEN_KITESHIELD2:
			return 1;
	endcase;
	return 0;
endfunction

function IsClothing (byref clothes)
	//special handling for chainmail gloves
	if (clothes.graphic == 0x13c6)
		if (clothes.objtype == UOBJ_CHAINMAIL_GLOVES)
			return 0;
		endif
		return 1; 
	elseif (clothes.graphic >= 0x1515 and clothes.graphic <= 0x1518)
 		return 1;
	elseif (clothes.graphic >= 0x152E and clothes.graphic <= 0x1531)
 		return 1;
	elseif (clothes.graphic >= 0x1537 and clothes.graphic <= 0x1544)
		return 1;
	elseif (clothes.graphic >= 0x1708 and clothes.graphic <= 0x171C)
		return 1;
	elseif (clothes.graphic >= 0x1EFD and clothes.graphic <= 0x1F04)
		return 1;
	elseif (clothes.graphic >= 0x1F7B and clothes.graphic <= 0x1F7C)
		return 1;
	elseif (clothes.graphic >= 0x1F9F and clothes.graphic <= 0x1FA2)
		return 1;
	elseif (clothes.graphic >= 0x1FFD and clothes.graphic <= 0x1FFE)
		return 1;
	elseif (clothes.graphic >= 0x204E and clothes.graphic <= 0x204F)
		return 1;
	endif
		return 0;
endfunction




///////////////////
//  Determines if the item passed is a hat
///////////////////

function IsAHat (item)
	case (item.graphic)
		0x153F:
		0x1543:
		0x1713:
		0x1714:
		0x1715:
		0x1716:
		0x1717:
		0x1718:
		0x1719:
		0x171A:
		0x171B:
		0x171C:
		UOBJ_ORC_MASK:
		UOBJ_ORC_MASK2:
		UOBJ_BEAR_MASK:
		UOBJ_BEAR_MASK2:
		UOBJ_DEER_MASK:
		UOBJ_DEER_MASK2:
		UOBJ_TRIBAL_MASK:
		UOBJ_TRIBAL_MASK2:
		UOBJ_TRIBAL_MASK3:
		UOBJ_TRIBAL_MASK4:
			return 1;
	endcase

	return 0;
endfunction




///////////////////
//  Determines if the item passed is a mask
///////////////////

function IsAMask (item)
	case (item.graphic)
		UOBJ_ORC_MASK:
		UOBJ_ORC_MASK2:
		UOBJ_BEAR_MASK:
		UOBJ_BEAR_MASK2:
		UOBJ_DEER_MASK:
		UOBJ_DEER_MASK2:
		UOBJ_TRIBAL_MASK:
		UOBJ_TRIBAL_MASK2:
		UOBJ_TRIBAL_MASK3:
		UOBJ_TRIBAL_MASK4:
			return 1;
	endcase

	return 0;
endfunction

function IsMusicalInstrument (byref item)

	case(item.objtype)
		0x7067:    //FLUTE	
		0x0e9d:    //TAMBORINE
		0x0e9e:    //TAMBORINE2
		0x0eb3:    //LUTE
		0x0eb4:    //LUTE2	
		0x0e9c:    //DRUM
		0x0eb2:    //HARP	
		0x0eb1:    //STANDING HARP
		return 1;
		default: return 0;
	endcase
endfunction

///////////////////////////Needs work////////////////////////
/////////////////////////////////////////////////////////////
//////////////////////Finish me NOW!/////////////////////////
/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
function IsReagent (byref item)

	case(item.objtype)
////////////////// 8 Original Reagents ///////////////
		0x0F7A:	//BLACK PEARL
		0x0F7B:	//BLOOD MOSS
		0x0F84:	//GARLIC
		0x0F85:	//GINSENG
		0x0F86:	//MANDRAKE ROOT
		0x0F88:	//NIGHTSHADE
		0x0F8C:	//SULFUROUS ASH
		0x0F8D:	//SPIDER SILK

//////////////////// Newer Reagents //////////////////
		0x0F78:	//BATWING
		0x0f79:	//BLACKMOOR
		0x0F7C:	//BLOODSPAWN
		0x0F7E:	//BONE
		0x0F7F:	//BRIMSTONE
		0x0F80:	//DAEMON BONE
		0x0F90:	//DEAD WOOD
		0x0F82:	//DRAGONS BLOOD
		0x0F83:	//EXECUTIONERS CAP
		0x0F81:	//FERTILE DIRT
		0x0F8E:	//SERPENT SCALE
		0x0F7D:	//VIAL OF BLOOD
		0x0F8F:	//VOLCANIC ASH
		0x0F91:	//WYRMS HEART
		return 1;
		default: return 0;
	endcase
endfunction




///////////////////
//  Determines if the item passed is a type of metal ingot
///////////////////

function IsIngot (byref use_on)
	case (use_on)
		UOBJ_IRON_INGOT:		return 1;
		UOBJ_BRONZE_INGOT:		return 1;
		UOBJ_DULLCOPPER_INGOT:	return 1;
		UOBJ_COPPER_INGOT:		return 1;
		UOBJ_ONYX_INGOT:		return 1;
		UOBJ_PYRITE_INGOT:		return 1;
		UOBJ_MALACHITE_INGOT:	return 1;
		UOBJ_AZURITE_INGOT:		return 1;
		UOBJ_BLUESTEEL_INGOT:	return 1;
		UOBJ_RUBYSTEEL_INGOT:	return 1;
		default:				return 0;
	endcase;
	return 0;
endfunction




///////////////////
//  Figures out if the item is a type of gem
///////////////////

function IsGem (byref use_on)
	case (use_on)
		UOBJ_GEM_AMBER:		return 1;
		UOBJ_GEM_STAR_SAPPHIRE:	return 1;
		UOBJ_GEM_EMERALD:		return 1;
		UOBJ_GEM_SAPPHIRE:		return 1;
		UOBJ_GEM_RUBY:			return 1;
		UOBJ_GEM_CITRINE:		return 1;
		UOBJ_GEM_AMETHYST:		return 1;
		UOBJ_GEM_TOURMALINE:	return 1;
		UOBJ_GEM_DIAMOND:		return 1;
		default:				return 0;
	endcase;
	return 0;
endfunction




///////////////////
//  determines if the item is stackable
///////////////////

function IsStackableItem (byref item)
	if (item.amount > 1)
		return 1;
	endif

	// some common stackable
	case (item.objtype)
		UOBJ_GOLD_COIN:
		UOBJ_BATWING:
		UOBJ_BLACKMOOR:
		UOBJ_BLACK_PEARL:
		UOBJ_BLOOD_MOSS:
		UOBJ_BLOODSPAWN:
		UOBJ_VIAL_OF_BLOOD:
		UOBJ_BONE:
		UOBJ_BRIMSTONE:
		UOBJ_DAEMON_BONE:
		UOBJ_FERTILE_DIRT:
		UOBJ_DRAGONS_BLOOD:
		UOBJ_EXECUTIONERS_CAP:
		UOBJ_GARLIC:
		UOBJ_GINSENG:
		UOBJ_MANDRAKE_ROOT:
		UOBJ_EYE_OF_NEWT:
		UOBJ_NIGHTSHADE:
		UOBJ_OBSIDIAN:
		UOBJ_PIG_IRON:
		UOBJ_PUMICE:
		UOBJ_SULFUROUS_ASH:
		UOBJ_SPIDER_SILK:
		UOBJ_SERPENT_SCALE:
		UOBJ_VOLCANIC_ASH:
		UOBJ_DEAD_WOOD:
		UOBJ_WYRMS_HEART:
		UOBJ_GEM_AMBER:
		UOBJ_GEM_STAR_SAPPHIRE:
		UOBJ_GEM_EMERALD:
		UOBJ_GEM_SAPPHIRE:
		UOBJ_GEM_RUBY:
		UOBJ_GEM_CITRINE:
		UOBJ_GEM_AMETHYST:
		UOBJ_GEM_TOURMALINE:
		UOBJ_GEM_DIAMOND:
		UOBJ_FEATHER:
		UOBJ_LIGHT_HEAL_POTION:
		UOBJ_HEAL_POTION:
		UOBJ_GREATER_HEAL_POTION:
		UOBJ_LESSER_POISON_POTION:
		UOBJ_POISON_POTION:
		UOBJ_GREATER_POISON_POTION:
		UOBJ_DEADLY_POISON_POTION:
		UOBJ_LESSER_EXPLOSION_POTION:
		UOBJ_EXPLOSION_POTION:
		UOBJ_GREATER_EXPLOSION_POTION:
		UOBJ_LESSER_AGILITY_POTION:
		UOBJ_AGILITY_POTION:
		UOBJ_GREATER_AGILITY_POTION:
		UOBJ_REFRESH_POTION:
		UOBJ_FULL_REFRESH_POTION:
		UOBJ_LESSER_STRENGTH_POTION:
		UOBJ_STRENGTH_POTION:
		UOBJ_GREATER_STRENGTH_POTION:
		UOBJ_LESSER_CURE_POTION:
		UOBJ_CURE_POTION:
		UOBJ_GREATER_CURE_POTION:
		UOBJ_NIGHTSIGHT_POTION:
		UOBJ_EGG:
          UOBJ_HIDE:
          UOBJ_BROWN_HIDE:
          UOBJ_RED_HIDE:
          UOBJ_BLUE_HIDE:
          UOBJ_GREEN_HIDE:
		UOBJ_SILVER_HIDE:
		UOBJ_BANDAGE:
		UOBJ_ARROW:
		UOBJ_BOLT:
		UOBJ_FIRE_ARROW:
		UOBJ_REAPER_HEARTWOOD:
		UOBJ_ENT_HEARTWOOD:
		UOBJ_ENCHANTED_BONE:
          UOBJ_RAW_RIB:
          UOBJ_RAW_FISHSTEAK:
          UOBJ_RAW_BIRD:
          UOBJ_RAW_HAM:
          UOBJ_BACON_SLAB:
          UOBJ_RAW_SAUSAGE:
          UOBJ_HONEY:
          UOBJ_CARROT:
          UOBJ_APPLE:
          UOBJ_PEACH:
          UOBJ_LEMON:
          UOBJ_LIME:
          UOBJ_BANANA:
          UOBJ_PEAR:
          UOBJ_GRAPES:
          UOBJ_DATES:
          UOBJ_PUMPKIN:
          UOBJ_LETTUCE:
          UOBJ_CABBAGE:
          UOBJ_ONION:
          UOBJ_TURNIP:
          UOBJ_COCONUT:
          UOBJ_RAW_CHICKEN_LEG:
          UOBJ_RAW_LEG_OF_LAMB:
			return 1;
	endcase
	
	set_critical(1);
	var globalstackdict := GetGlobalProperty ("globalstackdict");
	if (!globalstackdict)
		globalstackdict := dictionary;
	endif
	
	if (globalstackdict.exists(item.objtype))
		set_critical(0);
		return globalstackdict[item.objtype];
	endif

	//Already went through the common stackable items and still haven't been able to figure out if its stackable or not, so
	//we'll see if we can create 2 of the item as a last resort.
	var newitem := CreateItemAtLocation (0, 0, 0, item.objtype, 2);
	if (newitem)
		DestroyItem (newitem);
		globalstackdict.insert (item.objtype, 1);
		SetGlobalProperty ("globalstackdict", globalstackdict);
		set_critical(0);
		return 1;
	endif
	globalstackdict.insert (item.objtype, 0);
	SetGlobalProperty ("globalstackdict", globalstackdict);
	set_critical(0);
	return 0;
endfunction

function IsLeatherBoots (byref item)
	if (item.graphic >= 0x170b and item.graphic <= 0x1712)
		return 1;
	endif
	return 0;
endfunction

function IsOneHandedWeapon (byref item)
	if (!item.isa (POLCLASS_WEAPON))
		return 0;
	endif
	var weaponcfgfile := ReadConfigFile (":*:itemdesc");
	var weapon_elem := FindConfigElem (weaponcfgfile, item.objtype);
	if (weapon_elem)
		if (weapon_elem.TwoHanded)
			return 0;
		else
			return 1;
		endif
	endif
	return 0;
endfunction

function IsTwoHandedWeapon (byref item)
	if (!item.isa (POLCLASS_WEAPON))
		return 0;
	endif
	var weaponcfgfile := ReadConfigFile (":*:itemdesc");
	var weapon_elem := FindConfigElem (weaponcfgfile, item.objtype);
	if (weapon_elem)
		if (weapon_elem.TwoHanded)
			return 1;
		endif
	endif
	return 0;
endfunction

function IsAKey (byref item)
	case (item.objtype)
		0x100E:
		0x100F:
		0x1010:
		0x1012:
		0x1013:
			return 1;
	endcase
	return 0;
endfunction