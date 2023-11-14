/* ゲーム本体 */
/*
~~~ ゲームのルール ~~~
[1] 爆弾をすべて見つければ勝ち
[2] 時間内に見つけなければ負け

~~~ 仕様 ~~~
2D の 地雷原の爆弾暴き
*/

#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include "Tools.h"
#include "GameLoop.h"

int main() {
	// システムメッセージ
	std::cout << "### ENTRIED INTO MAIN FUNCTION ###" << std::endl;
	std::cout << "Type Player Name -> ";

	/* プレイヤー名 */
	std::string sName;
	std::cin >> sName; // プレイヤー名の入力

	/* ゲームの本体のインスタンス */
	DetectTheBombGame myGame(sName); // インスタンス化

	// プレイヤー名入力後にゲームの開始をするかの判定
	std::cout << "PLAYER IS : " << myGame.PlayerName() << " DO YOU START GAME? [Y/N]" << std::endl;
	std::string sWork;
	std::cin >> sWork;

	// ここでゲームをするかの判定
	if (sWork == "N" || sWork == "n") {
		std::cout << "### END THE GAME ###" << std::endl;
		return 0;
	}

	// 続くならゲーム開始
	myGame.StartGameLogic();

	return 0;
}