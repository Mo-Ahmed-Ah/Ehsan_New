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

-- Table: Volunteers
CREATE TABLE Volunteers (
    ID INT IDENTITY(1,1) PRIMARY KEY,
    FullName NVARCHAR(100) NOT NULL,
    NationalID NVARCHAR(14) UNIQUE NOT NULL,
    Phone NVARCHAR(20),
    Email NVARCHAR(100),
    JoinDate DATE DEFAULT GETDATE(),
    IsActive BIT DEFAULT 1
);
GO

-- Table: Visits (زيارات الحالات)
CREATE TABLE Visits (
    ID INT IDENTITY(1,1) PRIMARY KEY,
    CaseID INT NOT NULL,
    VisitDate DATE NOT NULL,
    Notes NVARCHAR(1000),
    VisitorName NVARCHAR(100),
    CreatedAt DATETIME DEFAULT GETDATE(),

    FOREIGN KEY (CaseID) REFERENCES Cases(ID) ON DELETE CASCADE
);
GO

-- Table: Orphans (الأيتام)
CREATE TABLE Orphans (
    ID INT IDENTITY(1,1) PRIMARY KEY,
    CaseID INT NOT NULL,
    FullName NVARCHAR(100) NOT NULL,
    BirthDate DATE NOT NULL,
    School NVARCHAR(100),
    Notes NVARCHAR(1000),

    FOREIGN KEY (CaseID) REFERENCES Cases(ID) ON DELETE CASCADE
);
GO

-- Table: Widows (الأرامل)
CREATE TABLE Widows (
    ID INT IDENTITY(1,1) PRIMARY KEY,
    CaseID INT NOT NULL,
    HusbandDeathDate DATE,
    NumberOfChildren INT DEFAULT 0,
    NeedsDescription NVARCHAR(1000),

    FOREIGN KEY (CaseID) REFERENCES Cases(ID) ON DELETE CASCADE
);
GO

-- Table: SeasonalFinancialAid
CREATE TABLE SeasonalFinancialAid (
    ID INT IDENTITY(1,1) PRIMARY KEY, 
    CaseID INT NOT NULL, 
    SeasonType NVARCHAR(100) NOT NULL,  
    Amount DECIMAL(18,2) NOT NULL,  
    RegistrationDate DATE NOT NULL,  
    ReceivedDate DATE,  
    Notes NVARCHAR(1000),  
    CreatedAt DATETIME DEFAULT GETDATE(),
    UpdatedAt DATETIME,

    CONSTRAINT FK_SFA_Cases FOREIGN KEY (CaseID) 
        REFERENCES Cases(ID) ON DELETE NO ACTION ON UPDATE CASCADE,
    CONSTRAINT CHK_SFA_ReceivedDate CHECK (ReceivedDate IS NULL OR ReceivedDate >= RegistrationDate)
);
GO

-- Table: SeasonalInKindAid
CREATE TABLE SeasonalInKindAid (
    ID INT IDENTITY(1,1) PRIMARY KEY, 
    CaseID INT NOT NULL, 
    SeasonType NVARCHAR(100) NOT NULL,  
    AidType NVARCHAR(100) NOT NULL,  
    RegistrationDate DATE NOT NULL,  
    ReceivedDate DATE,  
    Notes NVARCHAR(1000),  
    CreatedAt DATETIME DEFAULT GETDATE(),
    UpdatedAt DATETIME,

    CONSTRAINT FK_SIKA_Cases FOREIGN KEY (CaseID) 
        REFERENCES Cases(ID) ON DELETE NO ACTION ON UPDATE CASCADE,
    CONSTRAINT CHK_SIKA_ReceivedDate CHECK (ReceivedDate IS NULL OR ReceivedDate >= RegistrationDate)
);
GO

-- Table: InKindAid
CREATE TABLE InKindAid (
    ID INT IDENTITY(1,1) PRIMARY KEY, 
    CaseID INT NOT NULL, 
    AidContent NVARCHAR(255) NOT NULL,  
    Frequency NVARCHAR(50) NOT NULL,  
    RegistrationDate DATE NOT NULL,  
    NextDueDate DATE,  
    ReceivedCount INT DEFAULT 0,  
    IsActive BIT DEFAULT 1,  
    CreatedAt DATETIME DEFAULT GETDATE(),
    UpdatedAt DATETIME,

    CONSTRAINT FK_InKindAid_Cases FOREIGN KEY (CaseID) 
        REFERENCES Cases(ID) ON DELETE NO ACTION ON UPDATE CASCADE
);
GO

-- Table: SpecialAid
CREATE TABLE SpecialAid (
    ID INT IDENTITY(1,1) PRIMARY KEY, 
    CaseID INT NOT NULL, 
    AidType NVARCHAR(100) NOT NULL,  
    Amount DECIMAL(18,2) NOT NULL,  
    RegistrationDate DATE NOT NULL,  
    ReceivedDate DATE,  
    CreatedAt DATETIME DEFAULT GETDATE(),
    UpdatedAt DATETIME,

    CONSTRAINT FK_SA_Cases FOREIGN KEY (CaseID) 
        REFERENCES Cases(ID) ON DELETE NO ACTION ON UPDATE CASCADE,
    CONSTRAINT CHK_SA_ReceivedDate CHECK (ReceivedDate IS NULL OR ReceivedDate >= RegistrationDate)
);
GO

-- Table: FinancialAid
CREATE TABLE FinancialAid (
    ID INT IDENTITY(1,1) PRIMARY KEY, 
    CaseID INT NOT NULL, 
    AidType NVARCHAR(100) NOT NULL,  
    Frequency NVARCHAR(50) NOT NULL,  
    RegistrationDate DATE NOT NULL,  
    NextDueDate DATE,  
    Amount DECIMAL(18,2) NOT NULL,  
    ReceivedCount INT DEFAULT 0,  
    IsActive BIT DEFAULT 1,  
    CreatedAt DATETIME DEFAULT GETDATE(),
    UpdatedAt DATETIME,

    CONSTRAINT FK_FA_Cases FOREIGN KEY (CaseID) 
        REFERENCES Cases(ID) ON DELETE NO ACTION ON UPDATE CASCADE
);
GO
