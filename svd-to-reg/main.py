"""
Copyright (c)<2022> Daniel Mironow

Simple script to create a .h file for my register abstraction class
"""
from cmsis_svd.parser import SVDParser

parser = SVDParser.for_packaged_svd('STMicro', 'STM32F411xx.svd')

with open("stm32f411.h", "w") as outfile:
    outfile.write('#include "register.h"\n\n')
    outfile.write("namespace stm32f4 {\n")
    outfile.write("\tnamespace regs {\n")
    # iterate through all perioperals
    for peripheral in parser.get_device().peripherals:
        outfile.write("\t\tnamespace %s {\n" % peripheral.name.lower())
        # iterate through all register of the peripheral and add to .h
        for reg in peripheral.registers:
            outfile.write("\t\t\tstatic Field<32> %s(0x%08x);\n" % (
                reg.name,
                peripheral.base_address + reg.address_offset)
            )
        outfile.write("\t\t};\n")
    outfile.write("\t};\n};")

print("[+] Done")
