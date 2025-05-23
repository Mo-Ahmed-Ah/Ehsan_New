
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


/*
GO
	INSERT INTO Cases (
		NationalID, FName, LName, NickName, PhoneNumber,
		Gender, BirthDate, Area, Street, MaritalStatus,
		FatherStatus, MotherStatus, MaleChildren, FemaleChildren,
		IsActive, CreatedAt
	)
	VALUES
	(N'29801011234567', N'أحمد', N'علي', N'أبو ياسر', N'01012345678',
	 1, '1998-01-01', N'حلوان', N'شارع النصر', N'متزوج',
	 1, 1, 2, 1, 1, GETDATE()),

	(N'29902021234568', N'فاطمة', N'حسن', N'أم محمد', N'01098765432',
	 0, '1999-02-02', N'المعادي', N'شارع السلام', N'أرملة',
	 0, 1, 1, 2, 1, GETDATE()),

	(N'30003031234569', N'محمد', N'سعيد', N'أبو عمر', N'01056781234',
	 1, '2000-03-03', N'الهرم', N'شارع الملك فيصل', N'مطلق',
	 1, 0, 0, 0, 1, GETDATE());
GO

Go
-- إدراج مساعدات مالية لثلاث حالات مختلفة (يفترض وجود حالات بـ ID من 1 إلى 3)
	INSERT INTO FinancialAid (CaseID, AidType, Amount, Frequency, IsRecurring, RegistrationDate, Notes)
	VALUES
	(1, N'نقد شهري', 1000.00, N'شهري', 1, GETDATE(), N'مساعدة نقدية شهرية لحالة 1'),
	(2, N'زكاة', 1500.00, N'لمرة واحدة', 0, GETDATE(), N'زكاة رمضان لحالة 2'),
	(3, N'تبرع خاص', 750.00, N'أسبوعي', 1, GETDATE(), N'تبرع أسبوعي لحالة 3');
Go

Go
-- إدراج مساعدات عينية لثلاث حالات مختلفة (يفترض وجود حالات بـ ID من 1 إلى 3)
	INSERT INTO InKindAid (CaseID, AidType, AidContent, Frequency, IsRecurring, RegistrationDate, Notes)
	VALUES
	(1, N'بطانية', N'بطانية شتوية ثقيلة', N'لمرة واحدة', 0, GETDATE(), N'مساعدة شتوية لحالة 1'),
	(2, N'سلة غذائية', N'أرز، زيت، سكر، مكرونة', N'شهري', 1, GETDATE(), N'سلة غذاء دورية لحالة 2'),
	(3, N'ملابس عيد', N'ملابس جديدة للأطفال', N'موسمية', 0, GETDATE(), N'مساعدة موسمية بمناسبة العيد لحالة 3');
GO

*/
