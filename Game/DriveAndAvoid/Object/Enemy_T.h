#pragma once
class Enemy_T
{
private:
	int Hp;
	int enemy_popcount;

public:
	//�R���X�g���N�^(�C���X�^���X�������ɍŏ��ɌĂ΂��֐�)
	Enemy_T();

	//�f�X�g���N�^
	~Enemy_T();

	void Initialize();				//����������
	void Update(float speed);		//�X�V����
	void Draw() const;              //�`�揈��
	void Finalize();				//�I��������
	void Move();

	int GetHp();
	void randomchar();
};

