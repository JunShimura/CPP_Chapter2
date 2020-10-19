using System;

namespace Liat3_4CS
{
    class Program
    {
        static void Main(string[] args)
        {
            int channel;        // チャンネルの番号
            string stationName; // テレビ局名
            string inputChannel;

            // キー入力をchannelに格納する
            //cout << "チャンネル番号を入力してください：";
            //cin >> channel;
            Console.Write("チャンネル番号を入力してください：");
            inputChannel = Console.ReadLine();
            channel = int.Parse(inputChannel);

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
            string[] stationNameArray = { "割り当てなし", "TBCテレビ", "NHK教育", "NHK総合", "宮城テレビ", "東日本放送", "割り当てなし", "割り当てなし", "仙台放送" };

            // テレビ局名を表示する
            //cout << stationNameArray[channel] << endl;
            Console.WriteLine(stationNameArray[channel]);
        }
    }
}
