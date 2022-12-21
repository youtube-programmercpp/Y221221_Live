class A {
	int x = 5;//メンバ変数
public:
	//デフォルトコンストラクタの
	//デフォルト実装
	A() = default;//復活
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
