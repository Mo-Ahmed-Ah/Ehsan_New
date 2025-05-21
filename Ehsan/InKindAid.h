#pragma once
using namespace System;

ref class InKindAid
{
private:
	int id;
	int caseID;
	String^ aidType;
	String^ aidContent;
	String^ frequencyLong;
	bool isRecurring;
	int receivedCount;
	String^ seasonType;
	bool isOneTimeConfirmed;
	DateTime registrationDate;
	DateTime receivedDate;
	DateTime nextDueDate;
	String^ notes;
	bool isActive;
	DateTime createdAt;
	DateTime updatedAt;
	String^ caseName;

public:
	// Constructor 1: لاسترجاع البيانات من قاعدة البيانات
	InKindAid(int id, int caseID, String^ aidType, String^ aidContent, String^ frequencyLong,
		bool isRecurring, int receivedCount, String^ seasonType, bool isOneTimeConfirmed,
		DateTime registrationDate, DateTime receivedDate, DateTime nextDueDate,
		String^ notes, bool isActive, DateTime createdAt, DateTime updatedAt, String^ caseName)
	{
		this->id = id;
		this->caseID = caseID;
		this->aidType = aidType;
		this->aidContent = aidContent;
		this->frequencyLong = frequencyLong;
		this->isRecurring = isRecurring;
		this->receivedCount = receivedCount;
		this->seasonType = seasonType;
		this->isOneTimeConfirmed = isOneTimeConfirmed;
		this->registrationDate = registrationDate;
		this->receivedDate = receivedDate;
		this->nextDueDate = nextDueDate;
		this->notes = notes;
		this->isActive = isActive;
		this->createdAt = createdAt;
		this->updatedAt = updatedAt;
		this->caseName = caseName;
	}

	// Constructor 2: للإضافة فقط (بدون id و CaseName)
	InKindAid(int caseID, String^ aidType, String^ aidContent, String^ frequencyLong,
		bool isRecurring, int receivedCount, String^ seasonType, bool isOneTimeConfirmed,
		DateTime registrationDate, DateTime receivedDate, DateTime nextDueDate,
		String^ notes, bool isActive, DateTime createdAt, DateTime updatedAt)
	{
		this->caseID = caseID;
		this->aidType = aidType;
		this->aidContent = aidContent;
		this->frequencyLong = frequencyLong;
		this->isRecurring = isRecurring;
		this->receivedCount = receivedCount;
		this->seasonType = seasonType;
		this->isOneTimeConfirmed = isOneTimeConfirmed;
		this->registrationDate = registrationDate;
		this->receivedDate = receivedDate;
		this->nextDueDate = nextDueDate;
		this->notes = notes;
		this->isActive = isActive;
		this->createdAt = createdAt;
		this->updatedAt = updatedAt;
	}

	// Properties
	property int ID {
		int get() { return id; }
		void set(int value) { id = value; }
	}

	property int CaseID {
		int get() { return caseID; }
		void set(int value) { caseID = value; }
	}

	property String^ AidType {
		String^ get() { return aidType; }
		void set(String^ value) { aidType = value; }
	}

	property String^ AidContent {
		String^ get() { return aidContent; }
		void set(String^ value) { aidContent = value; }
	}

	property String^ FrequencyLong {
		String^ get() { return frequencyLong; }
		void set(String^ value) { frequencyLong = value; }
	}

	property bool IsRecurring {
		bool get() { return isRecurring; }
		void set(bool value) { isRecurring = value; }
	}

	property int ReceivedCount {
		int get() { return receivedCount; }
		void set(int value) { receivedCount = value; }
	}

	property String^ SeasonType {
		String^ get() { return seasonType; }
		void set(String^ value) { seasonType = value; }
	}

	property bool IsOneTimeConfirmed {
		bool get() { return isOneTimeConfirmed; }
		void set(bool value) { isOneTimeConfirmed = value; }
	}

	property DateTime RegistrationDate {
		DateTime get() { return registrationDate; }
		void set(DateTime value) { registrationDate = value; }
	}

	property DateTime ReceivedDate {
		DateTime get() { return receivedDate; }
		void set(DateTime value) { receivedDate = value; }
	}

	property DateTime NextDueDate {
		DateTime get() { return nextDueDate; }
		void set(DateTime value) { nextDueDate = value; }
	}

	property String^ Notes {
		String^ get() { return notes; }
		void set(String^ value) { notes = value; }
	}

	property bool IsActive {
		bool get() { return isActive; }
		void set(bool value) { isActive = value; }
	}

	property DateTime CreatedAt {
		DateTime get() { return createdAt; }
		void set(DateTime value) { createdAt = value; }
	}

	property DateTime UpdatedAt {
		DateTime get() { return updatedAt; }
		void set(DateTime value) { updatedAt = value; }
	}

	property String^ CaseName {
		String^ get() { return caseName; }
		void set(String^ value) { caseName = value; }
	}
};
