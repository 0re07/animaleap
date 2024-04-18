#pragma once
#include<DxLib.h>
#include"../../../Common/Vector2.h"
class ImageMaterial;

class ImageRenderer
{
public:
	//�R���X�g���N�^
	ImageRenderer(int& handle, ImageMaterial& material);
	~ImageRenderer();

	//�`��
	void Draw(void);

	//�`���`�̐���
	void SetSquereVertex(Vector2 start, Vector2 end);

private:
	// �s�N�Z���V�F�[�_�p�I���W�i���萔�o�b�t�@�̎g�p�J�n�X���b�g
	static constexpr int CONSTANT_BUF_SLOT_BEGIN_PS = 4;
	// ���_��
	static constexpr int NUM_VERTEX = 4;
	// ���_�C���f�b�N�X��
	static constexpr int NUM_VERTEX_IDX = 6;
	// �|���S����
	static constexpr int NUM_POLYGON = 2;

	//���W
	Vector2 pos_;
	//�`��T�C�Y
	Vector2 size_;

	//���_
	VERTEX2DSHADER vertexs_[NUM_VERTEX];

	//���_�C���f�b�N�X
	WORD indexes_[NUM_VERTEX_IDX];

	//���f���n���h��
	int& handle_;

	//�C���[�W�}�e���A��
	ImageMaterial& material_;

	//�V�F�[�_�[�ݒ�i�s�N�Z���j
	void SetReservePS(void);
};
