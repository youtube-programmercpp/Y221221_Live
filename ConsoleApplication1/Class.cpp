class A {
	int x = 5;//�����o�ϐ�
public:
	//�f�t�H���g�R���X�g���N�^��
	//�f�t�H���g����
	A() = default;//����
	A(int x)
		: x{x}
	{
	}
};
int main()
{
	//A a{ 1 };
	A b;
}
