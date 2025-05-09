-- Create By Ahmed Mohamed Ahmed 
Go
	IF NOT EXISTS (SELECT name FROM sys.databases WHERE name = 'Ehsan')
		BEGIN
			CREATE DATABASE Ehsan;
		END
Go

Go
	Use Ehsan;
Go
-- Create By Ahmed Mohamed Ahmed 
Go 
	CREATE TABLE  Cases (
		ID INT IDENTITY(1,1) PRIMARY KEY, 
		NationalID NVARCHAR(14) UNIQUE,  
		FName NVARCHAR(50) NOT NULL,  
		LName NVARCHAR(50) NOT NULL,  
		NickName NVARCHAR(50),  
		-- Gender: 0 = Female, 1 = Male (default = 0 Female)
		Gender BIT DEFAULT 0,  
		BirthDate DATE,  
		-- This will be a selectable field in the application to ensure consistency in area names
		Area NVARCHAR(100),  
		Street NVARCHAR(100),  
		-- Marital status, predefined values such as:
		-- ("Single", "Married", "Married with dependents", "Divorced", "Divorced with dependents", "Widowed", "Widowed with dependents")
		MaritalStatus NVARCHAR(100),  
		-- Father's and mother's status: 0 = Deceased, 1 = Alive (default = 0 Deceased)
		FatherStatus BIT DEFAULT 0,  
		MotherStatus BIT DEFAULT 0,  
		-- Number of male and female children, stored as TINYINT (0-255)
		MaleChildren TINYINT DEFAULT 0,  
		FemaleChildren TINYINT DEFAULT 0,  
		-- Activity status: 0 = Inactive, 1 = Active (default = 1 Active)
		IsActive BIT DEFAULT 1  
	);

Go 

-- Create By Ahmed Mohamed Ahmed 
GO
	Create Table SeasonallFinancalAid(
        ID INT IDENTITY(1,1) PRIMARY KEY, 
        CaseID INT NOT NULL, 
        SeasonType NVARCHAR(100) NOT NULL,  
        Amount DECIMAL(18,2) NOT NULL,  
        RegistrationDate DATE NOT NULL,  
        ReceivedDate DATE,  
        Notes NVARCHAR(MAX),  
        CONSTRAINT FK_SeasonalFinancialAid_Cases FOREIGN KEY (CaseID) 
        REFERENCES Cases(ID) ON DELETE NO ACTION ON UPDATE CASCADE
	);
GO

-- Create By Ahmed Mohamed Ahmed 
GO
	CREATE TABLE SeasonalInKidAid (
		ID INT IDENTITY(1,1) PRIMARY KEY, 
		CaseID INT NOT NULL, 
		SeasonTypes NVARCHAR(100) NOT NULL,  
		AidType NVARCHAR(100) NOT NULL,  
		RegistrationDate DATE NOT NULL,  
		ReceivedDate DATE,  
		Notes NVARCHAR(MAX),  
		CONSTRAINT FK_SeasonalInKidAid_Cases FOREIGN KEY (CaseID) 
		REFERENCES Cases(ID) ON DELETE NO ACTION ON UPDATE CASCADE
	);
GO

-- Create By Ahmed Mohamed Ahmed 
GO
	CREATE TABLE InKindAid (
		ID INT IDENTITY(1,1) PRIMARY KEY, 
		CaseID INT NOT NULL, 
		AidContent NVARCHAR(255) NOT NULL,  
		Frequency NVARCHAR(50) NOT NULL,  
		RegistrationDate DATE NOT NULL,  
		NextDueDate DATE,  
		ReceivedCount INT DEFAULT 0,  
		IsActive BIT NOT NULL DEFAULT 1,  
		CONSTRAINT FK_InKindAid_Cases FOREIGN KEY (CaseID) 
		REFERENCES Cases(ID) ON DELETE NO ACTION ON UPDATE CASCADE
	);
GO

-- Create By Ahmed Mohamed Ahmed 
GO
	CREATE TABLE SpecialAid (
		ID INT IDENTITY(1,1) PRIMARY KEY, 
		CaseID INT NOT NULL, 
		AidType NVARCHAR(100) NOT NULL,  
		Amount DECIMAL(18,2) NOT NULL,  
		RegistrationDate DATE NOT NULL,  
		ReceivedDate DATE,  
		CONSTRAINT FK_SpecialAid_Cases FOREIGN KEY (CaseID) 
		REFERENCES Cases(ID) ON DELETE NO ACTION ON UPDATE CASCADE
	);
GO

-- Create By Ahmed Mohamed Ahmed 
GO
	CREATE TABLE FinancialAid (
		ID INT IDENTITY(1,1) PRIMARY KEY, 
		CaseID INT NOT NULL, 
		AidType NVARCHAR(100) NOT NULL,  
		Frequency NVARCHAR(50) NOT NULL,  
		RegistrationDate DATE NOT NULL,  
		NextDueDate DATE,  
		Amount DECIMAL(18,2) NOT NULL,  
		ReceivedCount INT DEFAULT 0,  
		IsActive BIT NOT NULL DEFAULT 1,  
		CONSTRAINT FK_FinancialAid_Cases FOREIGN KEY (CaseID) 
		REFERENCES Cases(ID) ON DELETE NO ACTION ON UPDATE CASCADE
	);
GO
