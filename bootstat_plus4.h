#ifndef BOOTSTAT_PLUS4
#define BOOTSTAT_PLUS4

int dflt_bootStatNum = 22;

int dflt_bootStatWhat[] = {
    BOOTSTAT_WHAT_STAT,
    BOOTSTAT_WHAT_STAT,
    BOOTSTAT_WHAT_STAT,
    BOOTSTAT_WHAT_STAT,
    BOOTSTAT_WHAT_STAT,
    BOOTSTAT_WHAT_STAT,
    BOOTSTAT_WHAT_STAT,
    BOOTSTAT_WHAT_STAT,
    BOOTSTAT_WHAT_FAIL,
    BOOTSTAT_WHAT_FAIL,
    BOOTSTAT_WHAT_FAIL,
    BOOTSTAT_WHAT_FAIL,
    BOOTSTAT_WHAT_FAIL,
    BOOTSTAT_WHAT_FAIL,
    BOOTSTAT_WHAT_FAIL,
    BOOTSTAT_WHAT_FAIL,
    BOOTSTAT_WHAT_FAIL,
    BOOTSTAT_WHAT_FAIL,
    BOOTSTAT_WHAT_FAIL,
    BOOTSTAT_WHAT_FAIL,
    BOOTSTAT_WHAT_FAIL,
};

const char *dflt_bootStatFile[] = {
    "kernal",
    "kernal.005",
    "kernal.232",
    "kernal.364",
    "basic",
    "3plus1hi",
    "3plus1lo", 
    "c2lo.364",
    "mps803",
    "mps803.vpl",
    "nl10-cbm",
    "1520.vpl",
    "dos1540",
    "dos1570",
    "dos2000",
    "dos4000",
    "dos2031",
    "dos2040",
    "dos3040",
    "dos4040",
    "dos1001",
};
int dflt_bootStatSize[] = {
    16384,
    16384,
    16384,
    16384,
    16384,
    16384,
    16384,
    16384,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
};

#endif
