#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <chrono>
#include <thread>

#include "bunny.cpp"

using namespace std::chrono_literals;

int factorial(int n) {
	int result = n;
	for(int i = 1; i < n; i++)
		result *= n - i;
	return result;
}

int main () {

	const int namesPerRow = 12;
	const int finalLength = 4;
	const int possibNames = factorial(namesPerRow - 1) / (factorial(finalLength) * factorial(namesPerRow - 1 - finalLength));

	int drwRow = 11; // Number of spaces per row in the drawing
        int getPhrase = 0;
	for (int i = 0; i < std::size(drawing); ++i) {
		std::cout << drawing[i] << std::flush;
		std::cout << " " << std::flush;
		if ((i + 1) % drwRow == 0) {
			++getPhrase;
			std::cout << d << std::flush;
			switch (getPhrase) {
				case 4:
					std::cout << "  神名（ｼﾞﾝﾒｲ）" << "ランダマイザー (バージョン1.0.3)\n";
					break;
				case 6:
					std::cout << "  Nipponic Deity Name " << "Randomizer (ver. 1.0.3) (c) 2021\n";
					break;
				case 10: 
					std::cout << "  Now with: " << possibNames << " different possible names!\n";
					break;
				case 12: 
					std::cout << "  なんと" << possibNames << "の神名も含まれる！\n";		
					break;
				default:
					printf("%s", "\n");
					break;
			}
		}	
	}

	std::cout << "\n\nType 's' to start generation.\n";
	 
        /*printf(d);

	std::cout << red << "***** 神名（ｼﾞﾝﾒｲ）" << std::flush;
	std::this_thread::sleep_for(0.3s);
	std::cout << green << "ランダマイザー " << std::flush;
        std::this_thread::sleep_for(0.3s);
	std::cout << green << "ランダマイザー " << std::flush;
        std::this_thread::sleep_for(0.3s);
	std::cout << magenta << " Randomizer (ver. 1.0) *****" << std::flush;
        std::this_thread::sleep_for(0.3s);
	std::cout << def << "\nNow with: " << possibNames << " different possible names! なんと" << possibNames << "の神名も含む！\n\nType 's' to start generation.\n";*/
        std::string confirm;
	while (confirm != "s")
	       std::cin >> confirm;

	std::string frstName[namesPerRow] { "大", "速", "天之", "千", "高", "御", "若", "奥津", "夏", "秋", "千" };
	std::string scndName[namesPerRow] { "光", "魂", "年", "敷", "青", "遠津", "霧", "荒", "深", "刺", "年" };
	std::string thrdName[namesPerRow] { "國", "海", "沼", "根", "山", "土", "岬", "原", "宮", "道" };
	std::string lstName[namesPerRow] { "大神", "毘古神", "比賣神", "神", "主神", "牟遅神", "日子神", "命", "御祖神", "若比賣神", "大御神" };
	std::string frstKtkn[namesPerRow] { "オホ", "ハヤ", "アメノ", "チ", "タカ", "ミ", "ワカ", "オキツ", "ナツ", "アキ", "チ" };
	std::string scndKtkn[namesPerRow] { "テリ", "タマ", "トシ", "シキ", "アヲ", "トヲツ", "キリ", "アラ", "フカ", "サシ", "トセノ" };
	std::string thrdKtkn[namesPerRow] { "クニ", "ウミ", "ヌマ", "ネ", "ヤマツミ", "ツチ", "サキ", "ハラ", "ミヤ", "チ" };
	std::string lstKtkn[namesPerRow] { "ノオオカミ", "ビコノカミ", "ヒメノカミ", "ノカミ", "ヌシノカミ", "ムチノカミ", "ヒコノカミ", "ノミコト", "ミオヤノカミ", "ワカヒメノカミ", "ノオオミカミ" };
	std::string frstRomj[namesPerRow] { "Oo-", "Haya-", "Ame-no-", "Chi-", "Taka-", "Mi-", "Waka-", "Okitsu-", "Natsu-", "Aki-", "Chi-" };
	std::string scndRomj[namesPerRow] { "teri-", "tama-", "toshi-", "shiki-", "ao-", "tootsu-", "kiri-", "ara-", "fuka-", "sashi-", "tose-no-" };
	std::string thrdRomj[namesPerRow] { "kuni", "umi", "numa", "ne", "yama", "tsuchi", "saki", "hara", "miya", "chi" };
	std::string lstRomj[namesPerRow] { " no Ookami", "-Biko no Kami", "-Hime no Kami", " no Kami", "-Nushi no Kami", "-Muchi no Kami", "-Hiko no Kami", " no Mikoto", "-Mioya no Kami", "-Wakahime no Kami", " no Oomikami" };
	std::string frstTrns[namesPerRow] { "Great ", "Swift ", "Heaven's ", "a Thousand ", "Tall ", "Honoured ", "Young ", "Inner ", "Summer's ", "Autumn's ", "" };
	std::string scndTrns[namesPerRow] { "Illuminated ", "Soul ", "Harvest ", "Governed ", "Verdant ", "Distant ", "Mist ", "Wild ", "Profound ", "Piercing ", "Thousand-year-old " };
	std::string thrdTrns[namesPerRow] { "Realms", "Seas", "Swamps", "Roots", "Mountains", "Lands", "Capes", "Fields", "Shrines", "Roads" };
	std::string lstTrns[namesPerRow] { "Great Kami of ", "Prince of ", "Princess of ", "Kami of ", "Lord of ", "Noble of ", "Prince of ", "His Majesty of ", "His Ancestral Majesty of ", "Young Princess of ", "August Great Kami of " };


	do {

	srand(time(NULL));
	int roll  = rand()%10;
	int roll1 = rand()%10;
	int roll2 = rand()%10;
	int roll3 = rand()%10;

	if (roll == 3 && roll1 == 2) {
		roll1 = 10;
		roll = 10;
	}
	

	std::cout << "\n" << frstName[roll] << scndName[roll1] << thrdName[roll2] << lstName[roll3] << 
		" (" << frstKtkn[roll] << scndKtkn[roll1] << thrdKtkn[roll2] << lstKtkn[roll3] << ")\n" <<
                "Romaji: " << frstRomj[roll] << scndRomj[roll1] << thrdRomj[roll2] << lstRomj[roll3] << 
		"\nEnglish: " << lstTrns[roll3] << frstTrns[roll] << scndTrns[roll1] << thrdTrns[roll2] << "\n";

	printf("%s", "Go again? もう一度？(y/n)");
	confirm = "fried shrimp";
	while (!(confirm == "y" || confirm == "n"))
		std::cin >> confirm;

} while (confirm != "n");

}
