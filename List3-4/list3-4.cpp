#include <iostream>
#include <string>
using namespace std;

int main() {
	int channel;		// チャンネルの番号
	string stationName;	// テレビ局名
	const int CHANNEL_ARRAY_SIZE = 9;

	// キー入力をchannelに格納する
	cout << "チャンネル番号を入力してください：";
	cin >> channel;

	// テレビ局名をstationNameに格納する
	/*
	switch (channel) {
	case 1:
		stationName = "TBCテレビ";
		break;
	case 2:
		stationName = "NHK教育";
		break;
	case 3:
		stationName = "NHK総合";
		break;
	case 4:
		stationName = "宮城テレビ";
		break;
	case 5:
		stationName = "東日本放送";
		break;
	case 8:
		stationName = "仙台放送";
		break;
	default:
		stationName = "割り当てなし";
		break;
	}
	*/
	const string stationNameArray[CHANNEL_ARRAY_SIZE] = { "割り当てなし","TBCテレビ" ,"NHK教育","NHK総合" ,"宮城テレビ","東日本放送" ,"割り当てなし", "割り当てなし", "仙台放送" };

	// テレビ局名を表示する
	if (channel < CHANNEL_ARRAY_SIZE) {
		cout << stationNameArray[channel] << endl;
	}
	else
	{
		cout << stationNameArray[0] << endl;
	}


	return 0;
}
