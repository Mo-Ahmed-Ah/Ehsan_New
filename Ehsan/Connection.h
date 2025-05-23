#pragma once
#include "Cases.h"
#include "FinancialAid.h"
#include "InKindAid.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

ref class Connection
{
private:
    static SqlConnection^ sqlConn = nullptr;

    static void Connect()
    {
        if (sqlConn == nullptr)
        {
            String^ connectionString = "Data Source=localhost;Initial Catalog=Ehsan;Integrated Security=True;Encrypt=False";
            sqlConn = gcnew SqlConnection(connectionString);
        }

        if (sqlConn->State != System::Data::ConnectionState::Open)
        {
            try
            {
                sqlConn->Open();
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("\u062e\u0637\u0623 \u0641\u064a \u0627\u0644\u0627\u062a\u0635\u0627\u0644 \u0628\u0642\u0627\u0639\u062f\u0629 \u0627\u0644\u0628\u064a\u0627\u0646\u0627\u062a: " + ex->Message);
            }
        }
    }

    static void Disconnect()
    {
        if (sqlConn != nullptr && sqlConn->State == ConnectionState::Open)
        {
            sqlConn->Close();
        }
    }

    static property SqlConnection^ SqlConn
    {
        SqlConnection^ get()
        {
            return sqlConn;
        }
    }

public:
    // دالة إضافة حالة جديدة
    // دالة إضافة حالة جديدة إلى جدول Cases
    static void AddCase(Cases^ c)
    {
        Connect(); // فتح الاتصال بقاعدة البيانات

        String^ query = "INSERT INTO Cases (NationalID, FName, LName, NickName, PhoneNumber, Gender, BirthDate, Area, Street, MaritalStatus, FatherStatus, MotherStatus, MaleChildren, FemaleChildren, CreatedAt, UpdatedAt, IsActive) " +
            "VALUES (@NationalID, @FName, @LName, @NickName, @PhoneNumber, @Gender, @BirthDate, @Area, @Street, @MaritalStatus, @FatherStatus, @MotherStatus, @MaleChildren, @FemaleChildren, @CreateAt, @UpdateAt, @IsActive)";

        SqlCommand^ cmd = gcnew SqlCommand(query, sqlConn);

        // تعبئة المعاملات بالقيم من الكائن c
        cmd->Parameters->AddWithValue("@NationalID", c->NationalID);
        cmd->Parameters->AddWithValue("@FName", c->FName);
        cmd->Parameters->AddWithValue("@LName", c->LName);
        cmd->Parameters->AddWithValue("@NickName", String::IsNullOrEmpty(c->NickName) ? (Object^)DBNull::Value : c->NickName);
        cmd->Parameters->AddWithValue("@PhoneNumber", String::IsNullOrEmpty(c->PhoneNumber) ? (Object^)DBNull::Value : c->PhoneNumber);
        cmd->Parameters->AddWithValue("@Gender", c->Gender.HasValue ? (Object^)c->Gender.Value : DBNull::Value);
        cmd->Parameters->AddWithValue("@BirthDate", c->BirthDate.HasValue ? (Object^)c->BirthDate.Value : DBNull::Value);
        cmd->Parameters->AddWithValue("@Area", String::IsNullOrEmpty(c->Area) ? (Object^)DBNull::Value : c->Area);
        cmd->Parameters->AddWithValue("@Street", String::IsNullOrEmpty(c->Street) ? (Object^)DBNull::Value : c->Street);
        cmd->Parameters->AddWithValue("@MaritalStatus", String::IsNullOrEmpty(c->MaritalStatus) ? (Object^)DBNull::Value : c->MaritalStatus);
        cmd->Parameters->AddWithValue("@FatherStatus", c->FatherStatus.HasValue ? (Object^)c->FatherStatus.Value : DBNull::Value);
        cmd->Parameters->AddWithValue("@MotherStatus", c->MotherStatus.HasValue ? (Object^)c->MotherStatus.Value : DBNull::Value);
        cmd->Parameters->AddWithValue("@MaleChildren", c->MaleChildren.HasValue ? (Object^)c->MaleChildren.Value : DBNull::Value);
        cmd->Parameters->AddWithValue("@FemaleChildren", c->FemaleChildren.HasValue ? (Object^)c->FemaleChildren.Value : DBNull::Value);
        cmd->Parameters->AddWithValue("@CreateAt", c->CreateIN.HasValue ? (Object^)c->CreateIN.Value : DateTime::Now);
        cmd->Parameters->AddWithValue("@UpdateAt", c->UpdateIN.HasValue ? (Object^)c->UpdateIN.Value : DateTime::Now);
        cmd->Parameters->AddWithValue("@IsActive", c->IsActive.HasValue ? (Object^)c->IsActive.Value : true); // افتراضي: الحالة مفعلة

        try
        {
            cmd->ExecuteNonQuery();
            MessageBox::Show(L"تمت إضافة الحالة بنجاح.", L"نجاح", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
        catch (Exception^ ex)
        {
            MessageBox::Show(L"حدث خطأ أثناء إضافة الحالة: " + ex->Message, L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }

        Disconnect(); // إغلاق الاتصال بقاعدة البيانات
    }


    static List<Cases^>^ GetAllCases()
    {
        List<Cases^>^ casesList = gcnew List<Cases^>();
        Connect();

        String^ query = "SELECT * FROM Cases";
        SqlCommand^ cmd = gcnew SqlCommand(query, sqlConn);

        try
        {
            SqlDataReader^ reader = cmd->ExecuteReader();
            while (reader->Read())
            {
                Cases^ c = gcnew Cases(
                    reader->IsDBNull(reader->GetOrdinal("ID")) ? Nullable<int>() : reader->GetInt32(reader->GetOrdinal("ID")),
                    reader["NationalID"]->ToString(),
                    reader["FName"]->ToString(),
                    reader["LName"]->ToString(),
                    reader->IsDBNull(reader->GetOrdinal("NickName")) ? nullptr : reader["NickName"]->ToString(),
                    reader->IsDBNull(reader->GetOrdinal("PhoneNumber")) ? nullptr : reader["PhoneNumber"]->ToString(),
                    reader->IsDBNull(reader->GetOrdinal("Gender")) ? Nullable<bool>() : safe_cast<bool>(reader["Gender"]),
                    reader->IsDBNull(reader->GetOrdinal("BirthDate")) ? Nullable<DateTime>() : safe_cast<DateTime>(reader["BirthDate"]),
                    reader->IsDBNull(reader->GetOrdinal("Area")) ? nullptr : reader["Area"]->ToString(),
                    reader->IsDBNull(reader->GetOrdinal("Street")) ? nullptr : reader["Street"]->ToString(),
                    reader->IsDBNull(reader->GetOrdinal("MaritalStatus")) ? nullptr : reader["MaritalStatus"]->ToString(),
                    reader->IsDBNull(reader->GetOrdinal("FatherStatus")) ? Nullable<bool>() : safe_cast<bool>(reader["FatherStatus"]),
                    reader->IsDBNull(reader->GetOrdinal("MotherStatus")) ? Nullable<bool>() : safe_cast<bool>(reader["MotherStatus"]),
                    reader->IsDBNull(reader->GetOrdinal("MaleChildren")) ? Nullable<Byte>() : safe_cast<Byte>(reader["MaleChildren"]),
                    reader->IsDBNull(reader->GetOrdinal("FemaleChildren")) ? Nullable<Byte>() : safe_cast<Byte>(reader["FemaleChildren"]),
                    reader->IsDBNull(reader->GetOrdinal("IsActive")) ? Nullable<bool>() : safe_cast<bool>(reader["IsActive"]),
                    reader->IsDBNull(reader->GetOrdinal("CreatedAt")) ? Nullable<DateTime>() : safe_cast<DateTime>(reader["CreatedAt"]),
                    reader->IsDBNull(reader->GetOrdinal("UpdatedAt")) ? Nullable<DateTime>() : safe_cast<DateTime>(reader["UpdatedAt"])
                );

                casesList->Add(c);
            }

            reader->Close();
        }
        catch (Exception^ ex)
        {
            MessageBox::Show(L"حدث خطأ أثناء جلب الحالات: " + ex->Message, L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }

        Disconnect();
        return casesList;
    }

    static List<Cases^>^ GetAllCasesIsActive()
    {
        List<Cases^>^ casesList = gcnew List<Cases^>();
        Connect();

        String^ query = "SELECT * FROM Cases WHERE IsActive = 1";

        SqlCommand^ cmd = gcnew SqlCommand(query, sqlConn);

        try
        {
            SqlDataReader^ reader = cmd->ExecuteReader();
            while (reader->Read())
            {
                Cases^ c = gcnew Cases(
                    reader->IsDBNull(reader->GetOrdinal("ID")) ? Nullable<int>() : reader->GetInt32(reader->GetOrdinal("ID")),
                    reader["NationalID"]->ToString(),
                    reader["FName"]->ToString(),
                    reader["LName"]->ToString(),
                    reader->IsDBNull(reader->GetOrdinal("NickName")) ? nullptr : reader["NickName"]->ToString(),
                    reader->IsDBNull(reader->GetOrdinal("PhoneNumber")) ? nullptr : reader["PhoneNumber"]->ToString(),
                    reader->IsDBNull(reader->GetOrdinal("Gender")) ? Nullable<bool>() : safe_cast<bool>(reader["Gender"]),
                    reader->IsDBNull(reader->GetOrdinal("BirthDate")) ? Nullable<DateTime>() : safe_cast<DateTime>(reader["BirthDate"]),
                    reader->IsDBNull(reader->GetOrdinal("Area")) ? nullptr : reader["Area"]->ToString(),
                    reader->IsDBNull(reader->GetOrdinal("Street")) ? nullptr : reader["Street"]->ToString(),
                    reader->IsDBNull(reader->GetOrdinal("MaritalStatus")) ? nullptr : reader["MaritalStatus"]->ToString(),
                    reader->IsDBNull(reader->GetOrdinal("FatherStatus")) ? Nullable<bool>() : safe_cast<bool>(reader["FatherStatus"]),
                    reader->IsDBNull(reader->GetOrdinal("MotherStatus")) ? Nullable<bool>() : safe_cast<bool>(reader["MotherStatus"]),
                    reader->IsDBNull(reader->GetOrdinal("MaleChildren")) ? Nullable<Byte>() : safe_cast<Byte>(reader["MaleChildren"]),
                    reader->IsDBNull(reader->GetOrdinal("FemaleChildren")) ? Nullable<Byte>() : safe_cast<Byte>(reader["FemaleChildren"]),
                    reader->IsDBNull(reader->GetOrdinal("IsActive")) ? Nullable<bool>() : safe_cast<bool>(reader["IsActive"]),
                    reader->IsDBNull(reader->GetOrdinal("CreatedAt")) ? Nullable<DateTime>() : safe_cast<DateTime>(reader["CreatedAt"]),
                    reader->IsDBNull(reader->GetOrdinal("UpdatedAt")) ? Nullable<DateTime>() : safe_cast<DateTime>(reader["UpdatedAt"])
                );

                casesList->Add(c);
            }

            reader->Close();
        }
        catch (Exception^ ex)
        {
            MessageBox::Show(L"حدث خطأ أثناء جلب الحالات: " + ex->Message, L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }

        Disconnect();
        return casesList;
    }

    static void DeleteCaseIfNoAid(Nullable<int> id)
    {
        Connect();

        // استعلام جديد للتحقق من وجود مساعدات مرتبطة بالحالة في الجدول الموحد
        String^ checkQuery = "SELECT COUNT(*) FROM Aids WHERE CaseID = @ID";

        SqlCommand^ checkCmd = gcnew SqlCommand(checkQuery, sqlConn);
        checkCmd->Parameters->AddWithValue("@ID", id);

        try
        {
            int totalAidCount = safe_cast<int>(checkCmd->ExecuteScalar());

            if (totalAidCount > 0)
            {
                 MessageBox::Show(L"لا يمكن حذف الحالة لأنها مرتبطة بمساعدات مسجلة.", L"تنبيه", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            }
            else
            {
                // إذا لا توجد مساعدات، نحذف الحالة
                String^ deleteQuery = "DELETE FROM Cases WHERE ID = @ID";
                SqlCommand^ deleteCmd = gcnew SqlCommand(deleteQuery, sqlConn);
                deleteCmd->Parameters->AddWithValue("@ID", id);

                int rowsAffected = deleteCmd->ExecuteNonQuery();

                if (rowsAffected > 0)
                {
                    MessageBox::Show(L"تم حذف الحالة بنجاح.", L"نجاح", MessageBoxButtons::OK, MessageBoxIcon::Information);
                }
                else
                {
                    MessageBox::Show(L"لم يتم العثور على الحالة المطلوبة.", L"تنبيه", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                }
            }
        }
        catch (Exception^ ex)
        {
            MessageBox::Show(L"حدث خطأ أثناء عملية الحذف: " + ex->Message, L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
            
        }

        Disconnect();
    }


    static Cases^ GetCaseById(Nullable<int> id)
        {
            Connect(); // فتح الاتصال بقاعدة البيانات

            String^ query = "SELECT * FROM Cases WHERE ID = @ID";
            SqlCommand^ cmd = gcnew SqlCommand(query, sqlConn);
            cmd->Parameters->AddWithValue("@ID", id);

            try
            {
                SqlDataReader^ reader = cmd->ExecuteReader();

                if (reader->Read())
                {
                    Cases^ c = gcnew Cases(
                        reader->IsDBNull(reader->GetOrdinal("ID")) ? Nullable<int>() : reader->GetInt32(reader->GetOrdinal("ID")),
                        reader["NationalID"]->ToString(),
                        reader["FName"]->ToString(),
                        reader["LName"]->ToString(),
                        reader->IsDBNull(reader->GetOrdinal("NickName")) ? nullptr : reader["NickName"]->ToString(),
                        reader->IsDBNull(reader->GetOrdinal("PhoneNumber")) ? nullptr : reader["PhoneNumber"]->ToString(),
                        reader->IsDBNull(reader->GetOrdinal("Gender")) ? Nullable<bool>() : safe_cast<bool>(reader["Gender"]),
                        reader->IsDBNull(reader->GetOrdinal("BirthDate")) ? Nullable<DateTime>() : safe_cast<DateTime>(reader["BirthDate"]),
                        reader->IsDBNull(reader->GetOrdinal("Area")) ? nullptr : reader["Area"]->ToString(),
                        reader->IsDBNull(reader->GetOrdinal("Street")) ? nullptr : reader["Street"]->ToString(),
                        reader->IsDBNull(reader->GetOrdinal("MaritalStatus")) ? nullptr : reader["MaritalStatus"]->ToString(),
                        reader->IsDBNull(reader->GetOrdinal("FatherStatus")) ? Nullable<bool>() : safe_cast<bool>(reader["FatherStatus"]),
                        reader->IsDBNull(reader->GetOrdinal("MotherStatus")) ? Nullable<bool>() : safe_cast<bool>(reader["MotherStatus"]),
                        reader->IsDBNull(reader->GetOrdinal("MaleChildren")) ? Nullable<Byte>() : safe_cast<Byte>(reader["MaleChildren"]),
                        reader->IsDBNull(reader->GetOrdinal("FemaleChildren")) ? Nullable<Byte>() : safe_cast<Byte>(reader["FemaleChildren"]),
                        reader->IsDBNull(reader->GetOrdinal("IsActive")) ? Nullable<bool>() : safe_cast<bool>(reader["IsActive"]),
                        reader->IsDBNull(reader->GetOrdinal("CreatedAt")) ? Nullable<DateTime>() : safe_cast<DateTime>(reader["CreatedAt"]),
                        reader->IsDBNull(reader->GetOrdinal("UpdatedAt")) ? Nullable<DateTime>() : safe_cast<DateTime>(reader["UpdatedAt"])
                    );

                    reader->Close();
                    Disconnect();
                    return c;
                }
                else
                {
                    reader->Close();
                    Disconnect();
                    return nullptr; // لم يتم العثور على حالة
                }
            }
            catch (Exception^ ex)
            {
                MessageBox::Show(L"حدث خطأ أثناء جلب الحالة: " + ex->Message, L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
                Disconnect();
                return nullptr;
            }
        }

    static void DeactivateCase(Nullable<int> id , int activValue)
    {
        Connect(); // فتح الاتصال بقاعدة البيانات

        String^ query = "UPDATE Cases SET IsActive = @avtivValue, UpdatedAt = @UpdatedAt WHERE ID = @ID";
        SqlCommand^ cmd = gcnew SqlCommand(query, sqlConn);

        cmd->Parameters->AddWithValue("@ID", id);
        cmd->Parameters->AddWithValue("@avtivValue" , activValue),
        cmd->Parameters->AddWithValue("@UpdatedAt", DateTime::Now);

        try
        {
            int rowsAffected = cmd->ExecuteNonQuery();

            if (rowsAffected > 0)
            {
                if (activValue == 0) {
                    MessageBox::Show(L"تم إلغاء تفعيل الحالة بنجاح", L"نجاح",
                        MessageBoxButtons::OK, MessageBoxIcon::Information);
                }
                else {
                    MessageBox::Show(L"تم تفعيل الحالة بنجاح", L"نجاح",
                        MessageBoxButtons::OK, MessageBoxIcon::Information);
                }
                
            }
            else
            {
                MessageBox::Show(L"لم يتم العثور على الحالة المطلوبة", L"تحذير",
                    MessageBoxButtons::OK, MessageBoxIcon::Warning);
            }
        }
        catch (Exception^ ex)
        {
            MessageBox::Show(L"حدث خطأ أثناء محاولة إلغاء التفعيل: " + ex->Message,
                L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }

        Disconnect(); // إغلاق الاتصال
    }

    // جلب المساعدات المالية الموسمية النشطة مع اسم الحالة
    static List<FinancialAid^>^ GetTodayFinancialAids()
    {
        List<FinancialAid^>^ financialAids = gcnew List<FinancialAid^>();
        Connect();

        String^ query = "SELECT FA.*, C.FName + ' ' + C.LName AS CaseName "
            "FROM FinancialAid AS FA "
            "JOIN Cases AS C ON FA.CaseID = C.ID "
            "WHERE FA.IsActive = 1";

        SqlCommand^ cmd = gcnew SqlCommand(query, sqlConn);

        try
        {
            SqlDataReader^ reader = cmd->ExecuteReader();
            while (reader->Read())
            {
                FinancialAid^ aid = gcnew FinancialAid(
                    reader->GetInt32(reader->GetOrdinal("ID")),
                    reader->IsDBNull(reader->GetOrdinal("CaseID")) ? Nullable<int>() : reader->GetInt32(reader->GetOrdinal("CaseID")),
                    reader->IsDBNull(reader->GetOrdinal("AidType")) ? "" : reader["AidType"]->ToString(),
                    reader->IsDBNull(reader->GetOrdinal("Amount")) ? Nullable<Decimal>() : reader->GetDecimal(reader->GetOrdinal("Amount")),
                    reader->IsDBNull(reader->GetOrdinal("Frequency")) ? "" : reader["Frequency"]->ToString(),
                    reader->GetBoolean(reader->GetOrdinal("IsRecurring")),
                    reader->IsDBNull(reader->GetOrdinal("ReceivedCount")) ? Nullable<int>() : reader->GetInt32(reader->GetOrdinal("ReceivedCount")),
                    reader->IsDBNull(reader->GetOrdinal("SeasonType")) ? "" : reader["SeasonType"]->ToString(),
                    reader->GetBoolean(reader->GetOrdinal("IsOneTimeConfirmed")),
                    reader->GetDateTime(reader->GetOrdinal("RegistrationDate")),
                    reader->IsDBNull(reader->GetOrdinal("ReceivedDate")) ? DateTime::MinValue : reader->GetDateTime(reader->GetOrdinal("ReceivedDate")),
                    reader->IsDBNull(reader->GetOrdinal("NextDueDate")) ? DateTime::MinValue : reader->GetDateTime(reader->GetOrdinal("NextDueDate")),
                    reader->IsDBNull(reader->GetOrdinal("Notes")) ? "" : reader["Notes"]->ToString(),
                    reader->GetBoolean(reader->GetOrdinal("IsActive")),
                    reader->GetDateTime(reader->GetOrdinal("CreatedAt")),
                    reader->GetDateTime(reader->GetOrdinal("UpdatedAt")),
                    reader->IsDBNull(reader->GetOrdinal("CaseName")) ? "" : reader["CaseName"]->ToString()
                );


                financialAids->Add(aid);
            }
            reader->Close();
        }
        catch (Exception^ ex)
        {
            MessageBox::Show(L"حدث خطأ أثناء جلب المساعدات المالية: " + ex->Message, L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }

        Disconnect();
        return financialAids;
    }

    static List<InKindAid^>^ GetTodayInKindAids()
    {
        List<InKindAid^>^ inKindAids = gcnew List<InKindAid^>();
        Connect();

        String^ query = "SELECT InK.*, C.FName + ' ' + C.LName AS CaseName "
            "FROM InKindAid AS InK "
            "JOIN Cases AS C ON InK.CaseID = C.ID "
            "WHERE InK.IsActive = 1";

        SqlCommand^ cmd = gcnew SqlCommand(query, sqlConn);

        try
        {
            SqlDataReader^ reader = cmd->ExecuteReader();
            while (reader->Read())
            {

                int id = reader->GetInt32(reader->GetOrdinal("ID"));
                int caseID = reader->GetInt32(reader->GetOrdinal("CaseID"));
                String^ aidType = reader->IsDBNull(reader->GetOrdinal("AidType")) ? "" : reader["AidType"]->ToString();
                String^ aidContent = reader->IsDBNull(reader->GetOrdinal("AidContent")) ? "" : reader["AidContent"]->ToString();
                String^ frequency = reader["Frequency"]->ToString();
                bool isRecurring = reader->GetBoolean(reader->GetOrdinal("IsRecurring"));
                int receivedCount = reader->GetInt32(reader->GetOrdinal("ReceivedCount"));
                String^ seasonType = reader->IsDBNull(reader->GetOrdinal("SeasonType")) ? "" : reader["SeasonType"]->ToString();
                bool isOneTimeConfirmed = reader->GetBoolean(reader->GetOrdinal("IsOneTimeConfirmed"));
                DateTime registrationDate = reader->GetDateTime(reader->GetOrdinal("RegistrationDate"));

                DateTime receivedDate = reader->IsDBNull(reader->GetOrdinal("ReceivedDate")) ?
                    DateTime::MinValue : reader->GetDateTime(reader->GetOrdinal("ReceivedDate"));

                DateTime nextDueDate = reader->IsDBNull(reader->GetOrdinal("NextDueDate")) ?
                    DateTime::MinValue : reader->GetDateTime(reader->GetOrdinal("NextDueDate"));

                String^ notes = reader->IsDBNull(reader->GetOrdinal("Notes")) ? "" : reader["Notes"]->ToString();
                bool isActive = reader->GetBoolean(reader->GetOrdinal("IsActive"));

                DateTime createdAt = reader->IsDBNull(reader->GetOrdinal("CreatedAt")) ?
                    DateTime::MinValue : reader->GetDateTime(reader->GetOrdinal("CreatedAt"));

                DateTime updatedAt = reader->IsDBNull(reader->GetOrdinal("UpdatedAt")) ?
                    DateTime::MinValue : reader->GetDateTime(reader->GetOrdinal("UpdatedAt"));

                String^ caseName = reader["CaseName"]->ToString();

                InKindAid^ aid = gcnew InKindAid(
                    id, caseID, aidType, aidContent, frequency,
                    isRecurring, receivedCount, seasonType, isOneTimeConfirmed,
                    registrationDate, receivedDate, nextDueDate,
                    notes, isActive, createdAt, updatedAt, caseName
                );

                inKindAids->Add(aid);
            }
            reader->Close();
        }
        catch (Exception^ ex)
        {
            MessageBox::Show(L"حدث خطأ أثناء جلب المساعدات العينية: " + ex->Message, L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }

        Disconnect();
        return inKindAids;
    }

    static void ConfirmFinancialAidReceipt(int aidID, bool isRecurring, String^ frequency)
    {
        Connect();


        String^ query;

        if (!isRecurring)
        {
            query = "UPDATE FinancialAid SET IsOneTimeConfirmed = 1 WHERE ID = @AidID";
        }
        else
        {
            DateTime today = DateTime::Now;
            DateTime nextDueDate;

            if (frequency == L"شهرياً")
                nextDueDate = today.AddMonths(1);
            else if (frequency == L"أسبوعياً")
                nextDueDate = today.AddDays(7);
            else if (frequency == L"سنوياً")
                nextDueDate = today.AddYears(1);
            else if (frequency == L"يومياً")
                nextDueDate = today.AddDays(1);
            else
                nextDueDate = today;

            query = "UPDATE FinancialAid SET ReceivedDate = @Today, NextDueDate = @NextDueDate, ReceivedCount = ISNULL(ReceivedCount, 0) + 1 WHERE ID = @AidID";

            SqlCommand^ cmd = gcnew SqlCommand(query, sqlConn);
            cmd->Parameters->AddWithValue("@Today", today);
            cmd->Parameters->AddWithValue("@NextDueDate", nextDueDate);
            cmd->Parameters->AddWithValue("@AidID", aidID);

            try { cmd->ExecuteNonQuery(); }
            catch (Exception^ ex) { MessageBox::Show(L"خطأ: " + ex->Message); }

            Disconnect();
            return;
        }

        SqlCommand^ cmdSimple = gcnew SqlCommand(query, sqlConn);
        cmdSimple->Parameters->AddWithValue("@AidID", aidID);

        try { cmdSimple->ExecuteNonQuery(); }
        catch (Exception^ ex) { MessageBox::Show(L"خطأ: " + ex->Message); }
        Disconnect();
    }

    static void ConfirmInKindAidReceipt(int aidID, bool isRecurring, String^ frequency)
    {
        Connect();


        String^ query;

        if (!isRecurring)
        {
            MessageBox::Show(L" Connection تم تحديث حالة الاستلام بنجاح", L"تم", MessageBoxButtons::OK, MessageBoxIcon::Information);

            query = "UPDATE InKindAid SET IsOneTimeConfirmed = 1 WHERE ID = @AidID";
        }
        else
        {
            DateTime today = DateTime::Now;
            DateTime nextDueDate;

            if (frequency == L"شهرياً")
                nextDueDate = today.AddMonths(1);
            else if (frequency == L"أسبوعياً")
                nextDueDate = today.AddDays(7);
            else if (frequency == L"سنوياً")
                nextDueDate = today.AddYears(1);
            else if (frequency == L"يومياً")
                nextDueDate = today.AddDays(1);
            else
                nextDueDate = today;

            query = "UPDATE InKindAid SET ReceivedDate = @Today, NextDueDate = @NextDueDate, ReceivedCount = ISNULL(ReceivedCount, 0) + 1 WHERE ID = @AidID";

            SqlCommand^ cmd = gcnew SqlCommand(query, sqlConn);
            cmd->Parameters->AddWithValue("@Today", today);
            cmd->Parameters->AddWithValue("@NextDueDate", nextDueDate);
            cmd->Parameters->AddWithValue("@AidID", aidID);

            try { cmd->ExecuteNonQuery(); }
            catch (Exception^ ex) { MessageBox::Show(L"خطأ: " + ex->Message); }

            Disconnect();
            return;
        }

        SqlCommand^ cmdSimple = gcnew SqlCommand(query, sqlConn);
        cmdSimple->Parameters->AddWithValue("@AidID", aidID);

        try { cmdSimple->ExecuteNonQuery(); }
        catch (Exception^ ex) { MessageBox::Show(L"خطأ: " + ex->Message); }

        Disconnect();
    }

    static void AddFinancialAid(FinancialAid^ aid)
    {
        if (aid == nullptr)
        {
            MessageBox::Show(L"المساعدة المالية غير صالحة (null).", L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        try
        {
            Connect();

            String^ query = "INSERT INTO FinancialAid (CaseID, AidType, Amount, Frequency, IsRecurring, ReceivedCount, SeasonType, IsOneTimeConfirmed, RegistrationDate, Notes, IsActive) "
                "VALUES (@CaseID, @AidType, @Amount, @Frequency, @IsRecurring, @ReceivedCount, @SeasonType, @IsOneTimeConfirmed, @RegistrationDate, @Notes, @IsActive)";

            SqlCommand^ cmd = gcnew SqlCommand(query, sqlConn);

            cmd->Parameters->AddWithValue("@CaseID", aid->CaseID);
            cmd->Parameters->AddWithValue("@AidType", aid->AidType);
            cmd->Parameters->AddWithValue("@Amount", aid->Amount);
            cmd->Parameters->AddWithValue("@Frequency", aid->FrequencyLong);
            cmd->Parameters->AddWithValue("@IsRecurring", aid->IsRecurring);
            cmd->Parameters->AddWithValue("@ReceivedCount", aid->ReceivedCount.HasValue ? aid->ReceivedCount.Value : 0);
            cmd->Parameters->AddWithValue("@SeasonType", aid->SeasonType);
            cmd->Parameters->AddWithValue("@IsOneTimeConfirmed", aid->IsOneTimeConfirmed);
            cmd->Parameters->AddWithValue("@RegistrationDate", aid->RegistrationDate);
            cmd->Parameters->AddWithValue("@Notes", String::IsNullOrEmpty(aid->Notes) ? "" : aid->Notes);
            cmd->Parameters->AddWithValue("@IsActive", aid->IsActive);

            int rowsAffected = cmd->ExecuteNonQuery();

            if (rowsAffected > 0)
                MessageBox::Show(L"✅ تمت إضافة المساعدة المالية بنجاح.", L"نجاح", MessageBoxButtons::OK, MessageBoxIcon::Information);
            else
                MessageBox::Show(L"⚠️ لم تتم إضافة أي سجل. تحقق من صحة البيانات.", L"تنبيه", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        }
        catch (Exception^ ex)
        {
            MessageBox::Show(L"❌ خطأ أثناء إضافة المساعدة المالية:\n" + ex->Message, L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        Disconnect();
    }

    static void AddInKindAid(InKindAid^ aid)
    {
        if (aid == nullptr)
        {
            MessageBox::Show(L"المساعدة العينية غير صالحة (null).", L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        try
        {
            Connect();

            String^ query = "INSERT INTO InKindAid (CaseID, AidType, AidContent, Frequency, IsRecurring, ReceivedCount, SeasonType, IsOneTimeConfirmed, RegistrationDate, Notes, IsActive) "
                "VALUES (@CaseID, @AidType, @AidContent, @Frequency, @IsRecurring, @ReceivedCount, @SeasonType, @IsOneTimeConfirmed, @RegistrationDate, @Notes, @IsActive)";

            SqlCommand^ cmd = gcnew SqlCommand(query, sqlConn);

            cmd->Parameters->AddWithValue("@CaseID", aid->CaseID);
            cmd->Parameters->AddWithValue("@AidType", aid->AidType);
            cmd->Parameters->AddWithValue("@AidContent", aid->AidContent);
            cmd->Parameters->AddWithValue("@Frequency", aid->FrequencyLong);
            cmd->Parameters->AddWithValue("@IsRecurring", aid->IsRecurring);
            cmd->Parameters->AddWithValue("@ReceivedCount", aid->ReceivedCount.HasValue ? aid->ReceivedCount.Value : 0);
            cmd->Parameters->AddWithValue("@SeasonType", aid->SeasonType);
            cmd->Parameters->AddWithValue("@IsOneTimeConfirmed", aid->IsOneTimeConfirmed);
            cmd->Parameters->AddWithValue("@RegistrationDate", aid->RegistrationDate);
            cmd->Parameters->AddWithValue("@Notes", String::IsNullOrEmpty(aid->Notes) ? "" : aid->Notes);
            cmd->Parameters->AddWithValue("@IsActive", aid->IsActive);

            int rowsAffected = cmd->ExecuteNonQuery();

            if (rowsAffected > 0)
                MessageBox::Show(L"✅ تمت إضافة المساعدة العينية بنجاح.", L"نجاح", MessageBoxButtons::OK, MessageBoxIcon::Information);
            else
                MessageBox::Show(L"⚠️ لم تتم إضافة أي سجل. تحقق من صحة البيانات.", L"تنبيه", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        }
        catch (Exception^ ex)
        {
            MessageBox::Show(L"❌ خطأ أثناء إضافة المساعدة العينية:\n" + ex->Message, L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        Disconnect();
    }

    static int GetCaseIdByNationalID(String^ nationalID)
    {
        Connect(); // فتح الاتصال بقاعدة البيانات

        String^ query = "SELECT ID FROM Cases WHERE NationalID = @NationalID";
        SqlCommand^ cmd = gcnew SqlCommand(query, sqlConn);
        cmd->Parameters->AddWithValue("@NationalID", nationalID);

        try
        {
            Object^ result = cmd->ExecuteScalar();

            if (result != nullptr && result != DBNull::Value)
            {
                return Convert::ToInt32(result);
            }
            else
            {
                MessageBox::Show(L"لم يتم العثور على رقم قومي مطابق.", L"تنبيه", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                return -1; // لم يتم العثور
            }
        }
        catch (Exception^ ex)
        {
            MessageBox::Show(L"حدث خطأ أثناء البحث عن الحالة: " + ex->Message, L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return -1;
        }
        finally
        {
            Disconnect(); // إغلاق الاتصال بقاعدة البيانات
        }
    }



};
