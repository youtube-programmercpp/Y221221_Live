union A {
	int         a;
	double      b;
	const char* c;
};
int main()
{
	//C���� 1999�N�ł̋K�i C99
	//C�{�{ 2020�N�ł̋K�i C++20
	A x = { .c = "XYZ" };
}