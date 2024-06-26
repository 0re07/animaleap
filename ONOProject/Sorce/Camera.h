#pragma once
#include <DxLib.h>

class Camera
{
public:

	Camera();
	~Camera();

	void Init(void);
	void Release(void);
	void Update(void);
	void Draw(void);

	// 描画前カメラ設定
	void CameraSetUp(void);

	void SetPos(const VECTOR& pos);
	void SetRot(const VECTOR& rot);

private:
	VECTOR pos_;
	VECTOR rot_;
	VECTOR targetPos_;
};

