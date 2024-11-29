from Bio.Seq import seq

sequence = "ATCGATCGATATATCAGCTCATGCGTCG"

seq = Seq(sequence)

count_A = seq.count("A")
count_T = seq.count("T")
count_G = seq.count("G")
count_C = seq.count("C")

print("Number of adenine (A):", count_A)
print("Number of thymine (T):", count_T)
print("Number of guanine (G):", count_G)
print("Number of cytosine (C):",count_C)
