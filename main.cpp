# 15puzzle

#include <iostream>
#include <sstream>

using namespace std;

void output(string a[4][4]) {
	cout << "+----+----+----+----+\n";
	for (int i = 0; i < 4; i++) {
		cout << "| " << a[i][0] << " | " << a[i][1]
			<< " | " << a[i][2] << " | " << a[i][3]
			<< " |\n";
		cout << "+----+----+----+----+\n";
	}
}

int main()
{
	string a[4][4];
	a[0][0] = "13";	a[0][1] = "14";	a[0][2] = "15";	a[0][3] = "  ";
	a[1][0] = "12";	a[1][1] = "11";	a[1][2] = "10";	a[1][3] = "09";
	a[2][0] = "05";	a[2][1] = "06";	a[2][2] = "07";	a[2][3] = "08";
	a[3][0] = "04";	a[3][1] = "03";	a[3][2] = "02";	a[3][3] = "01";

	output(a);

	int x = 0;
	int y = 3;
	char oper;

	cin >> oper;

	while (oper != 'q'){
		switch (oper) {
		case 'j':
			if (x - 1 != -1) {
				swap(a[x][y], a[x - 1][y]);
				x--;
			}
			break;
		case 'k':
			if (x + 1 != 4) {
				swap(a[x][y], a[x + 1][y]);
				x++;
			}
			break;
		case 'l':
			if (y - 1 != -1) {
				swap(a[x][y], a[x][y - 1]);
				y--;
			}
			break;
		case 'h':
			if (y + 1 != 4) {
				swap(a[x][y], a[x][y + 1]);
				y++;
			}
			break;

		case 'q':
			exit(0);
		}

		output(a);
		cin >> oper;
	}

	cin.get();
	cin.get();
    return 0;
}

