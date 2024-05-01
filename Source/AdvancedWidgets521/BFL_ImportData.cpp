// Fill out your copyright notice in the Description page of Project Settings.


#include "BFL_ImportData.h"
#include "Misc/FileHelper.h"

FString UBFL_ImportData::ImportFile(FString FileLocation)
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	if (PlatformFile.FileExists(*FileLocation))
	{
		FString FileData;
		FFileHelper::LoadFileToString(FileData, *FileLocation);

		return FileData;
	}

	return FString();
}
