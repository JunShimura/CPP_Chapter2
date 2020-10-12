#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;

int main() {
	unsigned short i = 0xabcd;
	cout << std::bitset<16>(i) << endl;	//16ビット2進数で出力
	// 4ビットの右循環シフトをする
	short j = i>>4;	// 右に4ビットシフトする
	short k = i << 12; // 左に12ビットシフトする
	short l = j | k; // 論理和で合わせる
	cout << std::bitset<16>(l) << endl;


	return 0;
}