#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <Windows.h>
#define PLAINTEXT_MAX_SIZE 1024 // 최대 평문 길이
#define MELODY_LENGTH 500 // 음 길이
#define COMMON_DIFFERENCE 100 // 공차
using namespace std;

class Melody {
public:
	// 생성자
	Melody(string plaintext) {
		mStringPlaintext = plaintext;
		mPlaintextSize = mStringPlaintext.length();

		// string 타입의 문자열을 char[] 타입으로 변환
		strncpy(mCharPlaintext, mStringPlaintext.c_str(), sizeof(mCharPlaintext));
		mCharPlaintext[sizeof(mCharPlaintext) - 1] = 0;
	}

	int SeqMulti(char value) {
		// 등차 수열을 이용해서 아스키 간격 확대하는 함수
		if (value < 33)
			return (int)value;
		else
			return (int)(value + (value - 32)*COMMON_DIFFERENCE);
	}

	void Play() {
		for (int i = 0; i < mPlaintextSize; i++) {
			cout << "현재 음 : " << mCharPlaintext[i] << endl;
			Beep(SeqMulti(mCharPlaintext[i]), MELODY_LENGTH);
		}
	}
private:
	string mStringPlaintext;
	int mPlaintextSize;
	char mCharPlaintext[PLAINTEXT_MAX_SIZE];
};

int main() {
	cout << "암호화(멜로디 변환) 하고싶은 문자열 입력 : ";
	string input;
	cin >> input;

	Melody* melody = new Melody(input);
	melody->Play();

	return 0;
}