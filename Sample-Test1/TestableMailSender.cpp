#include "pch.h"
#include "../Day9_Restaurant/MailSender.cpp"

class TestableMailSender : public MailSender {
public:
	void sendMail(Schedule* schedule) override {
		std::cout << "�׽�Ʈ�� MailSender class�� send�޼��� �����\n";
		countSendMailMethodIsCalled++;
	}

	int getCountSendMailMethodIsCalled() {
		return countSendMailMethodIsCalled;
	}

private:
	int countSendMailMethodIsCalled = 0;
};