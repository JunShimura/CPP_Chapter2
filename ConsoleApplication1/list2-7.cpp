#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const int STD_BMI = 22;	// �W��BMI
	double height;		// �g��
	double weight;		// �̏d
	double bmi;			// BMI
	double stdWeight;		// �W���̏d

	// �L�[���͂�height�Ɋi�[����
	cout << "�g���icm�j����͂��Ă��������F";
	cin >> height;

	// �L�[���͂�weight�Ɋi�[����
	cout << "�̏d�ikg�j����͂��Ă��������F";
	cin >> weight;

	// �g����cm�P�ʂ���m�P�ʂɕϊ�����
	height /= 100;

	// �g���Ƒ̏d����BMI���v�Z����
	bmi = weight / height / height;

	// �W���̏d���v�Z����
	stdWeight = STD_BMI * height * height;

	// BMI����ʂɕ\������
	cout << "���Ȃ���BMI�́A" << fixed << setprecision(1) << bmi << "�ł��B" << endl;

	// �W���̏d����ʂɕ\������
	cout << "���Ȃ��̕W���̏d�́A" << stdWeight << "kg�ł��B" << endl;

	return 0;
}
