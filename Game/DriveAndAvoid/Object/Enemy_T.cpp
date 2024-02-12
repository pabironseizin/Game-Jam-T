#include "Enemy_T.h"
#include"DxLib.h"

Enemy_T::Enemy_T() : Hp(0)
{
}

Enemy_T::~Enemy_T()
{
}

//初期化処理
void Enemy_T::Initialize()
{
	int Hp = 1000;

	//出現させるX座標パターンを取得
	float random_x = (float)(GetRand(4) * 105 + 40);

	
}

void Enemy_T::Update(float speed)
{
	
}

void Enemy_T::Draw() const
{
	
}


void Enemy_T::Finalize()
{
}

void Enemy_T::randomchar()
{
	= rand(100) <= 50;
	= rand(100) <= 30;
	= rand(100) <= 20;
	= rand(100) <= 10;

}

int Enemy_T::GetHp()
{
	
}