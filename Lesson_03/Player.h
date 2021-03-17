#pragma once
class Player : public IGameObject
{
public:
	Player();
	~Player();
	void Update();
	void Render(RenderContext& renderContext);
	void Move();
	//�������烁���o�ϐ�
	ModelRender modelRender;
	Vector3 position;
};
