#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const int STD_BMI = 22;	// 標準BMI
	double height;		// 身長
	double weight;		// 体重
	double bmi;			// BMI
	double stdWeight;		// 標準体重

	// キー入力をheightに格納する
	cout << "身長（cm）を入力してください：";
	cin >> height;

	// キー入力をweightに格納する
	cout << "体重（kg）を入力してください：";
	cin >> weight;

	// 身長をcm単位からm単位に変換する
	height /= 100;

	// 身長と体重からBMIを計算する
	bmi = weight / height / height;

	// 標準体重を計算する
	stdWeight = STD_BMI * height * height;

	// BMIを画面に表示する
	cout << "あなたのBMIは、" << fixed << setprecision(1) << bmi << "です。" << endl;

	// 標準体重を画面に表示する
	cout << "あなたの標準体重は、" << stdWeight << "kgです。" << endl;

	string judgement = bmi >= STD_BMI ? "肥満です" : "肥満ではありません。";

	if (bmi >= STD_BMI) {
		judgement = "肥満です";
	}
	else {
		judgement = "肥満ではありません。";
	}
	cout << judgement << endl;

	return 0;
}
