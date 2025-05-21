#pragma once

using namespace System;

public ref class Aid
{
private:
    int _id;
    int _caseID;
    String^ _aidCategory;
    String^ _aidType;
    String^ _aidContent;
    String^ _frequency;
    bool _isRecurring;
    Nullable<Decimal> _amount;
    int _receivedCount;
    String^ _seasonType;
    DateTime _registrationDate;
    Nullable<DateTime> _receivedDate;
    Nullable<DateTime> _nextDueDate;
    String^ _notes;
    bool _isActive;
    DateTime _createdAt;
    Nullable<DateTime> _updatedAt;

public:
    // --- Constructor 1: البناء الافتراضي
    Aid()
    {
        ID = 0;
        CaseID = 0;
        AidCategory = "";
        AidType = "";
        AidContent = "";
        Frequency = "";
        IsRecurring = false;
        Amount = Nullable<Decimal>();
        ReceivedCount = 0;
        SeasonType = "";
        RegistrationDate = DateTime::Now;
        ReceivedDate = Nullable<DateTime>();
        NextDueDate = Nullable<DateTime>();
        Notes = "";
        IsActive = true;
        CreatedAt = DateTime::Now;
        UpdatedAt = Nullable<DateTime>();
    }

    // --- Constructor 2: للإضافة
    Aid(int caseID, String^ aidCategory, String^ aidType, String^ aidContent,
        String^ frequency, bool isRecurring, Nullable<Decimal> amount, int receivedCount,
        String^ seasonType, DateTime registrationDate,
        Nullable<DateTime> receivedDate, Nullable<DateTime> nextDueDate,
        String^ notes, bool isActive)
    {
        CaseID = caseID;
        AidCategory = aidCategory;
        AidType = aidType;
        AidContent = aidContent;
        Frequency = frequency;
        IsRecurring = isRecurring;
        Amount = amount;
        ReceivedCount = receivedCount;
        SeasonType = seasonType;
        RegistrationDate = registrationDate;
        ReceivedDate = receivedDate;
        NextDueDate = nextDueDate;
        Notes = notes;
        IsActive = isActive;
        CreatedAt = DateTime::Now;
        UpdatedAt = Nullable<DateTime>();
    }

    // --- Constructor 3: للتعديل (تضمين ID ووقت التحديث)
    Aid(int id, int caseID, String^ aidCategory, String^ aidType, String^ aidContent,
        String^ frequency, bool isRecurring, Nullable<Decimal> amount, int receivedCount,
        String^ seasonType, DateTime registrationDate,
        Nullable<DateTime> receivedDate, Nullable<DateTime> nextDueDate,
        String^ notes, bool isActive)
    {
        ID = id;
        CaseID = caseID;
        AidCategory = aidCategory;
        AidType = aidType;
        AidContent = aidContent;
        Frequency = frequency;
        IsRecurring = isRecurring;
        Amount = amount;
        ReceivedCount = receivedCount;
        SeasonType = seasonType;
        RegistrationDate = registrationDate;
        ReceivedDate = receivedDate;
        NextDueDate = nextDueDate;
        Notes = notes;
        IsActive = isActive;
        UpdatedAt = DateTime::Now;
    }

    // --- Constructor 4: لجلب البيانات من قاعدة البيانات بالكامل
    Aid(int id, int caseID, String^ aidCategory, String^ aidType, String^ aidContent,
        String^ frequency, bool isRecurring, Nullable<Decimal> amount, int receivedCount,
        String^ seasonType, DateTime registrationDate,
        Nullable<DateTime> receivedDate, Nullable<DateTime> nextDueDate,
        String^ notes, bool isActive, DateTime createdAt, Nullable<DateTime> updatedAt)
    {
        ID = id;
        CaseID = caseID;
        AidCategory = aidCategory;
        AidType = aidType;
        AidContent = aidContent;
        Frequency = frequency;
        IsRecurring = isRecurring;
        Amount = amount;
        ReceivedCount = receivedCount;
        SeasonType = seasonType;
        RegistrationDate = registrationDate;
        ReceivedDate = receivedDate;
        NextDueDate = nextDueDate;
        Notes = notes;
        IsActive = isActive;
        CreatedAt = createdAt;
        UpdatedAt = updatedAt;
    }

    // ID
    property int ID{
        int get() { return _id; }
        void set(int value) {
            if (value < 0) throw gcnew ArgumentException("ID must be non-negative.");
            _id = value;
        }
    }

        // CaseID
        property int CaseID{
            int get() { return _caseID; }
            void set(int value) {
                if (value <= 0) throw gcnew ArgumentException("CaseID must be positive.");
                _caseID = value;
            }
    }

        // AidCategory
        property String^ AidCategory{
            String ^ get() { return _aidCategory; }
            void set(String ^ value) {
                if (String::IsNullOrWhiteSpace(value)) throw gcnew ArgumentException("AidCategory is required.");
                _aidCategory = value;
            }
    }

        // AidType
        property String^ AidType{
            String ^ get() { return _aidType; }
            void set(String ^ value) { _aidType = value; }
    }

        // AidContent
        property String^ AidContent{
            String ^ get() { return _aidContent; }
            void set(String ^ value) { _aidContent = value; }
    }

        // Frequency
        property String^ Frequency{
            String ^ get() { return _frequency; }
            void set(String ^ value) { _frequency = value; }
    }

        // IsRecurring
        property bool IsRecurring{
            bool get() { return _isRecurring; }
            void set(bool value) { _isRecurring = value; }
    }

        // Amount
        property Nullable<Decimal> Amount{
            Nullable<Decimal> get() { return _amount; }
            void set(Nullable<Decimal> value) {
                if (value.HasValue && value.Value < 0) throw gcnew ArgumentException("Amount must be non-negative.");
                _amount = value;
            }
    }

        // ReceivedCount
        property int ReceivedCount{
            int get() { return _receivedCount; }
            void set(int value) {
                if (value < 0) throw gcnew ArgumentException("ReceivedCount cannot be negative.");
                _receivedCount = value;
            }
    }

        // SeasonType
        property String^ SeasonType{
            String ^ get() { return _seasonType; }
            void set(String ^ value) { _seasonType = value; }
    }

        // RegistrationDate
        property DateTime RegistrationDate{
            DateTime get() { return _registrationDate; }
            void set(DateTime value) { _registrationDate = value; }
    }

        // ReceivedDate
        property Nullable<DateTime> ReceivedDate{
            Nullable<DateTime> get() { return _receivedDate; }
            void set(Nullable<DateTime> value) {
                if (value.HasValue && value.Value < _registrationDate)
                    throw gcnew ArgumentException("ReceivedDate cannot be earlier than RegistrationDate.");
                _receivedDate = value;
            }
    }

        // NextDueDate
        property Nullable<DateTime> NextDueDate{
            Nullable<DateTime> get() { return _nextDueDate; }
            void set(Nullable<DateTime> value) { _nextDueDate = value; }
    }

        // Notes
        property String^ Notes{
            String ^ get() { return _notes; }
            void set(String ^ value) { _notes = value; }
    }

        // IsActive
        property bool IsActive{
            bool get() { return _isActive; }
            void set(bool value) { _isActive = value; }
    }

        // CreatedAt
        property DateTime CreatedAt{
            DateTime get() { return _createdAt; }
            void set(DateTime value) { _createdAt = value; }
    }

        // UpdatedAt
        property Nullable<DateTime> UpdatedAt{
            Nullable<DateTime> get() { return _updatedAt; }
            void set(Nullable<DateTime> value) { _updatedAt = value; }
    }

        // Default constructor
          /*  Aid() {
            _isRecurring = false;
            _receivedCount = 0;
            _isActive = true;
            _createdAt = DateTime::Now;
            _registrationDate = DateTime::Now;
        }*/
};
