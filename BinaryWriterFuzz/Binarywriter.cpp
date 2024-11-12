#using <System.dll>

#include<stdint.h>

using namespace System;
using namespace System::IO;

extern "C" int LLVMFuzzerTestOneInput(const uint8_t* Data, size_t Size) {
    try {
        // Validate input
        if (Data == nullptr || Size == 0) {
            Console::WriteLine("Invalid input");
            return 0;
        }

        // Create fuzz data file
        String^ fileName = "fuzz_data.bin";
        FileStream^ fs = gcnew FileStream(fileName, FileMode::Create);
        BinaryWriter^ w = gcnew BinaryWriter(fs);

        // Write fuzz data
        for (size_t i = 0; i < Size; i += sizeof(int)) {
            int value = *reinterpret_cast<const int*>(Data + i);
            Console::WriteLine(value);
            w->Write(value);
        }
        fs->Close();
        Console::WriteLine("File '{0}' written", fileName);
    }
    catch (Exception^ e) {
        Console::WriteLine("Error: {0}", e->Message);
    }

    return 0;
}