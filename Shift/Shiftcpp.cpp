#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;

int main() {
	unsigned short i = 0xabcd;
	cout << std::bitset<16>(i) << endl;	//16�r�b�g2�i���ŏo��
	// 4�r�b�g�̉E�z�V�t�g������
	short j = i>>4;	// �E��4�r�b�g�V�t�g����
	short k = i << 12; // ����12�r�b�g�V�t�g����
	short l = j | k; // �_���a�ō��킹��
	cout << std::bitset<16>(l) << endl;


	return 0;
}