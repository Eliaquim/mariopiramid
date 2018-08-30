# biblioteca necessária para usar get_int
import cs50

altura = -1

# o programa funciona com altura entre 1 a 23 blocos
while altura < 0 or altura > 23:
    altura = cs50.get_int("Height: ")

espacos = altura - 1
tijolos = 2

for i in range(0, altura):
    for j in range(espacos):
        print(" ", end="")
    for k in range(tijolos):
        print("#", end="")
    print()
    espacos -= 1
    tijolos += 1
