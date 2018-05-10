

chargeDensityFile = open("CHGCAR.vasp", "r")

for i in chargeDensityFile:
	print(i)

chargeDensityFile.close()