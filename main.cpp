#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <Windows.h>
#include "note.h"
#define PLAINTEXT_MAX_SIZE 1024 // 최대 평문 길이
#define COMMON_DIFFERENCE 50 // 공차

#define MELODY_LENGTH_1 500 // 음 길이
#define MELODY_LENGTH_2 750 // 음 길이
#define MELODY_LENGTH_3 1000 // 음 길이
#define MELODY_LENGTH_4 1250 // 음 길이
#define MELODY_LENGTH_5 1500 // 음 길이
#define MELODY_LENGTH_6 1750 // 음 길이
#define MELODY_LENGTH_7 2000 // 음 길이
#define MELODY_LENGTH_8 2250 // 음 길이
#define MELODY_LENGTH_9 2500 // 음 길이
#define MELODY_LENGTH_10 2750 // 음 길이
#define MELODY_LENGTH_11 3000 // 음 길이
#define MELODY_LENGTH_12 3250 // 음 길이
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
		for(int i = 0 ; i < mPlaintextSize ; i ++){
			cout << "현재 아스키값 : " << mCharPlaintext[i] << endl;
	//		Beep(SeqMulti(mCharPlaintext[i]), MELODY_LENGTH);
			switch (mCharPlaintext[i])
			{
			case 33: Beep(DO1, MELODY_LENGTH_1); break;
			case 34: Beep(DO2, MELODY_LENGTH_1); break;
			case 35: Beep(DO3, MELODY_LENGTH_1); break;
			case 36: Beep(DO4, MELODY_LENGTH_1); break;
			case 37: Beep(DO5, MELODY_LENGTH_1); break;
			case 38: Beep(DO6, MELODY_LENGTH_1); break;
			case 39: Beep(DO7, MELODY_LENGTH_1); break;
			case 40: Beep(DO8, MELODY_LENGTH_1); break;

			case 41: Beep(RE1, MELODY_LENGTH_2); break;
			case 42: Beep(RE2, MELODY_LENGTH_2); break;
			case 43: Beep(RE3, MELODY_LENGTH_2); break;
			case 44: Beep(RE4, MELODY_LENGTH_2); break;
			case 45: Beep(RE5, MELODY_LENGTH_2); break;
			case 46: Beep(RE6, MELODY_LENGTH_2); break;
			case 47: Beep(RE7, MELODY_LENGTH_2); break;
			case 48: Beep(RE8, MELODY_LENGTH_2); break;

			case 49: Beep(MI1, MELODY_LENGTH_3); break;
			case 50: Beep(MI2, MELODY_LENGTH_3); break;
			case 51: Beep(MI3, MELODY_LENGTH_3); break;
			case 52: Beep(MI4, MELODY_LENGTH_3); break;
			case 53: Beep(MI5, MELODY_LENGTH_3); break;
			case 54: Beep(MI6, MELODY_LENGTH_3); break;
			case 55: Beep(MI7, MELODY_LENGTH_3); break;
			case 56: Beep(MI8, MELODY_LENGTH_3); break;

			case 57: Beep(PA1, MELODY_LENGTH_4); break;
			case 58: Beep(PA2, MELODY_LENGTH_4); break;
			case 59: Beep(PA3, MELODY_LENGTH_4); break;
			case 60: Beep(PA4, MELODY_LENGTH_4); break;
			case 61: Beep(PA5, MELODY_LENGTH_4); break;
			case 62: Beep(PA6, MELODY_LENGTH_4); break;
			case 63: Beep(PA7, MELODY_LENGTH_4); break;
			case 64: Beep(PA8, MELODY_LENGTH_4); break;

			case 65: Beep(SOL1, MELODY_LENGTH_5); break;
			case 66: Beep(SOL2, MELODY_LENGTH_5); break;
			case 67: Beep(SOL3, MELODY_LENGTH_5); break;
			case 68: Beep(SOL4, MELODY_LENGTH_5); break;
			case 69: Beep(SOL5, MELODY_LENGTH_5); break;
			case 70: Beep(SOL6, MELODY_LENGTH_5); break;
			case 71: Beep(SOL7, MELODY_LENGTH_5); break;
			case 72: Beep(SOL8, MELODY_LENGTH_5); break;

			case 73: Beep(RA1, MELODY_LENGTH_6); break;
			case 74: Beep(RA2, MELODY_LENGTH_6); break;
			case 75: Beep(RA3, MELODY_LENGTH_6); break;
			case 76: Beep(RA4, MELODY_LENGTH_6); break;
			case 77: Beep(RA5, MELODY_LENGTH_6); break;
			case 78: Beep(RA6, MELODY_LENGTH_6); break;
			case 79: Beep(RA7, MELODY_LENGTH_6); break;
			case 80: Beep(RA8, MELODY_LENGTH_6); break;

			case 81: Beep(SI1, MELODY_LENGTH_7); break;
			case 82: Beep(SI2, MELODY_LENGTH_7); break;
			case 83: Beep(SI3, MELODY_LENGTH_7); break;
			case 84: Beep(SI4, MELODY_LENGTH_7); break;
			case 85: Beep(SI5, MELODY_LENGTH_7); break;
			case 86: Beep(SI6, MELODY_LENGTH_7); break;
			case 87: Beep(SI7, MELODY_LENGTH_7); break;
			case 88: Beep(SI8, MELODY_LENGTH_7); break;

			case 89: Beep(HDO1, MELODY_LENGTH_8); break;
			case 90: Beep(HDO2, MELODY_LENGTH_8); break;
			case 91: Beep(HDO3, MELODY_LENGTH_8); break;
			case 92: Beep(HDO4, MELODY_LENGTH_8); break;
			case 93: Beep(HDO5, MELODY_LENGTH_8); break;
			case 94: Beep(HDO6, MELODY_LENGTH_8); break;
			case 95: Beep(HDO7, MELODY_LENGTH_8); break;
			case 96: Beep(HDO8, MELODY_LENGTH_8); break;

			case 97: Beep(HRE1, MELODY_LENGTH_9); break;
			case 98: Beep(HRE2, MELODY_LENGTH_9); break;
			case 99: Beep(HRE3, MELODY_LENGTH_9); break;
			case 100: Beep(HRE4, MELODY_LENGTH_9); break;
			case 101: Beep(HRE5, MELODY_LENGTH_9); break;
			case 102: Beep(HRE6, MELODY_LENGTH_9); break;
			case 103: Beep(HRE7, MELODY_LENGTH_9); break;
			case 104: Beep(HRE8, MELODY_LENGTH_9); break;

			case 105: Beep(HMI1, MELODY_LENGTH_10); break;
			case 106: Beep(HMI2, MELODY_LENGTH_10); break;
			case 107: Beep(HMI3, MELODY_LENGTH_10); break;
			case 108: Beep(HMI4, MELODY_LENGTH_10); break;
			case 109: Beep(HMI5, MELODY_LENGTH_10); break;
			case 110: Beep(HMI6, MELODY_LENGTH_10); break;
			case 111: Beep(HMI7, MELODY_LENGTH_10); break;
			case 112: Beep(HMI8, MELODY_LENGTH_10); break;

			case 113: Beep(HPA1, MELODY_LENGTH_11); break;
			case 114: Beep(HPA2, MELODY_LENGTH_11); break;
			case 115: Beep(HPA3, MELODY_LENGTH_11); break;
			case 116: Beep(HPA4, MELODY_LENGTH_11); break;
			case 117: Beep(HPA5, MELODY_LENGTH_11); break;
			case 118: Beep(HPA6, MELODY_LENGTH_11); break;
			case 119: Beep(HPA7, MELODY_LENGTH_11); break;
			case 120: Beep(HPA8, MELODY_LENGTH_11); break;

			case 121: Beep(HSOL1, MELODY_LENGTH_12); break;
			case 122: Beep(HSOL2, MELODY_LENGTH_12); break;
			case 123: Beep(HSOL3, MELODY_LENGTH_12); break;
			case 124: Beep(HSOL4, MELODY_LENGTH_12); break;
			case 125: Beep(HSOL5, MELODY_LENGTH_12); break;
			case 126: Beep(HSOL6, MELODY_LENGTH_12); break;
			}
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