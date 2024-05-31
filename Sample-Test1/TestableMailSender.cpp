#include "pch.h"
#include "../Day9_Restaurant/MailSender.cpp"

class TestableMailSender : public MailSender {
public:
	void sendMail(Schedule* schedule) override {
		std::cout << "테스트용 MailSender class의 send메서드 실행됨\n";
		countSendMailMethodIsCalled++;
	}

	int getCountSendMailMethodIsCalled() {
		return countSendMailMethodIsCalled;
	}

private:
	int countSendMailMethodIsCalled = 0;
};