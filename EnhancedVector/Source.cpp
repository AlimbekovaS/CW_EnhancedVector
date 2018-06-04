#include"Header.h"
#include"Vector.h"
#include"EnhancedVector.h"
int main()
{
	EnhancedVector<double> v;
	v.push_back(5);
	v.push_back(12);
	try 
	{
		for (int i = 0;i < v.size();i++) //konstrukcia dlia proverki pravil'nosti peredavaemogo indeksa
			cout << v[i+12] << endl;
	}
	catch (char *txt)
	{
		cout << txt << endl;
	}
	system("pause");
	return 0;
}