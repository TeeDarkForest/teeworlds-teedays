/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#ifndef GAME_SERVER_ENTITIES_PICKUP_H
#define GAME_SERVER_ENTITIES_PICKUP_H

#include <game/server/entity.h>

const int PickupPhysSize = 14;

class CPickAmmo : public CEntity
{
public:
	CPickAmmo(CGameWorld *pGameWorld, int Type, vec2 Pos, int Num=1);
	~CPickAmmo();

	virtual void Reset();
	virtual void Tick();
	virtual void Snap(int SnappingClient);

private:
	int m_Type;
	int m_IDs[8];
	int m_Num;
	int m_StartTick;
};

#endif
