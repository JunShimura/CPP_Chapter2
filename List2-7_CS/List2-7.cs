using System;

namespace List2_7_CS
{
    class Program
    {
        static void Main(string[] args)
        {
			const int STD_BMI = 22; // 標準BMI
			double height;      // 身長
			double weight;      // 体重
			double bmi;         // BMI
			double stdWeight;       // 標準体重
			
			string s = "";
			
			// キー入力をheightに格納する
			//cout << "身長（cm）を入力してください：";
			Console.Write("身長（cm）を入力してください：");
			// cin >> height;
			s = Console.ReadLine();
			height= int.Parse(s);

			// キー入力をweightに格納する
			//cout << "体重（kg）を入力してください：";
			Console.Write("体重（kg）を入力してください：");
			//cin >> weight;
			s = Console.ReadLine();
			weight = int.Parse(s);


			// 身長をcm単位からm単位に変換する
			height /= 100;

			// 身長と体重からBMIを計算する
			bmi = weight / height / height;

			// 標準体重を計算する
			stdWeight = STD_BMI * height * height;

			// BMIを画面に表示する
			//cout << "あなたのBMIは、" << fixed << setprecision(1) << bmi << "です。" << endl;
			Console.WriteLine("あなたのBMIは、{0:f1}です。", bmi);

			// 標準体重を画面に表示する
			//cout << "あなたの標準体重は、" << stdWeight << "kgです。" << endl;
			Console.WriteLine("あなたの標準体重は{0:f1}です。", stdWeight);

			string judgement = bmi >= STD_BMI ? "肥満です" : "肥満ではありません。";

			return ;
		}
    }
}
