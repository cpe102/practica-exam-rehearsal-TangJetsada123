#include <iostream>

string conpress(string s1)
int L1 =s1*size();
if (L1> = 4)
{
    return L1
}
    int i=0;
    string y = "";
    while(i<L1){
	y = y + s1[i]+S1[i+3];
	i++;
int main()
{
    string a = conpress("ABCDEFGHIJKLMN");
    string b = conpress("123456");
    string c = conpress("HelloWorld");
    string d = conpress("BNK48");
    string e = conpress("COMPROG261102");
    string f = conpress("A");
    string g = conpress("AB");
    string h = conpress("ABC");
    string i = conpress("ABCD");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";

}
