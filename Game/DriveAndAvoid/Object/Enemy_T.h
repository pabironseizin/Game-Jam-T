#pragma once
class Enemy_T
{
private:
	int Hp;

public:
	//�R���X�g���N�^(�C���X�^���X�������ɍŏ��ɌĂ΂��֐�)
	Enemy_T();

	//�f�X�g���N�^
	~Enemy_T();

	void Initialize();				//����������
	void Update(float speed);		//�X�V����
	void Draw() const;              //�`�揈��
	void Finalize();				//�I��������

	int GetHp();
	void randomchar();
};

