#pragma once

using namespace System;

ref class Cases
{
private:
    Nullable<int> id;
    String^ nationalID;
    String^ fName = "";
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
    // Constructor with id
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
        this->nationalID = !String::IsNullOrEmpty(nationalID) ? nationalID : "";
        this->fName = !String::IsNullOrEmpty(fName) ? fName : "";
        this->lName = !String::IsNullOrEmpty(lName) ? lName : "";
        this->nickName = !String::IsNullOrEmpty(nickName) ? nickName : "";
        this->phoneNumber = !String::IsNullOrEmpty(phoneNumber) ? phoneNumber : "";
        this->gender = gender;
        this->birthDate = birthDate;
        this->area = !String::IsNullOrEmpty(area) ? area : "";
        this->street = !String::IsNullOrEmpty(street) ? street : "";
        this->maritalStatus = !String::IsNullOrEmpty(maritalStatus) ? maritalStatus : "";
        this->fatherStatus = fatherStatus;
        this->motherStatus = motherStatus;
        this->maleChildren = maleChildren;
        this->femaleChildren = femaleChildren;
        this->isActive = isActive;
        this->createIN = createIN;
        this->updateIN = updateIN;
    }

    // Constructor without id
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
        this->nationalID = !String::IsNullOrEmpty(nationalID) ? nationalID : "";
        this->fName = !String::IsNullOrEmpty(fName) ? fName : "";
        this->lName = !String::IsNullOrEmpty(lName) ? lName : "";
        this->nickName = !String::IsNullOrEmpty(nickName) ? nickName : "";
        this->phoneNumber = !String::IsNullOrEmpty(phoneNumber) ? phoneNumber : "";
        this->gender = gender;
        this->birthDate = birthDate;
        this->area = !String::IsNullOrEmpty(area) ? area : "";
        this->street = !String::IsNullOrEmpty(street) ? street : "";
        this->maritalStatus = !String::IsNullOrEmpty(maritalStatus) ? maritalStatus : "";
        this->fatherStatus = fatherStatus;
        this->motherStatus = motherStatus;
        this->maleChildren = maleChildren;
        this->femaleChildren = femaleChildren;
        this->isActive = isActive;
        this->createIN = createIN;
        this->updateIN = updateIN;
    }

    // Properties with null-checks
    property Nullable<int> ID {
        Nullable<int> get() { return id; }
        void set(Nullable<int> value) { id = value; }
    }

    property String^ NationalID {
        String^ get() { return nationalID; }
        void set(String^ value) { nationalID = !String::IsNullOrEmpty(value) ? value : ""; }
    }

    property String^ FName {
        String^ get() { return fName ? fName : ""; }
        void set(String^ value) { fName = !String::IsNullOrEmpty(value) ? value : ""; }
    }

    property String^ LName {
        String^ get() { return lName; }
        void set(String^ value) { lName = !String::IsNullOrEmpty(value) ? value : ""; }
    }

    property String^ NickName {
        String^ get() { return nickName; }
        void set(String^ value) { nickName = !String::IsNullOrEmpty(value) ? value : ""; }
    }

    property String^ PhoneNumber {
        String^ get() { return phoneNumber; }
        void set(String^ value) { phoneNumber = !String::IsNullOrEmpty(value) ? value : ""; }
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
        void set(String^ value) { area = !String::IsNullOrEmpty(value) ? value : ""; }
    }

    property String^ Street {
        String^ get() { return street; }
        void set(String^ value) { street = !String::IsNullOrEmpty(value) ? value : ""; }
    }

    property String^ MaritalStatus {
        String^ get() { return maritalStatus; }
        void set(String^ value) { maritalStatus = !String::IsNullOrEmpty(value) ? value : ""; }
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

    // Calculated Age property
    property Nullable<int> Age {
        Nullable<int> get() {
            if (birthDate.HasValue)
            {
                DateTime today = DateTime::Today;
                int age = today.Year - birthDate.Value.Year;
                if (today.Month < birthDate.Value.Month ||
                    (today.Month == birthDate.Value.Month && today.Day < birthDate.Value.Day))
                {
                    age--;
                }
                return age;
            }
            return Nullable<int>();
        }
    };
};
