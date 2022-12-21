struct A {
	virtual ~A() = default;
};
struct B : A {
	int* p;
	B()
		: p{new int[100]}
	{

	}
	~B()
	{
		delete[] p;
	}
};
int main()
{
	A* const p = new B;
	delete p;
}
