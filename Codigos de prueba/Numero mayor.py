numeros = []
cant = int(input("Ingrese la cantidad de numeros: "))

for i in range(cant):
    num = int(input(f"Ingrese el numero {i+1}: "))
    numeros.append(num)

mayor = max(numeros)

print("Su numero mayor es el: ", mayor)
