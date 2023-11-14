#ifndef _GAMELOOPDEF_
#define _GAMELOOPDEF_
#endif // !_GAMELOOPDEF_
/* �Q�[�����[�v�{�� */

#include <iostream>
#include <string>
#include <string.h>
#include <vector>

class DetectTheBombGame {
private:
	std::string sPlayerName;
	std::vector<std::string> vMapData;

	void GenerateMap() {
		// �}�b�v�̈�ӂ̒������󂯎��

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

		// �}�b�v�f�[�^�i�[���I�z��֕������i�[

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

		// �e�X�g�ŏo��

		for (int i = 0; i < len; ++i) {
			std::cout << vMapData[i] << "\n";
		}
	}
public:
	/* �R���X�g���N�^�Ƀv���C���[����n������ */
	DetectTheBombGame(std::string name) : sPlayerName(name) {}

	/* �v���C���[����Ԃ� */
	std::string PlayerName() {
		return sPlayerName;
	}

	/* �Q�[���̋N�������� */
	void StartGameLogic() {
		GenerateMap();
	}
};