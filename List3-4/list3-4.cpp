#include <iostream>
#include <string>
using namespace std;

int main() {
	int channel;		// �`�����l���̔ԍ�
	string stationName;	// �e���r�ǖ�
	const int CHANNEL_ARRAY_SIZE = 9;

	// �L�[���͂�channel�Ɋi�[����
	cout << "�`�����l���ԍ�����͂��Ă��������F";
	cin >> channel;

	// �e���r�ǖ���stationName�Ɋi�[����
	/*
	switch (channel) {
	case 1:
		stationName = "TBC�e���r";
		break;
	case 2:
		stationName = "NHK����";
		break;
	case 3:
		stationName = "NHK����";
		break;
	case 4:
		stationName = "�{��e���r";
		break;
	case 5:
		stationName = "�����{����";
		break;
	case 8:
		stationName = "������";
		break;
	default:
		stationName = "���蓖�ĂȂ�";
		break;
	}
	*/
	const string stationNameArray[CHANNEL_ARRAY_SIZE] = { "���蓖�ĂȂ�","TBC�e���r" ,"NHK����","NHK����" ,"�{��e���r","�����{����" ,"���蓖�ĂȂ�", "���蓖�ĂȂ�", "������" };

	// �e���r�ǖ���\������
	if (channel < CHANNEL_ARRAY_SIZE) {
		cout << stationNameArray[channel] << endl;
	}
	else
	{
		cout << stationNameArray[0] << endl;
	}


	return 0;
}
