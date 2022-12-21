union A {
	int         a;
	double      b;
	const char* c;
};
int main()
{
	//CŒ¾Œê 1999”N”Å‚Ì‹KŠi C99
	//C{{ 2020”N”Å‚Ì‹KŠi C++20
	A x = { .c = "XYZ" };
}