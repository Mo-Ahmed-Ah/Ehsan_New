
-- Create By Ahmed Mohamed Ahmed 
GO
	IF NOT EXISTS (SELECT name FROM sys.databases WHERE name = 'Ehsan')
		BEGIN
			CREATE DATABASE Ehsan;
		END
GO

USE Ehsan;
GO
	-- Table: Cases
	CREATE TABLE Cases (
		ID INT IDENTITY(1,1) PRIMARY KEY, 
		NationalID NVARCHAR(14) UNIQUE,  
		FName NVARCHAR(50) NOT NULL,  
		LName NVARCHAR(50) NOT NULL,  
		NickName NVARCHAR(50),  
		PhoneNumber NVARCHAR(11),
		Gender BIT DEFAULT 0,  -- 0: Female, 1: Male
		BirthDate DATE,  
		Area NVARCHAR(100),  
		Street NVARCHAR(100),  
		MaritalStatus NVARCHAR(100),  
		FatherStatus BIT DEFAULT 0,  
		MotherStatus BIT DEFAULT 0,  
		MaleChildren TINYINT DEFAULT 0,
		FemaleChildren TINYINT DEFAULT 0,  
		IsActive BIT DEFAULT 1,  
		CreatedAt DATETIME DEFAULT GETDATE(),
		UpdatedAt DATETIME,

		CONSTRAINT CHK_Gender CHECK (Gender IN (0,1)),
		CONSTRAINT CHK_FatherStatus CHECK (FatherStatus IN (0,1)),
		CONSTRAINT CHK_MotherStatus CHECK (MotherStatus IN (0,1))
	);
GO

CREATE INDEX IX_Cases_NationalID ON Cases(NationalID);
GO


GO
	CREATE TABLE FinancialAid (
		ID INT IDENTITY(1,1) PRIMARY KEY,
		CaseID INT NOT NULL,

		AidType NVARCHAR(100),         -- مثل: نقد شهري، زكاة
		Amount DECIMAL(18,2) NOT NULL,

		Frequency NVARCHAR(50),        -- شهري، أسبوعي، لمرة واحدة
		IsRecurring BIT DEFAULT 0,
		ReceivedCount INT DEFAULT 0,

		SeasonType NVARCHAR(100),      -- رمضان، عيد، شتاء...
		IsOneTimeConfirmed BIT DEFAULT 0,

		RegistrationDate DATE NOT NULL,
		ReceivedDate DATE,
		NextDueDate DATE,

		Notes NVARCHAR(1000),
		IsActive BIT DEFAULT 1,
		CreatedAt DATETIME DEFAULT GETDATE(),
		UpdatedAt DATETIME DEFAULT GETDATE(),

		FOREIGN KEY (CaseID) REFERENCES Cases(ID) ON DELETE CASCADE
	);
 GO

 GO
	 CREATE TABLE InKindAid (
		ID INT IDENTITY(1,1) PRIMARY KEY,
		CaseID INT NOT NULL,

		AidType NVARCHAR(100),         -- مثل: بطانية، سلة غذائية
		AidContent NVARCHAR(255),      -- التفاصيل: أرز وسكر، بطانية

		Frequency NVARCHAR(50),
		IsRecurring BIT DEFAULT 0,
		ReceivedCount INT DEFAULT 0,

		SeasonType NVARCHAR(100),
		IsOneTimeConfirmed BIT DEFAULT 0,

		RegistrationDate DATE NOT NULL,
		ReceivedDate DATE,
		NextDueDate DATE,

		Notes NVARCHAR(1000),
		IsActive BIT DEFAULT 1,
		CreatedAt DATETIME DEFAULT GETDATE(),
		UpdatedAt DATETIME,

		FOREIGN KEY (CaseID) REFERENCES Cases(ID) ON DELETE CASCADE
	);
GO



Select FA.*  , C.FName + ' ' + C.LName AS CaseName  From FinancialAid AS FA join Cases AS C on FA.CaseID = C.ID where FA.IsActive = 1;


