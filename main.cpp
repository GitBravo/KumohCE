#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <Windows.h>
#define PLAINTEXT_MAX_SIZE 1024 // �ִ� �� ����
#define MELODY_LENGTH 500 // �� ����
#define COMMON_DIFFERENCE 100 // ����
using namespace std;

class Melody {
public:
	// ������
	Melody(string plaintext) {
		mStringPlaintext = plaintext;
		mPlaintextSize = mStringPlaintext.length();

		// string Ÿ���� ���ڿ��� char[] Ÿ������ ��ȯ
		strncpy(mCharPlaintext, mStringPlaintext.c_str(), sizeof(mCharPlaintext));
		mCharPlaintext[sizeof(mCharPlaintext) - 1] = 0;
	}

	int SeqMulti(char value) {
		// ���� ������ �̿��ؼ� �ƽ�Ű ���� Ȯ���ϴ� �Լ�
		if (value < 33)
			return (int)value;
		else
			return (int)(value + (value - 32)*COMMON_DIFFERENCE);
	}

	void Play() {
		for (int i = 0; i < mPlaintextSize; i++) {
			cout << "���� �� : " << mCharPlaintext[i] << endl;
			Beep(SeqMulti(mCharPlaintext[i]), MELODY_LENGTH);
		}
	}
private:
	string mStringPlaintext;
	int mPlaintextSize;
	char mCharPlaintext[PLAINTEXT_MAX_SIZE];
};

int main() {
	cout << "��ȣȭ(��ε� ��ȯ) �ϰ���� ���ڿ� �Է� : ";
	string input;
	cin >> input;

	Melody* melody = new Melody(input);
	melody->Play();

	return 0;
}