#pragma once
#include "Cases.h"
#include "SeasonalFinancialAid.h"

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

        String^ query = "INSERT INTO Cases (NationalID, FName, LName, NickName, PhoneNumber, Gender, BirthDate, Area, Street, MaritalStatus, FatherStatus, MotherStatus, MaleChildren, FemaleChildren, CreateIN, UpdateIN, IsActive) " +
            "VALUES (@NationalID, @FName, @LName, @NickName, @PhoneNumber, @Gender, @BirthDate, @Area, @Street, @MaritalStatus, @FatherStatus, @MotherStatus, @MaleChildren, @FemaleChildren, @CreateIN, @UpdateIN, @IsActive)";

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
        cmd->Parameters->AddWithValue("@CreateIN", c->CreateIN.HasValue ? (Object^)c->CreateIN.Value : DateTime::Now);
        cmd->Parameters->AddWithValue("@UpdateIN", c->UpdateIN.HasValue ? (Object^)c->UpdateIN.Value : DateTime::Now);
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
                    reader->IsDBNull(reader->GetOrdinal("CreateIN")) ? Nullable<DateTime>() : safe_cast<DateTime>(reader["CreateIN"]),
                    reader->IsDBNull(reader->GetOrdinal("UpdateIN")) ? Nullable<DateTime>() : safe_cast<DateTime>(reader["UpdateIN"])
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

        static void DeleteCaseIfNoAid(int id)
        {
            Connect();

            // استعلام للتحقق من وجود مساعدات مرتبطة بالحالة
            String^ checkQuery =
                "SELECT " +
                "(SELECT COUNT(*) FROM SeasonalFinancialAid WHERE CaseID = @ID) + " +
                "(SELECT COUNT(*) FROM SeasonalInKindAid WHERE CaseID = @ID) + " +
                "(SELECT COUNT(*) FROM InKindAid WHERE CaseID = @ID) + " +
                "(SELECT COUNT(*) FROM SpecialAid WHERE CaseID = @ID) + " +
                "(SELECT COUNT(*) FROM FinancialAid WHERE CaseID = @ID) AS TotalAidCount";

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




};
