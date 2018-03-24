//degree are converted into degree of minutes,my own implementation
#include <iostream>

using namespace std;

int main()
{
	double s1,s2;
	cout << "import degree" << endl;
	cin >> s1;
	int nDegree, nMinute, nSecond;
	nDegree = int(s1);
	nMinute = int((s1 - nDegree) * 60);
	nSecond = int(((s1 - nDegree) * 60 - nMinute) * 60);

	//Retain the decimal
	s2 = ((s1 - nDegree) * 60 - nMinute) * 60;
	cout << nDegree << " " << nMinute << " " << nSecond << endl<<s2<<endl;
	return 0;
}
