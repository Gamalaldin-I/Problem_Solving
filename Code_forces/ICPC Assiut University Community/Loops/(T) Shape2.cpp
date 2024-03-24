#include "iostream"

using namespace std;

int main()
{
	int num; cin >> num; int temp = num-1;
	for (int i = 0;i < num;i++)
	{    
		for (int c = 0;c < temp;c++)
		{
			cout << " ";
		}
		for (int o = 0;o <= i;o++)
		{
				cout << "*";
		}
		for(int f=0;f<=i-1;f++)
		{
			cout << "*";
		}
		cout << "\n";
		temp--;
	}
	return 0;
}
