#include <iostream>
#include <string>
using namespace std;

int main() {
    int channel;		// �`�����l���̔ԍ�
    string stationName;	// �e���r�ǖ�

    // �L�[���͂�channel�Ɋi�[����
    cout << "�`�����l���ԍ�����͂��Ă��������F";
    cin >> channel;

    // �e���r�ǖ���stationName�Ɋi�[����
    if (channel == 1) {
        stationName = "NHK����";
    }
    else if (channel == 3) {
        stationName = "NHK����";
    }
    else if (channel == 4) {
        stationName = "���{�e���r";
    }
    else if (channel == 6) {
        stationName = "TBS�e���r";
    }
    else if (channel == 8) {
        stationName = "�t�W�e���r";
    }
    else if (channel == 10) {
        stationName = "�e���r����";
    }
    else if (channel == 12) {
        stationName = "�e���r����";
    }
    else {
        stationName = "���蓖�ĂȂ�";
    }

    // �e���r�ǖ���\������
    cout << stationName << endl;

    return 0;
}
