/* �Q�[���{�� */
/*
~~~ �Q�[���̃��[�� ~~~
[1] ���e�����ׂČ�����Ώ���
[2] ���ԓ��Ɍ����Ȃ���Ε���

~~~ �d�l ~~~
2D �� �n�����̔��e�\��
*/

#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include "Tools.h"
#include "GameLoop.h"

int main() {
	// �V�X�e�����b�Z�[�W
	std::cout << "### ENTRIED INTO MAIN FUNCTION ###" << std::endl;
	std::cout << "Type Player Name -> ";

	/* �v���C���[�� */
	std::string sName;
	std::cin >> sName; // �v���C���[���̓���

	/* �Q�[���̖{�̂̃C���X�^���X */
	DetectTheBombGame myGame(sName); // �C���X�^���X��

	// �v���C���[�����͌�ɃQ�[���̊J�n�����邩�̔���
	std::cout << "PLAYER IS : " << myGame.PlayerName() << " DO YOU START GAME? [Y/N]" << std::endl;
	std::string sWork;
	std::cin >> sWork;

	// �����ŃQ�[�������邩�̔���
	if (sWork == "N" || sWork == "n") {
		std::cout << "### END THE GAME ###" << std::endl;
		return 0;
	}

	// �����Ȃ�Q�[���J�n
	myGame.StartGameLogic();

	return 0;
}