#include <iostream>
#include "pch.h"
#include "../Day9_Restaurant/SmsSender.cpp"

class TestableSmsSender : public SmsSender {
public:
	void send(Schedule* schedule) override {
		std::cout << "테스트용 SmsSender class의 send메서드 실행됨\n";
		sendMethodIsCalled = true;
	}

	bool isSendMethodIsCalled() {
		return sendMethodIsCalled;
	}

private:
	bool sendMethodIsCalled;
};