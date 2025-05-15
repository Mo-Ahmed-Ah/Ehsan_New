#pragma once

using namespace System;

ref class Cases
{
private:
    Nullable<int> id;
    String^ nationalID;
    String^ fName;
    String^ lName;
    String^ nickName;
    String^ phoneNumber;
    Nullable<bool> gender;
    Nullable<DateTime> birthDate;
    String^ area;
    String^ street;
    String^ maritalStatus;
    Nullable<bool> fatherStatus;
    Nullable<bool> motherStatus;
    Nullable<Byte> maleChildren;
    Nullable<Byte> femaleChildren;
    Nullable<bool> isActive;
    Nullable<DateTime> createIN;
    Nullable<DateTime> updateIN;

public:

    Cases(
        Nullable<int> id,
        String^ nationalID,
        String^ fName,
        String^ lName,
        String^ nickName,
        String^ phoneNumber,
        Nullable<bool> gender,
        Nullable<DateTime> birthDate,
        String^ area,
        String^ street,
        String^ maritalStatus,
        Nullable<bool> fatherStatus,
        Nullable<bool> motherStatus,
        Nullable<Byte> maleChildren,
        Nullable<Byte> femaleChildren,
        Nullable<bool> isActive,
        Nullable<DateTime> createIN,
        Nullable<DateTime> updateIN
    )
    {
        this->id = id;
        this->nationalID = nationalID;
        this->fName = fName;
        this->lName = lName;
        this->nickName = nickName;
        this->phoneNumber = phoneNumber;
        this->gender = gender;
        this->birthDate = birthDate;
        this->area = area;
        this->street = street;
        this->maritalStatus = maritalStatus;
        this->fatherStatus = fatherStatus;
        this->motherStatus = motherStatus;
        this->maleChildren = maleChildren;
        this->femaleChildren = femaleChildren;
        this->isActive = isActive;
        this->createIN = createIN;
        this->updateIN = updateIN;
    }

    Cases(
        String^ nationalID,
        String^ fName,
        String^ lName,
        String^ nickName,
        String^ phoneNumber,
        Nullable<bool> gender,
        Nullable<DateTime> birthDate,
        String^ area,
        String^ street,
        String^ maritalStatus,
        Nullable<bool> fatherStatus,
        Nullable<bool> motherStatus,
        Nullable<Byte> maleChildren,
        Nullable<Byte> femaleChildren,
        Nullable<bool> isActive,
        Nullable<DateTime> createIN,
        Nullable<DateTime> updateIN
    )
    {
        this->nationalID = nationalID;
        this->fName = fName;
        this->lName = lName;
        this->nickName = nickName;
        this->phoneNumber = phoneNumber;
        this->gender = gender;
        this->birthDate = birthDate;
        this->area = area;
        this->street = street;
        this->maritalStatus = maritalStatus;
        this->fatherStatus = fatherStatus;
        this->motherStatus = motherStatus;
        this->maleChildren = maleChildren;
        this->femaleChildren = femaleChildren;
        this->isActive = isActive;
        this->createIN = createIN;
        this->updateIN = updateIN;
    }

    // ✅ Properties

    property Nullable<int> ID {
        Nullable<int> get() { return id; }
        void set(Nullable<int> value) { id = value; }
    }

    property String^ NationalID {
        String^ get() { return nationalID; }
        void set(String^ value) { nationalID = value; }
    }

    property String^ FName {
        String^ get() { return fName; }
        void set(String^ value) { fName = value; }
    }

    property String^ LName {
        String^ get() { return lName; }
        void set(String^ value) { lName = value; }
    }

    property String^ NickName {
        String^ get() { return nickName; }
        void set(String^ value) { nickName = value; }
    }

    property String^ PhoneNumber {
        String^ get() { return phoneNumber; }
        void set(String^ value) { phoneNumber = value; }
    }

    property Nullable<bool> Gender {
        Nullable<bool> get() { return gender; }
        void set(Nullable<bool> value) { gender = value; }
    }

    property Nullable<DateTime> BirthDate {
        Nullable<DateTime> get() { return birthDate; }
        void set(Nullable<DateTime> value) { birthDate = value; }
    }

    property String^ Area {
        String^ get() { return area; }
        void set(String^ value) { area = value; }
    }

    property String^ Street {
        String^ get() { return street; }
        void set(String^ value) { street = value; }
    }

    property String^ MaritalStatus {
        String^ get() { return maritalStatus; }
        void set(String^ value) { maritalStatus = value; }
    }

    property Nullable<bool> FatherStatus {
        Nullable<bool> get() { return fatherStatus; }
        void set(Nullable<bool> value) { fatherStatus = value; }
    }

    property Nullable<bool> MotherStatus {
        Nullable<bool> get() { return motherStatus; }
        void set(Nullable<bool> value) { motherStatus = value; }
    }

    property Nullable<Byte> MaleChildren {
        Nullable<Byte> get() { return maleChildren; }
        void set(Nullable<Byte> value) { maleChildren = value; }
    }

    property Nullable<Byte> FemaleChildren {
        Nullable<Byte> get() { return femaleChildren; }
        void set(Nullable<Byte> value) { femaleChildren = value; }
    }

    property Nullable<bool> IsActive {
        Nullable<bool> get() { return isActive; }
        void set(Nullable<bool> value) { isActive = value; }
    }

    property Nullable<DateTime> CreateIN {
        Nullable<DateTime> get() { return createIN; }
        void set(Nullable<DateTime> value) { createIN = value; }
    }

    property Nullable<DateTime> UpdateIN {
        Nullable<DateTime> get() { return updateIN; }
        void set(Nullable<DateTime> value) { updateIN = value; }
    }
};
