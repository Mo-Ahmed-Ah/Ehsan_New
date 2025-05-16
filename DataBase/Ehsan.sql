
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

CREATE TABLE Aid (
    ID INT IDENTITY(1,1) PRIMARY KEY,
    CaseID INT NOT NULL,
    -- نوع المساعدة: Financial, InKind, SeasonalFinancial, SeasonalInKind, Special
    AidCategory NVARCHAR(50) NOT NULL,
    -- النوع داخل التصنيف، مثال: "نقد شهري", "بطانية", "رمضان", "زكاة"
    AidType NVARCHAR(100),
    -- للعينية فقط (مثلاً "أرز وسكر"، "بطانية")
    AidContent NVARCHAR(255),
    -- تكرار المساعدة: شهري، أسبوعي، لمرة واحدة
    Frequency NVARCHAR(50),
    IsRecurring BIT DEFAULT 0,
    -- للمساعدات المالية
    Amount DECIMAL(18,2),
    -- للمساعدات المتكررة
    ReceivedCount INT DEFAULT 0,
    -- للموسمية فقط (رمضان، عيد الأضحى، شتاء...)
    SeasonType NVARCHAR(100),
    -- التواريخ
    RegistrationDate DATE NOT NULL,
    ReceivedDate DATE,
    NextDueDate DATE,

    Notes NVARCHAR(1000),
    IsActive BIT DEFAULT 1,
    CreatedAt DATETIME DEFAULT GETDATE(),
    UpdatedAt DATETIME,

    FOREIGN KEY (CaseID) REFERENCES Cases(ID) ON DELETE CASCADE
);

