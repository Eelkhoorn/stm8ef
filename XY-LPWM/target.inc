;       STM8S003F3 device and memory layout configuration

        TARGET = STM8S003F3

        RAMEND =        0x03FF  ; system (return) stack, growing down
        ; EEPROMEND =     0x427F  ; STM8S103F3: 640 bytes EEPROM
        EEPROMEND =     0x407F  ; STM8S003F3: 128 bytes EEPROM (maybe more, YMMV)
        FLASHEND =      0x9FFF  ; 8K devices

        FORTHRAM =      0x0040  ; Start of RAM controlled by Forth
        UPPLOC  =       0x0060  ; UPP (user/system area) location for 1K RAM
        CTOPLOC =       0x0080  ; CTOP (user dictionary) location for 1K RAM
        SPPLOC  =       0x0350  ; SPP (data stack top), TIB start
        RPPLOC  =       RAMEND  ; RPP (return stack top)

