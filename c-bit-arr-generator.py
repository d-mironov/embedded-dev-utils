
f1 = open("out.c", "w")
f1.write("#include <stdint.h>\n\n")
f1.write("uint32_t bit[32] = {\n\t")
f1.write("(1 << 0), ")
for i in range(1, 32):
    f1.write(("\n\t" if i % 8 == 0 else "") + f"(1 << {i}), ")
f1.write("\n};\n")

f1.close()
