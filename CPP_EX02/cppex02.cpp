#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	const int DATA_NUM = 10;	// 配列の要素数

	// 10人の学生のテストの得点を格納した配列
	int point[] = { 85, 72, 63, 45, 100, 98, 52, 88, 74, 65 };
	int i, j;			// 配列の要素番号（ループカウンタ）
	char grade;			// 成績の評価

	for (i = 0; i < DATA_NUM - 1; i++) {
		for (j = i + 1; j < DATA_NUM; j++) {
			if (point[i] < point[j]) {
				int w = point[i];
				point[i] = point[j];
				point[j] = w;
			}
		}
		if (point[i] < 60) {

			break;
		}
		else {
			// 得点に応じた評価を設定する
			if (point[i] >= 80) grade = 'A';
			else if (point[i] >= 70) grade = 'B';
			else grade = 'C';
			// 評価を表示する
			cout << point[i] << " = " << grade << endl;
		}
	}

	//std::sort(point,point+ (sizeof(point) / sizeof(point[0])));
	//std::reverse(point, point + (sizeof(point) / sizeof(point[0])));

	//std::sort(std::begin(point), std::end( point), std::greater<>());

	// 配列の要素を1つずつ取り出す繰り返し
	//for (i = 0; i < DATA_NUM; i++) {
	//	// 60点未満は無視する
	//	if (point[i] < 60) continue;

	//	// 得点に応じた評価を設定する
	//	if (point[i] >= 80) grade = 'A';
	//	else if (point[i] >= 70) grade = 'B';
	//	else grade = 'C';

	//	// 評価を表示する
	//	cout << point[i] << " = " << grade << endl;
	//}

	return 0;
}
