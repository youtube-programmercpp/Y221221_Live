#include <string>
#include <vector>
struct A {
	int x;
	std::vector<std::string> s;
	int z;
};
void f(A&& r)
{
	r.s.push_back("GHI");
}
int main()
{
	//�ꎞ�I�u�W�F�N�g
	f({ 1, {"ABC", "DEF"} ,2 });
}
