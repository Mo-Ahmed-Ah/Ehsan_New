#pragma once
using namespace System;

ref class FinancialAid
{
private:
	int id;
	Nullable<int> caseID;
	String^ aidType;
	Nullable<Decimal> amount;
	String^ frequencyLong;
	bool isRecurring;
	Nullable<int> receivedCount;
	String^ seasonType;
	bool isOneTimeConfirmed;
	DateTime registrationDate;
	Nullable<DateTime> receivedDate;
	Nullable<DateTime> nextDueDate;
	String^ notes;
	bool isActive;
	DateTime createdAt;
	DateTime updatedAt;
	String^ caseName;

public:
	// Constructor with ID and CaseName
	FinancialAid(int id, Nullable<int> caseID, String^ aidType, Nullable<Decimal> amount, String^ frequencyLong,
		bool isRecurring, Nullable<int> receivedCount, String^ seasonType, bool isOneTimeConfirmed,
		DateTime registrationDate, Nullable<DateTime> receivedDate, Nullable<DateTime> nextDueDate,
		String^ notes, bool isActive, DateTime createdAt, DateTime updatedAt, String^ caseName)
	{
		this->id = id;
		this->caseID = caseID;
		this->aidType = aidType;
		this->amount = amount;
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

	// Constructor without ID and CaseName
	FinancialAid(Nullable<int> caseID, String^ aidType, Nullable<Decimal> amount, String^ frequencyLong,
		bool isRecurring, Nullable<int> receivedCount, String^ seasonType, bool isOneTimeConfirmed,
		DateTime registrationDate, Nullable<DateTime> receivedDate, Nullable<DateTime> nextDueDate,
		String^ notes, bool isActive, DateTime createdAt, DateTime updatedAt)
	{
		this->caseID = caseID;
		this->aidType = aidType;
		this->amount = amount;
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
	property int ID{
		int get() { return id; }
		void set(int value) { id = value; }
	}

		property Nullable<int> CaseID{
			Nullable<int> get() { return caseID; }
			void set(Nullable<int> value) { caseID = value; }
	}

		property String^ AidType{
			String ^ get() { return aidType; }
			void set(String ^ value) { aidType = value; }
	}

		property Nullable<Decimal> Amount{
			Nullable<Decimal> get() { return amount; }
			void set(Nullable<Decimal> value) { amount = value; }
	}

		property String^ FrequencyLong{
			String ^ get() { return frequencyLong; }
			void set(String ^ value) { frequencyLong = value; }
	}

		property bool IsRecurring{
			bool get() { return isRecurring; }
			void set(bool value) { isRecurring = value; }
	}

		property Nullable<int> ReceivedCount{
			Nullable<int> get() { return receivedCount; }
			void set(Nullable<int> value) { receivedCount = value; }
	}

		property String^ SeasonType{
			String ^ get() { return seasonType; }
			void set(String ^ value) { seasonType = value; }
	}

		property bool IsOneTimeConfirmed{
			bool get() { return isOneTimeConfirmed; }
			void set(bool value) { isOneTimeConfirmed = value; }
	}

		property DateTime RegistrationDate{
			DateTime get() { return registrationDate; }
			void set(DateTime value) { registrationDate = value; }
	}

		property Nullable<DateTime> ReceivedDate{
			Nullable<DateTime> get() { return receivedDate; }
			void set(Nullable<DateTime> value) { receivedDate = value; }
	}

		property Nullable<DateTime> NextDueDate{
			Nullable<DateTime> get() { return nextDueDate; }
			void set(Nullable<DateTime> value) { nextDueDate = value; }
	}

		property String^ Notes{
			String ^ get() { return notes; }
			void set(String ^ value) { notes = value; }
	}

		property bool IsActive{
			bool get() { return isActive; }
			void set(bool value) { isActive = value; }
	}

		property DateTime CreatedAt{
			DateTime get() { return createdAt; }
			void set(DateTime value) { createdAt = value; }
	}

		property DateTime UpdatedAt{
			DateTime get() { return updatedAt; }
			void set(DateTime value) { updatedAt = value; }
	}

		property String^ CaseName{
			String ^ get() { return caseName; }
			void set(String ^ value) { caseName = value; }
	}
};
