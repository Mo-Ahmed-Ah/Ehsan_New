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
    static void AddCase(Cases^ c)
    {
        Connect();
        String^ query = "INSERT INTO Cases (NationalID, FName, LName, NickName, Gender, BirthDate, Area, Street, MaritalStatus, FatherStatus, MotherStatus, MaleChildren, FemaleChildren, IsActive) " +
            "VALUES (@NationalID, @FName, @LName, @NickName, @Gender, @BirthDate, @Area, @Street, @MaritalStatus, @FatherStatus, @MotherStatus, @MaleChildren, @FemaleChildren, @IsActive)";
        SqlCommand^ cmd = gcnew SqlCommand(query, sqlConn);

        cmd->Parameters->AddWithValue("@NationalID", c->NationalID);
        cmd->Parameters->AddWithValue("@FName", c->FName);
        cmd->Parameters->AddWithValue("@LName", c->LName);
        cmd->Parameters->AddWithValue("@NickName", c->NickName == nullptr ? DBNull::Value : (Object^)c->NickName);
        cmd->Parameters->AddWithValue("@Gender", c->Gender.HasValue ? (Object^)c->Gender.Value : DBNull::Value);
        cmd->Parameters->AddWithValue("@BirthDate", c->BirthDate.HasValue ? (Object^)c->BirthDate.Value : DBNull::Value);
        cmd->Parameters->AddWithValue("@Area", c->Area == nullptr ? DBNull::Value : (Object^)c->Area);
        cmd->Parameters->AddWithValue("@Street", c->Street == nullptr ? DBNull::Value : (Object^)c->Street);
        cmd->Parameters->AddWithValue("@MaritalStatus", c->MaritalStatus == nullptr ? DBNull::Value : (Object^)c->MaritalStatus);
        cmd->Parameters->AddWithValue("@FatherStatus", c->FatherStatus.HasValue ? (Object^)c->FatherStatus.Value : DBNull::Value);
        cmd->Parameters->AddWithValue("@MotherStatus", c->MotherStatus.HasValue ? (Object^)c->MotherStatus.Value : DBNull::Value);
        cmd->Parameters->AddWithValue("@MaleChildren", c->MaleChildren.HasValue ? (Object^)c->MaleChildren.Value : DBNull::Value);
        cmd->Parameters->AddWithValue("@FemaleChildren", c->FemaleChildren.HasValue ? (Object^)c->FemaleChildren.Value : DBNull::Value);
        cmd->Parameters->AddWithValue("@IsActive", c->IsActive.HasValue ? (Object^)c->IsActive.Value : DBNull::Value);

        cmd->ExecuteNonQuery();
        Disconnect();
    }


    // دالة حذف حالة
    static void DeleteCase(int id)
    {
        Connect();
        String^ query = "DELETE FROM Cases WHERE ID = @ID";
        SqlCommand^ cmd = gcnew SqlCommand(query, sqlConn);
        cmd->Parameters->AddWithValue("@ID", id);
        cmd->ExecuteNonQuery();
        Disconnect();
    }

    // دالة جلب كل الحالات
    static List<Cases^>^ GetAllCases()
    {
        Connect();
        String^ query = "SELECT * FROM Cases";
        SqlCommand^ cmd = gcnew SqlCommand(query, sqlConn);
        SqlDataReader^ reader = cmd->ExecuteReader();

        List<Cases^>^ casesList = gcnew List<Cases^>();

        while (reader->Read())
        {
            Cases^ c = gcnew Cases(
                reader->IsDBNull(0) ? Nullable<int>() : reader->GetInt32(0),
                reader->IsDBNull(1) ? nullptr : reader->GetString(1),
                reader->IsDBNull(2) ? nullptr : reader->GetString(2),
                reader->IsDBNull(3) ? nullptr : reader->GetString(3),
                reader->IsDBNull(4) ? nullptr : reader->GetString(4),
                reader->IsDBNull(5) ? Nullable<bool>() : reader->GetBoolean(5),
                reader->IsDBNull(6) ? Nullable<DateTime>() : reader->GetDateTime(6),
                reader->IsDBNull(7) ? nullptr : reader->GetString(7),
                reader->IsDBNull(8) ? nullptr : reader->GetString(8),
                reader->IsDBNull(9) ? nullptr : reader->GetString(9),
                reader->IsDBNull(10) ? Nullable<bool>() : reader->GetBoolean(10),
                reader->IsDBNull(11) ? Nullable<bool>() : reader->GetBoolean(11),
                reader->IsDBNull(12) ? Nullable<Byte>() : reader->GetByte(12),
                reader->IsDBNull(13) ? Nullable<Byte>() : reader->GetByte(13),
                reader->IsDBNull(14) ? Nullable<bool>() : reader->GetBoolean(14)
            );
            casesList->Add(c);
        }

        reader->Close();
        Disconnect();
        return casesList;
    }


    // دالة بحث باستخدام معايير متعددة
    static List<Cases^>^ SearchCases(String^ name, Nullable<bool> gender, String^ area)
    {
        Connect();
        String^ query = "SELECT * FROM Cases WHERE 1=1";
        SqlCommand^ cmd = gcnew SqlCommand();
        cmd->Connection = sqlConn;

        if (!String::IsNullOrEmpty(name))
        {
            query += " AND (FName LIKE @Name OR LName LIKE @Name)";
            cmd->Parameters->AddWithValue("@Name", "%" + name + "%");
        }

        if (gender.HasValue)
        {
            query += " AND Gender = @Gender";
            cmd->Parameters->AddWithValue("@Gender", gender.Value);
        }

        if (!String::IsNullOrEmpty(area))
        {
            query += " AND Area LIKE @Area";
            cmd->Parameters->AddWithValue("@Area", "%" + area + "%");
        }

        cmd->CommandText = query;
        SqlDataReader^ reader = cmd->ExecuteReader();
        List<Cases^>^ result = gcnew List<Cases^>();

        while (reader->Read())
        {
            Cases^ c = gcnew Cases(
                reader->IsDBNull(0) ? Nullable<int>() : reader->GetInt32(0),
                reader->IsDBNull(1) ? nullptr : reader->GetString(1),
                reader->IsDBNull(2) ? nullptr : reader->GetString(2),
                reader->IsDBNull(3) ? nullptr : reader->GetString(3),
                reader->IsDBNull(4) ? nullptr : reader->GetString(4),
                reader->IsDBNull(5) ? Nullable<bool>() : reader->GetBoolean(5),
                reader->IsDBNull(6) ? Nullable<DateTime>() : reader->GetDateTime(6),
                reader->IsDBNull(7) ? nullptr : reader->GetString(7),
                reader->IsDBNull(8) ? nullptr : reader->GetString(8),
                reader->IsDBNull(9) ? nullptr : reader->GetString(9),
                reader->IsDBNull(10) ? Nullable<bool>() : reader->GetBoolean(10),
                reader->IsDBNull(11) ? Nullable<bool>() : reader->GetBoolean(11),
                reader->IsDBNull(12) ? Nullable<Byte>() : reader->GetByte(12),
                reader->IsDBNull(13) ? Nullable<Byte>() : reader->GetByte(13),
                reader->IsDBNull(14) ? Nullable<bool>() : reader->GetBoolean(14)
            );
            result->Add(c);
        }

        reader->Close();
        Disconnect();
        return result;
    }

    // دالة إلغاء التفعيل
    static void DeactivateCase(int id)
    {
        Connect();
        String^ query = "UPDATE Cases SET IsActive = 0 WHERE ID = @ID";
        SqlCommand^ cmd = gcnew SqlCommand(query, sqlConn);
        cmd->Parameters->AddWithValue("@ID", id);
        cmd->ExecuteNonQuery();
        Disconnect();
    }

    // دالة التحقق من تفعيل الحالة
    static bool IsCaseActive(int id)
    {
        Connect();
        String^ query = "SELECT IsActive FROM Cases WHERE ID = @ID";
        SqlCommand^ cmd = gcnew SqlCommand(query, sqlConn);
        cmd->Parameters->AddWithValue("@ID", id);
        Object^ result = cmd->ExecuteScalar();
        Disconnect();

        return result != nullptr && Convert::ToBoolean(result);
    }

    //SeasonalFinancialAid

    static void AddAid(SqlConnection^ connection, SeasonalFinancialAid^ aid)
    {
        String^ query = "INSERT INTO SeasonalFinancialAid (CaseID, SeasonType, Amount, RegistrationDate, ReceivedDate, Notes, CaseName) "
            "VALUES (@CaseID, @SeasonType, @Amount, @RegistrationDate, @ReceivedDate, @Notes, @CaseName)";
        SqlCommand^ command = gcnew SqlCommand(query, connection);

        command->Parameters->AddWithValue("@CaseID", aid->CaseID);
        command->Parameters->AddWithValue("@SeasonType", aid->SeasonType);
        command->Parameters->AddWithValue("@Amount", aid->Amount);
        command->Parameters->AddWithValue("@RegistrationDate", aid->RegistrationDate);

        if (aid->ReceivedDate.HasValue)
            command->Parameters->AddWithValue("@ReceivedDate", aid->ReceivedDate.Value);
        else
            command->Parameters->AddWithValue("@ReceivedDate", DBNull::Value);

        command->Parameters->AddWithValue("@Notes", String::IsNullOrEmpty(aid->Notes) ? (Object^)DBNull::Value : aid->Notes);
        command->Parameters->AddWithValue("@CaseName", aid->CaseName);

        command->ExecuteNonQuery();
    }

    static List<SeasonalFinancialAid^>^ GetAllAids(SqlConnection^ connection)
    {
        List<SeasonalFinancialAid^>^ aidList = gcnew List<SeasonalFinancialAid^>();
        String^ query = "SELECT * FROM SeasonalFinancialAid";
        SqlCommand^ command = gcnew SqlCommand(query, connection);
        SqlDataReader^ reader = command->ExecuteReader();

        while (reader->Read())
        {
            int ID = reader->GetInt32(0);
            int CaseID = reader->GetInt32(1);
            String^ SeasonType = reader->GetString(2);
            Decimal Amount = reader->GetDecimal(3);
            DateTime RegistrationDate = reader->GetDateTime(4);

            Nullable<DateTime> ReceivedDate = reader->IsDBNull(5) ? Nullable<DateTime>() : reader->GetDateTime(5);
            String^ Notes = reader->IsDBNull(6) ? nullptr : reader->GetString(6);
            String^ CaseName = reader->GetString(7);

            SeasonalFinancialAid^ aid = gcnew SeasonalFinancialAid(ID, CaseID, SeasonType, Amount, ReceivedDate, Notes, CaseName);
            aidList->Add(aid);
        }

        reader->Close();
        return aidList;
    }

    static SeasonalFinancialAid^ FindAidByID(SqlConnection^ connection, int id)
    {
        String^ query = "SELECT * FROM SeasonalFinancialAid WHERE ID = @ID";
        SqlCommand^ command = gcnew SqlCommand(query, connection);
        command->Parameters->AddWithValue("@ID", id);

        SqlDataReader^ reader = command->ExecuteReader();
        SeasonalFinancialAid^ aid = nullptr;

        if (reader->Read())
        {
            int ID = reader->GetInt32(0);
            int CaseID = reader->GetInt32(1);
            String^ SeasonType = reader->GetString(2);
            Decimal Amount = reader->GetDecimal(3);
            DateTime RegistrationDate = reader->GetDateTime(4);
            Nullable<DateTime> ReceivedDate = reader->IsDBNull(5) ? Nullable<DateTime>() : reader->GetDateTime(5);
            String^ Notes = reader->IsDBNull(6) ? nullptr : reader->GetString(6);
            String^ CaseName = reader->GetString(7);

            aid = gcnew SeasonalFinancialAid(ID, CaseID, SeasonType, Amount, ReceivedDate, Notes, CaseName);
        }

        reader->Close();
        return aid;
    }


};
