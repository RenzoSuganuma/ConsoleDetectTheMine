#ifndef _GAMELOOPDEF_
#define _GAMELOOPDEF_
#endif // !_GAMELOOPDEF_
/* ゲームループ本体 */

#include <iostream>
#include <string>
#include <string.h>
#include <vector>

class DetectTheBombGame {
private:
	std::string sPlayerName;
	std::vector<std::string> vMapData;

	void GenerateMap() {
		// マップの一辺の長さを受け取る

		int len;
		std::cout << "### TYPE MAP EDGE LENGTH ###" << std::endl;
		std::cin >> len;
		std::cout << "### ARE YOU SURE THE LENGTH IS : " << len << " [Y/N] ###" << std::endl;

		std::string sWork;
		std::cin >> sWork;

		if (sWork == "N" || sWork == "n") {
			std::cout << "### RESTART THE GAME ###" << std::endl;
			return;
		}

		sWork = "";

		// マップデータ格納動的配列へ文字を格納

		for (int i = 0; i < len; ++i) {
			for (int j = 0; j < len; ++j) {
				if (i == 0 || i == len - 1 || j == 0 || j == len-1) {
					sWork.push_back('#');
				}
				else {
					sWork.push_back('.');
				}
			}
			vMapData.push_back(sWork);
			sWork = "";
		}

		// テストで出力

		for (int i = 0; i < len; ++i) {
			std::cout << vMapData[i] << "\n";
		}
	}
public:
	/* コンストラクタにプレイヤー名を渡すこと */
	DetectTheBombGame(std::string name) : sPlayerName(name) {}

	/* プレイヤー名を返す */
	std::string PlayerName() {
		return sPlayerName;
	}

	/* ゲームの起動をする */
	void StartGameLogic() {
		GenerateMap();
	}
};