#pragma once

#include"../Utility/Vector2D.h"

class Enemy
{
private:

	int type;				//�^�C�v
	int image;				//�摜
	float speed;		//����
	Vector2D location;		//�ʒu���
	Vector2D box_size;		//�����蔻��̑傫��

	//int angle;

	

public:

	//�R���X�g���N�^(�C���X�^���X�������ɍŏ��ɌĂ΂��֐�)
	Enemy(int type, int handle);

	//�f�X�g���N�^
	~Enemy();

	void Initialize();				//����������
	void Update(float speed);		//�X�V����
	void Draw() const;				//�`�揈��
	void Finalize();				//�I��������
	void Movement();

	int GetType() const;			//�^�C�v�擾
	Vector2D GetLocation() const;	//�ʒu���̎擾
	Vector2D GetBoxSize() const;	//�����蔻��̑傫�����擾
	
};