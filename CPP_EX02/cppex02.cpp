#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	const int DATA_NUM = 10;	// �z��̗v�f��

	// 10�l�̊w���̃e�X�g�̓��_���i�[�����z��
	int point[] = { 85, 72, 63, 45, 100, 98, 52, 88, 74, 65 };
	int i, j;			// �z��̗v�f�ԍ��i���[�v�J�E���^�j
	char grade;			// ���т̕]��

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
			// ���_�ɉ������]����ݒ肷��
			if (point[i] >= 80) grade = 'A';
			else if (point[i] >= 70) grade = 'B';
			else grade = 'C';
			// �]����\������
			cout << point[i] << " = " << grade << endl;
		}
	}

	//std::sort(point,point+ (sizeof(point) / sizeof(point[0])));
	//std::reverse(point, point + (sizeof(point) / sizeof(point[0])));

	//std::sort(std::begin(point), std::end( point), std::greater<>());

	// �z��̗v�f��1�����o���J��Ԃ�
	//for (i = 0; i < DATA_NUM; i++) {
	//	// 60�_�����͖�������
	//	if (point[i] < 60) continue;

	//	// ���_�ɉ������]����ݒ肷��
	//	if (point[i] >= 80) grade = 'A';
	//	else if (point[i] >= 70) grade = 'B';
	//	else grade = 'C';

	//	// �]����\������
	//	cout << point[i] << " = " << grade << endl;
	//}

	return 0;
}
