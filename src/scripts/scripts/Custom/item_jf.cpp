/*
_______        _         ______
|__   __|      | |       |  ____|
| | __ _ ___| |_ _   _| |__   _ __ ___  _   _
| |/ _` / __| __| | | |  __| | '_ ` _ \| | | |
| | (_| \__ \ |_| |_| | |____| | | | | | |_| |
|_|\__,_|___/\__|\__, |______|_| |_| |_|\__,_|
__/ |
|___/

Script Made By Sinistah
Special Thanks To LilleCarl For The Code Snippet

Legend
------
item_id = the item id of the item ur using.
max_lvl = the max lvl the script will allow players to use the item.
lvl = how many levels the item will grant upon used
*/
#include "Player.h"
#include "DBCStructure.h"
#include "precompiled.h"
#include "Language.h"
#include "Chat.h"


bool Item_jf(Player* player, Item* item, const SpellCastTargets &)
{
	if (player->HasItemCount(40018, 1, false))
	{
		player->DestroyItemCount(40018, 1, true);
		player->Modifyjifen((int32)1);
		uint32 jifen = 1;
		player->GetSession()->SendNotification(HELLGROUND_STRING_3, jifen);
	}
	return true;
};


void AddSC_Item_jf()
{
	Script* pNewScript;

	pNewScript = new Script;
	pNewScript->Name = "item_jf";
	pNewScript->pItemUse = Item_jf;
	pNewScript->RegisterSelf();
}