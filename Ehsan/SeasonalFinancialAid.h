#pragma once

using namespace System;

ref class SeasonalFinancialAid
{
private:
    int _ID;
    int _CaseID;
    String^ _SeasonType;
    Decimal _Amount;
    DateTime _RegistrationDate;
    Nullable<DateTime> _ReceivedDate;
    String^ _Notes;
    String^ _CaseName;

public:
    // Constructor
    SeasonalFinancialAid(int ID, int CaseID, String^ SeasonType, Decimal Amount, Nullable<DateTime> ReceivedDate, String^ Notes, String^ CaseName)
    {
        _ID = ID;
        _CaseID = CaseID;
        _SeasonType = SeasonType;
        _Amount = Amount;
        _RegistrationDate = ReceivedDate.HasValue ? ReceivedDate.Value : DateTime::Now;
        _ReceivedDate = ReceivedDate;
        _Notes = Notes;
        _CaseName = CaseName;
    }

    // Properties with Getters and Setters
    property int ID {
        int get() { return _ID; }
        void set(int value) { _ID = value; }
    }

    property int CaseID {
        int get() { return _CaseID; }
        void set(int value) { _CaseID = value; }
    }

    property String^ SeasonType {
        String^ get() { return _SeasonType; }
        void set(String^ value) { _SeasonType = value; }
    }

    property Decimal Amount {
        Decimal get() { return _Amount; }
        void set(Decimal value) { _Amount = value; }
    }

    property DateTime RegistrationDate {
        DateTime get() { return _RegistrationDate; }
        void set(DateTime value) { _RegistrationDate = value; }
    }

    property Nullable<DateTime> ReceivedDate {
        Nullable<DateTime> get() { return _ReceivedDate; }
        void set(Nullable<DateTime> value) { _ReceivedDate = value; }
    }

    property String^ Notes {
        String^ get() { return _Notes; }
        void set(String^ value) { _Notes = value; }
    }

    property String^ CaseName {
        String^ get() { return _CaseName; }
        void set(String^ value) { _CaseName = value; }
    }
};