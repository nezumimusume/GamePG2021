#pragma once

class Player;
class GameCamera;

//Game中を管理するクラス。
class Game : public IGameObject
{
public:
	Game();
	~Game();
	//更新処理。
	void Update();

	Player* player;			//プレイヤー。
	GameCamera* gameCamera;			//ゲームカメラ。
};

