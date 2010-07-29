/* copyright (c) 2007 rajh and gregwar. Score stuff */

#ifndef RACE_H
#define RACE_H
#include <game/server/gamecontroller.h>
#include <game/server/score.h>

class CGameControllerRace : public IGameController
{
public:
	CGameControllerRace(class CGameContext *pGameServer);

	CScore m_Score;

	virtual void Tick();
};

#endif